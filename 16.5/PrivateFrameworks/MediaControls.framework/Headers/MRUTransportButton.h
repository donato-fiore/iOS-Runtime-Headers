// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUTRANSPORTBUTTON_H
#define MRUTRANSPORTBUTTON_H

@class MPButton, UIView, NSString;
@protocol MRUVisualStylingProviderObserver;


#import "MRUCAPackageView.h"
#import "MRUVisualStylingProvider.h"

@interface MRUTransportButton : MPButton <MRUVisualStylingProviderObserver>



@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (nonatomic) CGFloat cursorScale; // ivar: _cursorScale
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDimmed) BOOL dimmed; // ivar: _dimmed
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) CGFloat packageScale; // ivar: _packageScale
@property (retain, nonatomic) MRUCAPackageView *packageView; // ivar: _packageView
@property (nonatomic) NSInteger pointerStyle; // ivar: _pointerStyle
@property (nonatomic) BOOL showHighlightCircle; // ivar: _showHighlightCircle
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (readonly) Class superclass;


-(BOOL)acuis_wantsPriorityOverTargetOfGestureRecognizer:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerStyleWithProposedEffect:(id)arg0 proposedShape:(id)arg1 ;
-(void)clearPackage;
-(void)layoutSubviews;
-(void)setAsset:(id)arg0 ;
-(void)setAsset:(id)arg0 animated:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setImage:(id)arg0 forState:(NSUInteger)arg1 animated:(BOOL)arg2 ;
-(void)setPackageGlyphState:(id)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)updateBackgroundView;
-(void)updateContentView;
-(void)updateVisualStyling;
-(void)visualStylingProviderDidChange:(id)arg0 ;


@end


#endif