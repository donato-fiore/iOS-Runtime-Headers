// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXCONTACTMODEMODEL_H
#define ATXCONTACTMODEMODEL_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface ATXContactModeModel : NSObject {
    NSUInteger _mode;
    NSSet *_cnContactIdsOfFavoriteContacts;
    NSSet *_vipContactEmailAddresses;
}




-(CGFloat)scoreFromContactFeatures:(id)arg0 ;
-(id)contactKeysToFetch;
-(id)init;
-(id)initWithMode:(NSUInteger)arg0 ;
-(id)meContact;
-(id)purgeDeletedContacts:(id)arg0 ;
-(id)scoredEntities;


@end


#endif