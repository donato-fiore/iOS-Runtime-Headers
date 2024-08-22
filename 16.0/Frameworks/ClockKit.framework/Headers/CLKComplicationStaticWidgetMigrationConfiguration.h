// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKCOMPLICATIONSTATICWIDGETMIGRATIONCONFIGURATION_H
#define CLKCOMPLICATIONSTATICWIDGETMIGRATIONCONFIGURATION_H

@class NSString;


#import "CLKComplicationWidgetMigrationConfiguration.h"

@interface CLKComplicationStaticWidgetMigrationConfiguration : CLKComplicationWidgetMigrationConfiguration

@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier; // ivar: _extensionBundleIdentifier
@property (readonly, copy, nonatomic) NSString *kind; // ivar: _kind


+(BOOL)supportsSecureCoding;
+(id)staticWidgetMigrationConfigurationWithKind:(id)arg0 extensionBundleIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKind:(id)arg0 extensionBundleIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif