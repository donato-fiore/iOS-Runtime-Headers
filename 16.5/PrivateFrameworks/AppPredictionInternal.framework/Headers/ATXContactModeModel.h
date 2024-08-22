// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXCONTACTMODEMODEL_H
#define ATXCONTACTMODEMODEL_H

@class NSSet;
@protocol ATXModeEntityEventProviderProtocol;

#import <Foundation/Foundation.h>

#import "ATXDenyListEligibilityThresholds.h"
#import "ATXContactModeEntityModelWeights.h"
#import "ATXContactNotificationEngagementEventProvider.h"

@interface ATXContactModeModel : NSObject {
    NSUInteger _mode;
    NSSet *_cnContactIdsOfFavoriteContacts;
    NSSet *_vipContactEmailAddresses;
    NSSet *_cnContactIdsOfEmergencyContacts;
    NSSet *_cnContactIdsOfICloudFamilyMembers;
    ATXDenyListEligibilityThresholds *_denyListThresholds;
    ATXContactModeEntityModelWeights *_contactModeEntityModelWeights;
    ATXContactNotificationEngagementEventProvider *_contactNotificationEngagementEventProvider;
    id<ATXModeEntityEventProviderProtocol> *_modeEventProvider;
}




-(BOOL)shouldSuggestContactForDenyListWithScoreInOtherMode:(id)arg0 scoreInCurrentMode:(id)arg1 ;
-(CGFloat)scoreFromContactFeatures:(id)arg0 ;
-(id)contactKeysToFetch;
-(id)init;
-(id)initWithMode:(NSUInteger)arg0 ;
-(id)meContact;
-(id)purgeDeletedContacts:(id)arg0 ;
-(id)scoredEntities;
-(id)scoredEntitiesForDenyListWithScoresAcrossAllModes:(id)arg0 ;
-(void)addNotificationsSignalsForIdentifier:(id)arg0 toContactSpecificFeatures:(id)arg1 ;


@end


#endif