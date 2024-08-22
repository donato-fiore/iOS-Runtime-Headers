// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTDISABLEGUARDIANRESTRICTIONSACTION_H
#define CNCONTACTDISABLEGUARDIANRESTRICTIONSACTION_H

@class CNContactStore, CNContainer;


#import "CNContactAction.h"

@interface CNContactDisableGuardianRestrictionsAction : CNContactAction

@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, nonatomic) CNContainer *container; // ivar: _container


-(BOOL)canPerformAction;
-(BOOL)isDestructive;
-(id)initWithContact:(id)arg0 inContainer:(id)arg1 contactStore:(id)arg2 ;
-(id)title;
-(void)performActionWithSender:(id)arg0 ;


@end


#endif