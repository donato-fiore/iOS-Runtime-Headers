// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHCHARTAXISNONSTYLE_H
#define TSCHCHARTAXISNONSTYLE_H

@class TSSPropertyMap;


#import "TSCHBaseStyle.h"

@interface TSCHChartAxisNonStyle : TSCHBaseStyle

@property (copy, nonatomic) TSSPropertyMap *overrideMapForSameAsSource;


+(BOOL)shouldWarnWithPersistingWithoutStylesheet;
+(float)defaultFloatValueForProperty:(int)arg0 ;
+(id)defaultStyleWithContext:(id)arg0 ;
+(id)defaultValueForProperty:(int)arg0 ;
+(id)imageFillProperties;
+(id)properties;
+(int)defaultIntValueForProperty:(int)arg0 ;
+(int)muxDefaultPropertyForSpecificProperty:(int)arg0 ;
-(id)formatObjectPropertySet;
-(id)initWithContext:(id)arg0 name:(id)arg1 overridePropertyMap:(id)arg2 isVariation:(BOOL)arg3 ;
-(void)loadFromPreUFFArchiveWithUnarchiver:(id)arg0 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)upgradePreU2_0CustomFormatsForDocumentRoot:(id)arg0 ;


@end


#endif