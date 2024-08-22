// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXCONTACTMODEDENYLISTMODEL_H
#define ATXCONTACTMODEDENYLISTMODEL_H

@class NSSet;

#import <Foundation/Foundation.h>

#import "ATXContactModeEntityDenyListModelWeights.h"

@interface ATXContactModeDenyListModel : NSObject {
    NSUInteger _mode;
    NSSet *_cnContactIdsOfFavoriteContacts;
    NSSet *_vipContactEmailAddresses;
    ATXContactModeEntityDenyListModelWeights *_contactModeEntityDenyListModelWeights;
}




-(CGFloat)scoreFromContactFeatures:(id)arg0 ;
-(id)contactKeysToFetch;
-(id)initWithMode:(NSUInteger)arg0 ;
-(id)meContact;
-(id)purgeDeletedContacts:(id)arg0 ;
-(id)scoredEntities;


@end


#endif