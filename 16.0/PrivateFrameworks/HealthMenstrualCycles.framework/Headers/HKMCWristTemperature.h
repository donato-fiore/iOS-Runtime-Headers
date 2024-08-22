// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMCWRISTTEMPERATURE_H
#define HKMCWRISTTEMPERATURE_H

@class NSString, HKQuantity;
@protocol HKRedactedDescription, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HKMCWristTemperature : NSObject <HKRedactedDescription, NSSecureCoding, NSCopying>



@property (readonly, copy) NSString *hk_redactedDescription;
@property (readonly, nonatomic) HKQuantity *quantity; // ivar: _quantity
@property (readonly, nonatomic) NSString *watchBundleIdentifier; // ivar: _watchBundleIdentifier


+(BOOL)supportsSecureCoding;
+(id)wristTemperatureFromWristTemperatureSample:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithQuantity:(id)arg0 watchBundleIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif