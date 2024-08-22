// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXFETCHRESULTCOUNTOBSERVER_H
#define PXFETCHRESULTCOUNTOBSERVER_H

@class NSString, PHFetchResult, PHPhotoLibrary;
@protocol PHPhotoLibraryChangeObserver, OS_dispatch_queue, PXFetchResultCountObserverDelegate;

#import <Foundation/Foundation.h>


@interface PXFetchResultCountObserver : NSObject <PHPhotoLibraryChangeObserver>

 {
    NSObject<OS_dispatch_queue> *_serialQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXFetchResultCountObserverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PHFetchResult *fetchResult; // ivar: _fetchResult
@property (nonatomic) NSInteger fetchResultCount; // ivar: _fetchResultCount
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly) Class superclass;


-(id)init;
-(id)initWithQOSClass:(unsigned int)arg0 photoLibrary:(id)arg1 fetchResultBlock:(id)arg2 ;
-(void)_serialQueue_acquireFetchResultFromBlock:(id)arg0 ;
-(void)photoLibraryDidChange:(id)arg0 ;


@end


#endif