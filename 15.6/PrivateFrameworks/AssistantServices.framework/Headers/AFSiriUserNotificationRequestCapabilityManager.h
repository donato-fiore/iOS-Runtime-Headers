// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFSIRIUSERNOTIFICATIONREQUESTCAPABILITYMANAGER_H
#define AFSIRIUSERNOTIFICATIONREQUESTCAPABILITYMANAGER_H

@class NSHashTable;
@protocol AFAnnouncementRequestCapabilityProvidingDelegate, OS_dispatch_queue, AFAnnouncementRequestCapabilityProviding;

#import <Foundation/Foundation.h>


@interface AFSiriUserNotificationRequestCapabilityManager : NSObject <AFAnnouncementRequestCapabilityProvidingDelegate>

 {
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_queue;
    id<AFAnnouncementRequestCapabilityProviding> *_capabilityProvider;
    NSInteger _platform;
}




+(BOOL)supportedByApplicationWithBundleID:(id)arg0 ;
+(Class)_classForPlatform:(NSInteger)arg0 ;
+(id)sharedManager;
-(BOOL)hasEligibleSetup;
-(BOOL)requestCanBeHandled;
-(id)_initWithPlatform:(NSInteger)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)fetchEligibleSetupStateWithCompletion:(id)arg0 ;
-(void)fetchRequestCanBeHandledStateWithCompletion:(id)arg0 ;
-(void)notifyObserversOfCurrentEligibleSetupState:(BOOL)arg0 onPlatform:(NSInteger)arg1 ;
-(void)notifyObserversOfCurrentRequestCanBeHandledState:(BOOL)arg0 onPlatform:(NSInteger)arg1 ;
-(void)provider:(id)arg0 availableAnnouncementRequestTypesChanged:(NSUInteger)arg1 ;
-(void)provider:(id)arg0 eligibleAnnouncementRequestTypesChanged:(NSUInteger)arg1 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif