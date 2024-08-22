// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTSHAREWITHFAMILYACTION_H
#define CNCONTACTSHAREWITHFAMILYACTION_H



#import "CNContactAction.h"

@interface CNContactShareWithFamilyAction : CNContactAction



-(BOOL)canPerformAction;
-(BOOL)familySharedContainerExists;
-(BOOL)isDestructive;
-(id)title;
-(void)performActionWithSender:(id)arg0 ;


@end


#endif