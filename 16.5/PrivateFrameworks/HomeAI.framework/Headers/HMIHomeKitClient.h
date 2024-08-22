// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIHOMEKITCLIENT_H
#define HMIHOMEKITCLIENT_H

@class HMFObject, NSString, NSOperationQueue, HMHomeManager, NSArray;
@protocol HMFLogging;



@interface HMIHomeKitClient : HMFObject <HMFLogging>



@property (readonly) NSUInteger cachePolicy; // ivar: _cachePolicy
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSOperationQueue *homeKitOperationQueue; // ivar: _homeKitOperationQueue
@property (retain) HMHomeManager *homeManager; // ivar: _homeManager
@property (readonly) NSArray *homes; // ivar: _homes
@property (readonly, getter=isSetup) BOOL setup; // ivar: _setup
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)isCurrentDevicePrimaryResident;
-(id)cameraProfileWithUUID:(id)arg0 ;
-(id)homeForHMPersonManagerUUID:(id)arg0 ;
-(id)homePersonManagerForHomeUUID:(id)arg0 ;
-(id)homePersonManagersForCurrentDevice;
-(id)homeWithCameraProfileUUID:(id)arg0 ;
-(id)init;
-(id)initWithCachePolicy:(NSUInteger)arg0 ;
-(id)initWithNoCaching;
-(id)photosPersonManagerForHomeUUID:(id)arg0 sourceUUID:(id)arg1 ;
-(void)setup;


@end


#endif