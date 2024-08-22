// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CASSYSTEMAUTHENTICATIONRESPONSE_H
#define CASSYSTEMAUTHENTICATIONRESPONSE_H

@protocol NSSecureCoding;


#import "CASAuthenticationResponse.h"

@interface CASSystemAuthenticationResponse : CASAuthenticationResponse <NSSecureCoding>





+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif