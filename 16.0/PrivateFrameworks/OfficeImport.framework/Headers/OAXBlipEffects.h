// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OAXBLIPEFFECTS_H
#define OAXBLIPEFFECTS_H


#import <Foundation/Foundation.h>


@interface OAXBlipEffects : NSObject



+(?)readBlipEffectsFromBlipRef:(?)arg0 toBlipRefdrawingState;
+(?)readColorChangeEffectdrawingState;
+(id)duotoneTransferModeEnumMap;
+(id)readAlphaModFixEffect:(struct _xmlNode *)arg0 ;
+(id)readBiLevelEffect:(struct _xmlNode *)arg0 ;
+(id)readDuotoneEffect:(struct _xmlNode *)arg0 ;
+(id)readGrayscaleEffect:(struct _xmlNode *)arg0 ;
+(id)readLuminanceEffect:(struct _xmlNode *)arg0 ;
+(void)writeAlphaModFixEffect:(id)arg0 to:(id)arg1 ;
+(void)writeBiLevelEffect:(id)arg0 to:(id)arg1 ;
+(void)writeBlipEffects:(id)arg0 to:(id)arg1 ;
+(void)writeColorChangeEffect:(id)arg0 to:(id)arg1 ;
+(void)writeDuotoneEffect:(id)arg0 to:(id)arg1 ;
+(void)writeGrayscaleEffect:(id)arg0 to:(id)arg1 ;
+(void)writeLuminanceEffect:(id)arg0 to:(id)arg1 ;


@end


#endif