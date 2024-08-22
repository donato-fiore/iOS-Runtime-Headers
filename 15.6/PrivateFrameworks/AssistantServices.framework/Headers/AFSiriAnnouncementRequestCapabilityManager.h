// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFSIRIANNOUNCEMENTREQUESTCAPABILITYMANAGER_H
#define AFSIRIANNOUNCEMENTREQUESTCAPABILITYMANAGER_H

@class NSHashTable;
@protocol AFAnnouncementRequestCapabilityProvidingDelegate, AFAnnouncementRequestCapabilityProviding;

#import <Foundation/Foundation.h>


@interface AFSiriAnnouncementRequestCapabilityManager : NSObject <AFAnnouncementRequestCapabilityProvidingDelegate>

 {
    NSHashTable *_observers;
    id<AFAnnouncementRequestCapabilityProviding> *_capabilityProvider;
    NSInteger _platform;
}




+(BOOL)_supportsAnnouncementType:(NSUInteger)arg0 forSupportedIntents:(id)arg1 forBundleId:(id)arg2 onPlatform:(NSInteger)arg3 ;
+(Class)_classForPlatform:(NSInteger)arg0 ;
+(NSInteger)notificationAnnouncementTypeForNotificationFromApp:(id)arg0 withIntentIDs:(id)arg1 onPlatform:(NSInteger)arg2 ;
+(id)_requiredBundleIDsForNotificationAnnouncementType:(NSInteger)arg0 ;
+(id)supportedAnnouncementTypesForBundleId:(id)arg0 onPlatform:(NSInteger)arg1 ;
-(id)initWithPlatform:(NSInteger)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)fetchAvailableAnnouncementRequestTypesWithCompletion:(id)arg0 ;
-(void)fetchEligibleAnnouncementRequestTypesWithCompletion:(id)arg0 ;
-(void)provider:(id)arg0 availableAnnouncementRequestTypesChanged:(NSUInteger)arg1 ;
-(void)provider:(id)arg0 eligibleAnnouncementRequestTypesChanged:(NSUInteger)arg1 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif