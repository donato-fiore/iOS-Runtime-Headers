// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVPRESENTATIONCONTAINERVIEWLAYER_H
#define AVPRESENTATIONCONTAINERVIEWLAYER_H

@class CALayer;


#import "AVPresentationContainerViewAppearanceProxy.h"

@interface AVPresentationContainerViewLayer : CALayer

@property (readonly, nonatomic) AVPresentationContainerViewAppearanceProxy *appearanceProxy; // ivar: _appearanceProxy
@property (nonatomic) BOOL wantsAppearanceConfigValues; // ivar: _wantsAppearanceConfigValues


-(BOOL)continuousCorners;
-(BOOL)masksToBounds;
-(CGFloat)cornerRadius;
-(NSUInteger)maskedCorners;
-(id)cornerCurve;
-(void)setContinuousCorners:(BOOL)arg0 ;
-(void)setCornerCurve:(id)arg0 ;
-(void)setCornerRadius:(CGFloat)arg0 ;
-(void)setMaskedCorners:(NSUInteger)arg0 ;
-(void)setMasksToBounds:(BOOL)arg0 ;


@end


#endif