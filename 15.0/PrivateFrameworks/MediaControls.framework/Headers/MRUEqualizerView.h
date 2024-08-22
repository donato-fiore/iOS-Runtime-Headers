// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRUEQUALIZERVIEW_H
#define MRUEQUALIZERVIEW_H

@class UIView, NSArray, NSString;
@protocol MRUVisualStylingProviderObserver;


#import "MRUVisualStylingProvider.h"

@interface MRUEqualizerView : UIView <MRUVisualStylingProviderObserver>



@property (nonatomic, getter=isAnimating) BOOL animating; // ivar: _animating
@property (retain, nonatomic) NSArray *barViews; // ivar: _barViews
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat spacing; // ivar: _spacing
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (readonly) Class superclass;
@property (nonatomic) CGFloat width; // ivar: _width


-(id)initWithNumberOfBars:(NSUInteger)arg0 width:(CGFloat)arg1 spacing:(CGFloat)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)startAnimating;
-(void)stopAnimating;
-(void)updateBarHeights;
-(void)updateVisualStyling;
-(void)visualStylingProviderDidChange:(id)arg0 ;


@end


#endif