// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSCONVOLUTIONDATASOURCEWRAPPER_SECURECODING_H
#define MPSCONVOLUTIONDATASOURCEWRAPPER_SECURECODING_H

@protocol NSSecureCoding;


#import "MPSConvolutionDataSourceWrapper.h"

@interface MPSConvolutionDataSourceWrapper_SecureCoding : MPSConvolutionDataSourceWrapper <NSSecureCoding>





+(BOOL)supportsSecureCoding;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif