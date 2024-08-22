// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OAXBLIPEFFECTS_H
#define OAXBLIPEFFECTS_H


#import <Foundation/Foundation.h>


@interface OAXBlipEffects : NSObject



+(?)readAlphaModFixEffect;
+(?)readBiLevelEffect;
+(?)readBlipEffectsFromBlipRef:(?)arg0 toBlipRefdrawingState;
+(?)readColorChangeEffectdrawingState;
+(?)readDuotoneEffect;
+(?)readGrayscaleEffect;
+(?)readLuminanceEffect;
+(id)duotoneTransferModeEnumMap;
+(void)writeAlphaModFixEffect:(id)arg0 to:(id)arg1 ;
+(void)writeBiLevelEffect:(id)arg0 to:(id)arg1 ;
+(void)writeBlipEffects:(id)arg0 to:(id)arg1 ;
+(void)writeColorChangeEffect:(id)arg0 to:(id)arg1 ;
+(void)writeDuotoneEffect:(id)arg0 to:(id)arg1 ;
+(void)writeGrayscaleEffect:(id)arg0 to:(id)arg1 ;
+(void)writeLuminanceEffect:(id)arg0 to:(id)arg1 ;


@end


#endif