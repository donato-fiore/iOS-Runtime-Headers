// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KENBURNSCLIP_H
#define KENBURNSCLIP_H

@class NSString, PVEffect;
@protocol KonaClipMiroAutoEditAdditions;


#import "KonaClip.h"
#import "KenBurnsInfo.h"

@interface KenBurnsClip : KonaClip <KonaClipMiroAutoEditAdditions>



@property (nonatomic) NSUInteger animationStyle; // ivar: _animationStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PVEffect *kbEffect;
@property (readonly, nonatomic) PVEffect *kbGeneratorEffect; // ivar: _kbGeneratorEffect
@property (retain, nonatomic) KenBurnsInfo *kbInfo;
@property (nonatomic) BOOL originalIsHEIF; // ivar: _originalIsHEIF
@property (readonly) Class superclass;


+(id)kenBurnsClipWithAssetRepresentation:(id)arg0 ;
+(id)kenBurnsClipWithMovie:(id)arg0 ;
+(id)kenBurnsClipWithPath:(id)arg0 ;
+(id)kenBurnsClipWithURL:(id)arg0 ;
-(BOOL)hasPhotoCharacteristic;
-(BOOL)hasVisualCharacteristic;
-(BOOL)isLandscape;
-(BOOL)isPano;
-(BOOL)isPortrait;
-(BOOL)isSquare;
-(BOOL)isTall;
-(CGFloat)aspectRatio;
-(CGFloat)autoEditLongestDurationWithBlueprint:(id)arg0 ;
-(CGFloat)autoEditShortestDurationWithBlueprint:(id)arg0 ;
-(CGFloat)autoEditShortestIdealDurationWithBlueprint:(id)arg0 ;
-(CGFloat)mediaAspectRatio;
-(CGFloat)panoDurationMultiplier;
-(id)animationEffectID;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)plistRepresentationFromProject:(id)arg0 ;
-(int)clipType;
-(struct CGAffineTransform )transform:(struct CGSize )arg0 fillDest:(BOOL)arg1 ;
-(void)dealloc;
-(void)setContentsFromPlist:(id)arg0 inProject:(id)arg1 ;
-(void)validateEffectRange:(struct ? )arg0 inProject:(id)arg1 ;


@end


#endif