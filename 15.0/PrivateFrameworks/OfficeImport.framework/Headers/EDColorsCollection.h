// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDCOLORSCOLLECTION_H
#define EDCOLORSCOLLECTION_H

@class NSString;
@protocol OADColorPalette;


#import "EDCollection.h"

@interface EDColorsCollection : EDCollection <OADColorPalette>

 {
    NSUInteger mDefaultColorsCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isSystemColorId:(NSUInteger)arg0 ;
+(int)oadSchemeColorIdFromThemeIndex:(int)arg0 ;
+(int)systemColorIdFromIndex:(NSUInteger)arg0 ;
+(unsigned int)xlColorIndexFromTCSystemColorIDEnum:(int)arg0 ;
-(*unsigned int)defaultPalette;
-(NSUInteger)addOrEquivalentColorExcludingDefaults:(id)arg0 ;
-(NSUInteger)defaultColorsCount;
-(id)colorWithIndex:(NSUInteger)arg0 ;
-(id)initWithDefaultSetup:(BOOL)arg0 ;
-(void)addColors:(*unsigned int)arg0 count:(unsigned int)arg1 defaultColors:(*unsigned int)arg2 defaultCount:(unsigned int)arg3 ;
-(void)addDefaultPalette;
-(void)addPalette:(*unsigned int)arg0 paletteSize:(unsigned int)arg1 paletteX:(*unsigned int)arg2 paletteXSize:(unsigned int)arg3 ;
-(void)setupDefaults;


@end


#endif