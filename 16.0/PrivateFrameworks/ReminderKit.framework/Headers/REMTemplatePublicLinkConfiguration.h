// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMTEMPLATEPUBLICLINKCONFIGURATION_H
#define REMTEMPLATEPUBLICLINKCONFIGURATION_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface REMTemplatePublicLinkConfiguration : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) BOOL shouldIncludeAlarmTriggersBasedOnDateOrTimeInterval; // ivar: _shouldIncludeAlarmTriggersBasedOnDateOrTimeInterval
@property (readonly, nonatomic) BOOL shouldIncludeAlarmTriggersBasedOnLocationOrVehicle; // ivar: _shouldIncludeAlarmTriggersBasedOnLocationOrVehicle
@property (readonly, nonatomic) BOOL shouldIncludeContactsHandleData;
@property (readonly, nonatomic) BOOL shouldIncludeHashtags; // ivar: _shouldIncludeHashtags


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithShouldIncludeHashtags:(BOOL)arg0 shouldIncludeAlarmTriggersBasedOnDateOrTimeInterval:(BOOL)arg1 shouldIncludeAlarmTriggersBasedOnLocationOrVehicle:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif