// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNACTIONCONFIGURATIONSWITCHCASE_H
#define LNACTIONCONFIGURATIONSWITCHCASE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "LNActionConfiguration.h"
#import "LNValue.h"

@interface LNActionConfigurationSwitchCase : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) LNActionConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic, getter=isDefaultCase) BOOL defaultCase; // ivar: _defaultCase
@property (readonly, nonatomic) LNValue *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDefaultConfiguration:(id)arg0 ;
-(id)initWithValue:(id)arg0 configuration:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif