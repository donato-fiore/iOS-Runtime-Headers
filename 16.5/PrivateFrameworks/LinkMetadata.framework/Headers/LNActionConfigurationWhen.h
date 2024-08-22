// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNACTIONCONFIGURATIONWHEN_H
#define LNACTIONCONFIGURATIONWHEN_H

@protocol NSSecureCoding;


#import "LNActionConfiguration.h"
#import "LNActionConfigurationCondition.h"

@interface LNActionConfigurationWhen : LNActionConfiguration <NSSecureCoding>



@property (readonly, nonatomic) LNActionConfigurationCondition *condition; // ivar: _condition
@property (readonly, nonatomic) LNActionConfiguration *otherwise; // ivar: _otherwise
@property (readonly, nonatomic) LNActionConfiguration *when; // ivar: _when


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCondition:(id)arg0 when:(id)arg1 otherwise:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif