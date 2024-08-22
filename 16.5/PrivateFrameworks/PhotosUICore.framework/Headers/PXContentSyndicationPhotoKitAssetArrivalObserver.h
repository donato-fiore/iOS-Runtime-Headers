// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCONTENTSYNDICATIONPHOTOKITASSETARRIVALOBSERVER_H
#define PXCONTENTSYNDICATIONPHOTOKITASSETARRIVALOBSERVER_H

@class PHFetchResult, NSString, NSSet, PHPhotoLibrary, NSDate;
@protocol PHPhotoLibraryChangeObserver;

#import <Foundation/Foundation.h>


@interface PXContentSyndicationPhotoKitAssetArrivalObserver : NSObject <PHPhotoLibraryChangeObserver>



@property (readonly, nonatomic) PHFetchResult *assetsFetchResult; // ivar: _assetsFetchResult
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSSet *expectedUUIDs; // ivar: _expectedUUIDs
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDate *waitStartTimestamp; // ivar: _waitStartTimestamp


-(id)initWithExpectedAssetUUIDs:(id)arg0 inPhotoLibrary:(id)arg1 ;
-(void)dealloc;
-(void)photoLibraryDidChange:(id)arg0 ;
-(void)updateWithFetchResult:(id)arg0 ;
-(void)waitForAssetArrivalsWithCompletion:(id)arg0 ;


@end


#endif