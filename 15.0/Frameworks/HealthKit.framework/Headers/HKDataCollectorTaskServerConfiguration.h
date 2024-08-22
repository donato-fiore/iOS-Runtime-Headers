// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKDATACOLLECTORTASKSERVERCONFIGURATION_H
#define HKDATACOLLECTORTASKSERVERCONFIGURATION_H

@class NSString;


#import "HKTaskConfiguration.h"
#import "HKQuantityType.h"

@interface HKDataCollectorTaskServerConfiguration : HKTaskConfiguration

@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) BOOL canResumeFromLastDatum; // ivar: _canResumeFromLastDatum
@property (copy, nonatomic) HKQuantityType *quantityType; // ivar: _quantityType


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithQuantityType:(id)arg0 bundleIdentifier:(id)arg1 canResumeFromLastDatum:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif