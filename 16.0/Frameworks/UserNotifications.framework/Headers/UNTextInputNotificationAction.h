// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UNTEXTINPUTNOTIFICATIONACTION_H
#define UNTEXTINPUTNOTIFICATIONACTION_H

@class NSString;


#import "UNNotificationAction.h"

@interface UNTextInputNotificationAction : UNNotificationAction

@property (readonly, copy, nonatomic) NSString *textInputButtonTitle;
@property (readonly, copy, nonatomic) NSString *textInputPlaceholder;


+(id)actionWithIdentifier:(id)arg0 title:(id)arg1 options:(NSUInteger)arg2 icon:(id)arg3 textInputButtonTitle:(id)arg4 textInputPlaceholder:(id)arg5 ;
+(id)actionWithIdentifier:(id)arg0 title:(id)arg1 options:(NSUInteger)arg2 textInputButtonTitle:(id)arg3 textInputPlaceholder:(id)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;


@end


#endif