// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMICLOUDISOFFDATAVIEWCONFIGURATIONSINVOCATIONRESULT_H
#define REMICLOUDISOFFDATAVIEWCONFIGURATIONSINVOCATIONRESULT_H

@protocol NSSecureCoding;


#import "REMStoreInvocationResult.h"

@interface REMICloudIsOffDataViewConfigurationsInvocationResult : REMStoreInvocationResult <NSSecureCoding>



@property (readonly, nonatomic) CGFloat timeIntervalSinceLastPrompt; // ivar: _timeIntervalSinceLastPrompt


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimeIntervalSinceLastPrompt:(CGFloat)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif