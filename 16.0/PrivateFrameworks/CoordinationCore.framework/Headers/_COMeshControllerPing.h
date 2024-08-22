// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _COMESHCONTROLLERPING_H
#define _COMESHCONTROLLERPING_H



#import "COMeshRequest.h"

@interface _COMeshControllerPing : COMeshRequest

@property (readonly, nonatomic) CGFloat responseTimeout; // ivar: _responseTimeout


+(BOOL)supportsSecureCoding;
-(id)initWithTimeout:(CGFloat)arg0 ;


@end


#endif