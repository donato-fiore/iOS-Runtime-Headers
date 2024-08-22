// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DDCREATEREMINDERACTION_H
#define DDCREATEREMINDERACTION_H



#import "DDAction.h"

@interface DDCreateReminderAction : DDAction



-(BOOL)canBePerformedByOpeningURL;
-(id)iconName;
-(id)localizedName;
-(int)interactionType;
-(void)prepareViewControllerForActionController:(id)arg0 ;


@end


#endif