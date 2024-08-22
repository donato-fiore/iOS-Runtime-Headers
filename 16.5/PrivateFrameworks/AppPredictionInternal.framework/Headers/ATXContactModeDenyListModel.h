// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXCONTACTMODEDENYLISTMODEL_H
#define ATXCONTACTMODEDENYLISTMODEL_H

@class NSSet;
@protocol ATXModeEntityEventProviderProtocol;

#import <Foundation/Foundation.h>

#import "ATXContactModeEntityDenyListModelWeights.h"
#import "ATXContactNotificationEngagementEventProvider.h"

@interface ATXContactModeDenyListModel : NSObject {
    NSUInteger _mode;
    NSSet *_cnContactIdsOfFavoriteContacts;
    NSSet *_vipContactEmailAddresses;
    NSSet *_cnContactIdsOfEmergencyContacts;
    NSSet *_cnContactIdsOfICloudFamilyMembers;
    ATXContactModeEntityDenyListModelWeights *_contactModeEntityDenyListModelWeights;
    ATXContactNotificationEngagementEventProvider *_contactNotificationEngagementEventProvider;
    id<ATXModeEntityEventProviderProtocol> *_modeEventProvider;
}




-(CGFloat)scoreFromContactFeatures:(id)arg0 ;
-(id)contactKeysToFetch;
-(id)initWithMode:(NSUInteger)arg0 ;
-(id)meContact;
-(id)purgeDeletedContacts:(id)arg0 ;
-(id)scoredEntities;
-(void)addNotificationsSignalsForIdentifier:(id)arg0 toContactSpecificFeatures:(id)arg1 ;


@end


#endif