// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPCONTACTMESSAGEBUTTON_H
#define CPCONTACTMESSAGEBUTTON_H

@class NSString;


#import "CPButton.h"

@interface CPContactMessageButton : CPButton

@property (readonly, copy, nonatomic) NSString *phoneOrEmail; // ivar: _phoneOrEmail


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPhoneOrEmail:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif