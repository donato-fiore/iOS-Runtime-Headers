// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKREMOTECOMPLICATION_H
#define NTKREMOTECOMPLICATION_H

@class NSString, CLKComplicationDescriptor;


#import "NTKThirdPartyComplication.h"

@interface NTKRemoteComplication : NTKThirdPartyComplication

@property (readonly, nonatomic) NSString *appBundleIdentifier; // ivar: _appBundleIdentifier
@property (readonly, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, nonatomic) CLKComplicationDescriptor *complicationDescriptor; // ivar: _complicationDescriptor


+(BOOL)supportsSecureCoding;
+(id)_allComplicationConfigurationsWithType:(NSUInteger)arg0 ;
+(id)_remoteStocksComplicationDescriptorWithIdentifier:(id)arg0 forDevice:(id)arg1 ;
+(id)_remoteStocksComplicationWithIdentifier:(id)arg0 forDevice:(id)arg1 ;
+(id)complicationWithClientIdentifier:(id)arg0 appBundleIdentifier:(id)arg1 complicationDescriptor:(id)arg2 ;
-(BOOL)supportsComplicationFamily:(NSInteger)arg0 forDevice:(id)arg1 ;
-(id)_generatUniqueIdentifier;
-(id)_initWithComplicationType:(NSUInteger)arg0 JSONDictionary:(id)arg1 ;
-(id)appIdentifier;
-(id)clkClientIdentifier;
-(id)clkComplicationDescriptor;
-(id)companionLocalizedKeylineLabelText;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)customDailySnapshotKeyForFamily:(NSInteger)arg0 device:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithComplicationType:(NSUInteger)arg0 ;
-(id)localizedDetailText;
-(id)localizedKeylineLabelText;
-(id)localizedRichDetailText;
-(id)localizedRichKeylineLabelText;
-(id)ntk_localizedNameWithOptions:(NSUInteger)arg0 forRichComplicationSlot:(BOOL)arg1 ;
-(id)watchLocalizedKeylineLabelText;
-(void)_addKeysToJSONDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif