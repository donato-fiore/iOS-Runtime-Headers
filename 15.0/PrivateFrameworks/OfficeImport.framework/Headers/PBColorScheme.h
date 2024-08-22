// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PBCOLORSCHEME_H
#define PBCOLORSCHEME_H


#import <Foundation/Foundation.h>


@interface PBColorScheme : NSObject



+(int)oadSchemeColorValueForEshSchemeColorIndex:(unsigned short)arg0 ;
+(unsigned short)eshSchemeColorIndexForOADSchemeColorValue:(int)arg0 ;
+(void)addColorWithIndex:(int)arg0 fromScheme:(struct PptColorSchemeAtom *)arg1 atIndex:(int)arg2 inScheme:(id)arg3 ;
+(void)addColorWithIndex:(int)arg0 fromScheme:(struct PptColorSchemeAtom *)arg1 colorTransform:(*unk)arg2 atIndex:(int)arg3 inScheme:(id)arg4 ;
+(void)readFromColorScheme:(struct PptColorSchemeAtom *)arg0 toColorScheme:(id)arg1 colorMap:(id)arg2 state:(id)arg3 ;


@end


#endif