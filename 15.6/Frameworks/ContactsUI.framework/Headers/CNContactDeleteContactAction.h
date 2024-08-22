// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTACTDELETECONTACTACTION_H
#define CNCONTACTDELETECONTACTACTION_H

@class CNUICoreRecentsManager;


#import "CNContactAction.h"
#import "CNUIExternalComponentsFactory.h"

@interface CNContactDeleteContactAction : CNContactAction

@property (readonly, nonatomic) CNUIExternalComponentsFactory *componentsFactory; // ivar: _componentsFactory
@property (readonly, nonatomic) CNUICoreRecentsManager *recentsManager; // ivar: _recentsManager


-(BOOL)deleteContact;
-(id)initWithContact:(id)arg0 recentsManager:(id)arg1 componentsFactory:(id)arg2 ;
-(void)performActionWithSender:(id)arg0 ;
-(void)showDeleteFailureAlert;


@end


#endif