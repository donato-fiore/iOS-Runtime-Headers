// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAUICONFIRMATIONVIEW_H
#define SAUICONFIRMATIONVIEW_H

@class NSArray, NSString;


#import "SAAceView.h"

@interface SAUIConfirmationView : SAAceView

@property (copy, nonatomic) NSArray *allConfirmationOptions;
@property (copy, nonatomic) NSString *cancelTrigger;
@property (copy, nonatomic) NSArray *confirmCommands;
@property (copy, nonatomic) NSString *confirmText;
@property (copy, nonatomic) NSArray *denyCommands;
@property (copy, nonatomic) NSString *denyText;
@property (copy, nonatomic) NSString *style;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *title;


+(id)confirmationView;
+(id)confirmationViewWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif