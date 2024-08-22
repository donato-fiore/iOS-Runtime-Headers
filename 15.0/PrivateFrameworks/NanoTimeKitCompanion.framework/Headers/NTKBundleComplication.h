// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKBUNDLECOMPLICATION_H
#define NTKBUNDLECOMPLICATION_H

@class CLKCBundleComplication, CLKComplicationDescriptor;


#import "NTKComplication.h"

@interface NTKBundleComplication : NTKComplication

@property (readonly, nonatomic) CLKCBundleComplication *complication; // ivar: _complication
@property (readonly, nonatomic) CLKComplicationDescriptor *complicationDescriptor;


+(BOOL)supportsSecureCoding;
+(id)_revertedBundleComplicationFromJSONDictionary:(id)arg0 ;
+(id)bundledComplicationWithBundleIdentifier:(id)arg0 appBundleIdentifier:(id)arg1 ;
+(id)bundledComplicationWithBundleIdentifier:(id)arg0 appBundleIdentifier:(id)arg1 complicationDescriptor:(id)arg2 ;
+(id)bundledComplicationWithComplication:(id)arg0 ;
-(BOOL)supportsComplicationFamily:(NSInteger)arg0 forDevice:(id)arg1 ;
-(id)_generateUniqueIdentifier;
-(id)_initWithComplicationType:(NSUInteger)arg0 JSONDictionary:(id)arg1 ;
-(id)appIdentifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)customDailySnapshotKeyForFamily:(NSInteger)arg0 device:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedDetailText;
-(id)localizedKeylineLabelText;
-(id)localizedRichDetailText;
-(id)localizedRichKeylineLabelText;
-(id)ntk_sectionIdentifier;
-(void)_addKeysToJSONDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif