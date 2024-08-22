// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFINPUTTEXTDIALOGREQUEST_H
#define WFINPUTTEXTDIALOGREQUEST_H

@class NSString, WFTextFieldConfiguration;
@protocol NSSecureCoding;


#import "WFDialogRequest.h"
#import "WFDialogButton.h"

@interface WFInputTextDialogRequest : WFDialogRequest <NSSecureCoding>



@property (readonly, copy, nonatomic) WFDialogButton *cancelButton; // ivar: _cancelButton
@property (readonly, copy, nonatomic) WFDialogButton *doneButton; // ivar: _doneButton
@property (readonly, copy, nonatomic) NSString *message; // ivar: _message
@property (readonly, copy, nonatomic) WFTextFieldConfiguration *textFieldConfiguration; // ivar: _textFieldConfiguration


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTextFieldConfiguration:(id)arg0 message:(id)arg1 attribution:(id)arg2 prompt:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif