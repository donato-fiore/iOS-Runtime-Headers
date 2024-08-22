// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPDROPCAPSTYLE_H
#define TSWPDROPCAPSTYLE_H

@class TSSStyle, NSString;
@protocol TSSPreset, TSDMixing;


#import "TSWPDropCap.h"
#import "TSWPDropCapStyle.h"

@interface TSWPDropCapStyle : TSSStyle <TSSPreset, TSDMixing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSWPDropCap *dropCap;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *presetKind;
@property (readonly) Class superclass;
@property (readonly, nonatomic) TSWPDropCapStyle *variationWithSingleCharacterDropCap;


+(id)defaultPropertyMap;
+(id)defaultStyleWithContext:(id)arg0 ;
+(id)defaultValueForProperty:(int)arg0 ;
+(id)properties;
+(id)propertiesAllowingNSNull;
+(int)defaultIntValueForProperty:(int)arg0 ;
-(BOOL)wantsCustomResolveLogicForProperty:(int)arg0 forStyles:(id)arg1 ;
-(CGFloat)resolvedFloatForProperty:(int)arg0 inStyles:(id)arg1 ;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(NSUInteger)minimumReadVersion;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)resolvedValueForProperty:(int)arg0 inStyles:(id)arg1 ;
-(int)resolvedIntForProperty:(int)arg0 inStyles:(id)arg1 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)mapNonDefaultPropertyOverridesForParentStyle:(id)arg0 propertyMap:(id)arg1 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif