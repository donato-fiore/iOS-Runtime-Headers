// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OAXFILL_H
#define OAXFILL_H


#import <Foundation/Foundation.h>


@interface OAXFill : NSObject



+(?)readBlipRefFromXmlNode:(?)arg0 packagePart:(?)arg1 forDrawable:(?)arg2 drawingStateforBullet;
+(?)readFillFromXmlNode:(?)arg0 packagePartdrawingState;
+(?)readGradientFillFromXmlNode:(?)arg0 toGradientFilldrawingState;
+(?)readGradientFillFromXmlNodedrawingState;
+(?)readGroupFillFromXmlNode;
+(?)readImageFillFromXmlNode:(?)arg0 packagePart:(?)arg1 forDrawabledrawingState;
+(?)readLinearGradientFillFromXmlNodedrawingState;
+(?)readNullFillFromXmlNode;
+(?)readPathGradientFillFromXmlNodedrawingState;
+(?)readPresetPatternFillFromXmlNodedrawingState;
+(?)readSolidFillFromXmlNode;
+(?)readStretchstretch;
+(?)readTiletile;
+(id)pathGradientFillTypeEnumMap;
+(id)presetPatternFillTypeEnumMap;
+(id)tileFlipModeEnumMap;


@end


#endif