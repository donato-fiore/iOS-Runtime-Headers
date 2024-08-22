// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFINPUTDATEDIALOGRESPONSE_H
#define WFINPUTDATEDIALOGRESPONSE_H

@class NSDate;
@protocol NSSecureCoding;


#import "WFDialogResponse.h"

@interface WFInputDateDialogResponse : WFDialogResponse <NSSecureCoding>



@property (readonly, nonatomic) NSDate *inputtedDate; // ivar: _inputtedDate


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInputtedDate:(id)arg0 cancelled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif