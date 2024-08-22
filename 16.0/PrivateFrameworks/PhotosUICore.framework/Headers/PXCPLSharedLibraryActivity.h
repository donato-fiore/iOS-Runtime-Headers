// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCPLSHAREDLIBRARYACTIVITY_H
#define PXCPLSHAREDLIBRARYACTIVITY_H

@class PHFetchResult, NSString, PHPhotoLibrary;
@protocol PHPhotoLibraryChangeObserver, OS_dispatch_queue;


#import "PXObservable.h"

@interface PXCPLSharedLibraryActivity : PXObservable <PHPhotoLibraryChangeObserver>

 {
    NSObject<OS_dispatch_queue> *_serialQueue;
    PHFetchResult *_libraryScopeFetchResult;
    PHFetchResult *_assetsFetchResult;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger movingToPersonal; // ivar: _movingToPersonal
@property (readonly, nonatomic) NSUInteger movingToShared; // ivar: _movingToShared
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;


-(id)init;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(void)_queue_fetchLibraryScopeForPhotoLibrary:(id)arg0 ;
-(void)_queue_handleCloudStatusCounts:(id)arg0 error:(id)arg1 libraryScope:(id)arg2 ;
-(void)_queue_photoLibraryDidChange:(id)arg0 ;
-(void)_queue_updateForChangeToFetchResults;
-(void)_queue_updateScopeStatusCounts;
-(void)_updateScopeStatusCounts;
-(void)photoLibraryDidChange:(id)arg0 ;


@end


#endif