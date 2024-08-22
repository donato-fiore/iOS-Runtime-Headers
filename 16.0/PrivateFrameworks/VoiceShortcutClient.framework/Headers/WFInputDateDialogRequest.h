// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFINPUTDATEDIALOGREQUEST_H
#define WFINPUTDATEDIALOGREQUEST_H

@class NSString;
@protocol NSSecureCoding;


#import "WFDialogRequest.h"
#import "WFDialogButton.h"
#import "WFDatePickerConfiguration.h"

@interface WFInputDateDialogRequest : WFDialogRequest <NSSecureCoding>



@property (readonly, copy, nonatomic) WFDialogButton *cancelButton; // ivar: _cancelButton
@property (readonly, copy, nonatomic) WFDatePickerConfiguration *configuration; // ivar: _configuration
@property (readonly, copy, nonatomic) WFDialogButton *doneButton; // ivar: _doneButton
@property (readonly, copy, nonatomic) NSString *message; // ivar: _message


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDatePickerConfiguration:(id)arg0 message:(id)arg1 attribution:(id)arg2 prompt:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif