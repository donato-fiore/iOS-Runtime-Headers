// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFINPUTTEXTDIALOGRESPONSE_H
#define WFINPUTTEXTDIALOGRESPONSE_H

@class NSString;
@protocol NSSecureCoding;


#import "WFDialogResponse.h"

@interface WFInputTextDialogResponse : WFDialogResponse <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *inputtedText; // ivar: _inputtedText


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInputtedText:(id)arg0 cancelled:(BOOL)arg1 ;
-(id)initWithResponseCode:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif