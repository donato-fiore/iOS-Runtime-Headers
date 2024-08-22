// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCONTACTCLEARRECENTSDATAACTION_H
#define CNCONTACTCLEARRECENTSDATAACTION_H

@class CNUICoreRecentsManager;


#import "CNContactAction.h"
#import "CNContactRecentsReference.h"

@interface CNContactClearRecentsDataAction : CNContactAction

@property (readonly, nonatomic) CNUICoreRecentsManager *coreRecentsManager; // ivar: _coreRecentsManager
@property (readonly, nonatomic) CNContactRecentsReference *recentsData; // ivar: _recentsData


-(BOOL)canPerformAction;
-(BOOL)isDestructive;
-(id)initWithRecentsData:(id)arg0 coreRecentsManager:(id)arg1 ;
-(id)title;
-(void)performActionWithSender:(id)arg0 ;


@end


#endif