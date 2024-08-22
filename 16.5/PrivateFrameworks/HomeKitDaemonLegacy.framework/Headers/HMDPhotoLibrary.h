// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDPHOTOLIBRARY_H
#define HMDPHOTOLIBRARY_H

@class HMFObject, NSString, NSSet, PHPhotoLibrary, PHFetchResult;
@protocol HMFLogging, PHPhotoLibraryChangeObserver, HMDPhotoLibraryDelegate, OS_dispatch_queue;



@interface HMDPhotoLibrary : HMFObject <HMFLogging, PHPhotoLibraryChangeObserver>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDPhotoLibraryDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSSet *persons;
@property (readonly) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (retain) PHFetchResult *suggestedPersonsFetchResult; // ivar: _suggestedPersonsFetchResult
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)_phPersonWithUUID:(id)arg0 fromSuggestedPersonsFetchResult:(id)arg1 ;
+(id)logCategory;
-(NSUInteger)numberOfFaceCropsForPersonWithUUID:(id)arg0 ;
-(id)faceCropFromFaceCropData:(id)arg0 ;
-(id)fetchFaceCropDataByUUIDForPersonUUID:(id)arg0 ;
-(id)initWithWorkQueue:(id)arg0 ;
-(void)fetchPersons;
-(void)photoLibraryDidChange:(id)arg0 ;


@end


#endif