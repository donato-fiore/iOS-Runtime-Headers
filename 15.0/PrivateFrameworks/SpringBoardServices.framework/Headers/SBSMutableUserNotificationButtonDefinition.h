// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSMUTABLEUSERNOTIFICATIONBUTTONDEFINITION_H
#define SBSMUTABLEUSERNOTIFICATIONBUTTONDEFINITION_H

@class NSString;


#import "SBSUserNotificationButtonDefinition.h"

@interface SBSMutableUserNotificationButtonDefinition : SBSUserNotificationButtonDefinition

@property (nonatomic) BOOL isPreferredButton;
@property (nonatomic) int presentationStyle;
@property (copy, nonatomic) NSString *title;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif