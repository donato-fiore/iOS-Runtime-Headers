// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCONTACTSTOPSHARINGWITHFAMILY_H
#define CNCONTACTSTOPSHARINGWITHFAMILY_H



#import "CNContactAction.h"

@interface CNContactStopSharingWithFamily : CNContactAction



-(BOOL)canPerformAction;
-(BOOL)familySharedContainerExists;
-(BOOL)isDestructive;
-(BOOL)wrapTitle;
-(id)title;
-(void)performActionWithSender:(id)arg0 ;


@end


#endif