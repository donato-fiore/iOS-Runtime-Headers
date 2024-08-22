// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCONTACTACTIONPROVIDER_H
#define CNCONTACTACTIONPROVIDER_H

@class CNContact, CNContactStore, CNContainer;

#import <Foundation/Foundation.h>

#import "CNContactAction.h"

@interface CNContactActionProvider : NSObject

@property (readonly, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, nonatomic) CNContainer *container; // ivar: _container
@property (readonly, nonatomic) CNContactAction *disableGuardianRestrictionsAction; // ivar: _disableGuardianRestrictionsAction
@property (readonly, nonatomic) CNContactAction *enableGuardianRestrictionsAction; // ivar: _enableGuardianRestrictionsAction
@property (readonly, nonatomic) CNContactAction *shareWithFamilyAction; // ivar: _shareWithFamilyAction
@property (readonly, nonatomic) CNContactAction *stopSharingWithFamilyAction; // ivar: _stopSharingWithFamilyAction


-(id)initWithContact:(id)arg0 inContainer:(id)arg1 contactStore:(id)arg2 ;


@end


#endif