// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKAPRICOTCOMPLICATION_H
#define NTKAPRICOTCOMPLICATION_H

@class NSString, CLKWidgetComplicationDescriptor, INIntent;


#import "NTKThirdPartyComplication.h"

@interface NTKApricotComplication : NTKThirdPartyComplication

@property (readonly, nonatomic) NSString *containerBundleIdentifier;
@property (readonly, nonatomic) CLKWidgetComplicationDescriptor *descriptor; // ivar: _descriptor
@property (readonly, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, nonatomic) INIntent *intent;
@property (readonly, nonatomic) NSString *kind;


+(BOOL)supportsSecureCoding;
+(id)complicationWithDescriptor:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)supportsComplicationFamily:(NSInteger)arg0 forDevice:(id)arg1 ;
-(id)_createUniqueIdentifier;
-(id)_initWithComplicationType:(NSUInteger)arg0 JSONDictionary:(id)arg1 ;
-(id)appIdentifier;
-(id)clkClientIdentifier;
-(id)clkComplicationDescriptor;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)ntk_localizedNameWithOptions:(NSUInteger)arg0 forRichComplicationSlot:(BOOL)arg1 ;
-(void)_addKeysToJSONDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif