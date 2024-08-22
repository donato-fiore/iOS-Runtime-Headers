// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKCOLOREDBALLOONVIEW_H
#define CKCOLOREDBALLOONVIEW_H

@class UIView<CKGradientReferenceView>;


#import "CKBalloonView.h"
#import "CKBalloonImageView.h"
#import "CKGradientView.h"

@interface CKColoredBalloonView : CKBalloonView

@property (retain, nonatomic) CKBalloonImageView *effectViewMask; // ivar: _effectViewMask
@property (nonatomic) CGRect gradientOverrideFrame; // ivar: _gradientOverrideFrame
@property (retain, nonatomic) UIView<CKGradientReferenceView> *gradientReferenceView;
@property (retain, nonatomic) CKGradientView *gradientView; // ivar: _gradientView
@property (readonly, nonatomic) BOOL hasBackground;
@property (retain, nonatomic) CKBalloonImageView *mask; // ivar: _mask
@property (nonatomic) BOOL wantsGradient; // ivar: _wantsGradient


-(BOOL)needsGroupOpacity;
-(id)description;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)overlayColor;
-(struct CKBalloonDescriptor_t )balloonDescriptor;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)addFilter:(id)arg0 ;
-(void)clearFilters;
-(void)configureForComposition:(id)arg0 ;
-(void)configureForMessagePart:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForDisplay;
-(void)prepareForReuse;
-(void)setBalloonDescriptor:(struct CKBalloonDescriptor_t )arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setCanUseOpaqueMask:(BOOL)arg0 ;
-(void)setColor:(char)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setHasTail:(BOOL)arg0 ;
-(void)updateWantsGradient;


@end


#endif