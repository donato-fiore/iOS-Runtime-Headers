// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNPARAMETER_H
#define LNPARAMETER_H



#import "LNProperty.h"
#import "LNParameterConfiguration.h"

@interface LNParameter : LNProperty

@property (readonly, copy, nonatomic) LNParameterConfiguration *configuration; // ivar: _configuration


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 value:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 value:(id)arg1 configuration:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif