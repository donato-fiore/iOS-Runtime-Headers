// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OAXFILL_H
#define OAXFILL_H


#import <Foundation/Foundation.h>


@interface OAXFill : NSObject



+(?)readBlipRefFromXmlNode:(?)arg0 packagePart:(?)arg1 forDrawable:(?)arg2 drawingStateforBullet;
+(?)readFillFromXmlNode:(?)arg0 packagePartdrawingState;
+(?)readGradientFillFromXmlNode:(?)arg0 toGradientFilldrawingState;
+(?)readGradientFillFromXmlNodedrawingState;
+(?)readImageFillFromXmlNode:(?)arg0 packagePart:(?)arg1 forDrawabledrawingState;
+(?)readLinearGradientFillFromXmlNodedrawingState;
+(?)readPathGradientFillFromXmlNodedrawingState;
+(?)readPresetPatternFillFromXmlNodedrawingState;
+(?)readStretchstretch;
+(?)readTiletile;
+(id)pathGradientFillTypeEnumMap;
+(id)presetPatternFillTypeEnumMap;
+(id)readGroupFillFromXmlNode:(struct _xmlNode *)arg0 ;
+(id)readNullFillFromXmlNode:(struct _xmlNode *)arg0 ;
+(id)readSolidFillFromXmlNode:(struct _xmlNode *)arg0 ;
+(id)tileFlipModeEnumMap;


@end


#endif