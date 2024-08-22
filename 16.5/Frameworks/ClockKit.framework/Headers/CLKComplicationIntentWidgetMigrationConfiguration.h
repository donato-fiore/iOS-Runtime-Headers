// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKCOMPLICATIONINTENTWIDGETMIGRATIONCONFIGURATION_H
#define CLKCOMPLICATIONINTENTWIDGETMIGRATIONCONFIGURATION_H

@class NSString, INIntent;


#import "CLKComplicationWidgetMigrationConfiguration.h"

@interface CLKComplicationIntentWidgetMigrationConfiguration : CLKComplicationWidgetMigrationConfiguration

@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier; // ivar: _extensionBundleIdentifier
@property (readonly, copy, nonatomic) INIntent *intent; // ivar: _intent
@property (readonly, copy, nonatomic) NSString *kind; // ivar: _kind
@property (readonly, copy, nonatomic) NSString *localizedDisplayName; // ivar: _localizedDisplayName


+(BOOL)supportsSecureCoding;
+(id)intentWidgetMigrationConfigurationWithKind:(id)arg0 extensionBundleIdentifier:(id)arg1 intent:(id)arg2 localizedDisplayName:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKind:(id)arg0 extensionBundleIdentifier:(id)arg1 intent:(id)arg2 localizedDisplayName:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif