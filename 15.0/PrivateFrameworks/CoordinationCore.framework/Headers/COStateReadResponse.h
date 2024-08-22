// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COSTATEREADRESPONSE_H
#define COSTATEREADRESPONSE_H

@class NSDictionary;


#import "COMeshResponse.h"

@interface COStateReadResponse : COMeshResponse

@property (readonly, copy, nonatomic) NSDictionary *state; // ivar: _state


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithState:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif