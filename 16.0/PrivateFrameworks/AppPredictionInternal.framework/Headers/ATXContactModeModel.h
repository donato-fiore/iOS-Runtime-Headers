// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXCONTACTMODEMODEL_H
#define ATXCONTACTMODEMODEL_H

@class NSSet;

#import <Foundation/Foundation.h>

#import "ATXDenyListEligibilityThresholds.h"
#import "ATXContactModeEntityModelWeights.h"

@interface ATXContactModeModel : NSObject {
    NSUInteger _mode;
    NSSet *_cnContactIdsOfFavoriteContacts;
    NSSet *_vipContactEmailAddresses;
    ATXDenyListEligibilityThresholds *_denyListThresholds;
    ATXContactModeEntityModelWeights *_contactModeEntityModelWeights;
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


@end


#endif