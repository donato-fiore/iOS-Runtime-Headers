// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IRISMOVIECLIP_H
#define IRISMOVIECLIP_H

@class PVEffect;


#import "MovieClip.h"
#import "KenBurnsInfo.h"

@interface IrisMovieClip : MovieClip

@property (nonatomic, getter=isFront) BOOL front; // ivar: _front
@property (retain, nonatomic) PVEffect *kenBurnsEffect; // ivar: _kenBurnsEffect
@property (retain, nonatomic) KenBurnsInfo *kenBurnsInfo; // ivar: _kenBurnsInfo


+(id)irisMovieClipWithURL:(id)arg0 asset:(id)arg1 front:(BOOL)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(int)maxDuration;
-(struct CGAffineTransform )transform:(struct CGSize )arg0 fillDest:(BOOL)arg1 ;
-(void)validateEffectRange:(struct ? )arg0 inProject:(id)arg1 ;


@end


#endif