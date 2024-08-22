// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MOVIECLIP_H
#define MOVIECLIP_H



#import "KonaClip.h"

@interface MovieClip : KonaClip



+(BOOL)audioEnabledByDefault;
+(id)movieClipWithURL:(id)arg0 ;
+(id)movieClipWithURL:(id)arg0 avAsset:(id)arg1 ;
-(BOOL)hasAudioCharacteristic;
-(BOOL)hasVisualCharacteristic;
-(BOOL)isFreezeFrame;
-(CGFloat)aspectRatio;
-(float)speed;
-(int)clipType;
-(int)rawSourceDuration;
-(struct CGAffineTransform )transform:(struct CGSize )arg0 fillDest:(BOOL)arg1 ;
-(struct CGAffineTransform )transform:(struct CGSize )arg0 fillDest:(BOOL)arg1 applyAnamorphic:(BOOL)arg2 ;
-(void)clearFreezeFrame;
-(void)initializeFromURL:(id)arg0 asset:(id)arg1 ;


@end


#endif