// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPLACESPHOTOASSETSSTORE_H
#define PXPLACESPHOTOASSETSSTORE_H

@class NSMutableArray, NSString, NSArray, PHPhotoLibrary;
@protocol PHPhotoLibraryChangeObserver, PXPlacesGeotaggedItemDataSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PXPlacesStore.h"

@interface PXPlacesPhotoAssetsStore : NSObject <PHPhotoLibraryChangeObserver>



@property (retain, nonatomic) NSMutableArray *completions; // ivar: _completions
@property (readonly) NSObject<PXPlacesGeotaggedItemDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didCompleteLoad; // ivar: _didCompleteLoad
@property (nonatomic) BOOL didInitiateLoad; // ivar: _didInitiateLoad
@property (retain, nonatomic) NSArray *fetchResults; // ivar: _fetchResults
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (retain, nonatomic) PXPlacesStore *store; // ivar: _store
@property (readonly) Class superclass;


-(id)initWithFetchResults:(id)arg0 ;
-(void)_addItems:(id)arg0 intoStore:(id)arg1 ;
-(void)_handleAssetsImport;
-(void)dealloc;
-(void)loadWithCompletion:(id)arg0 ;
-(void)photoLibraryDidChange:(id)arg0 ;


@end


#endif