// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MEDIACONTROLSROUNDBUTTON_H
#define MEDIACONTROLSROUNDBUTTON_H

@class UIControl, NSString, CCUICAPackageView, UILabel;
@protocol MRUVisualStylingProviderObserver;


#import "MRUShadowView.h"
#import "MRUVisualStylingProvider.h"

@interface MediaControlsRoundButton : UIControl <MRUVisualStylingProviderObserver>



@property (nonatomic) NSInteger axis; // ivar: _axis
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *glyphState; // ivar: _glyphState
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGRect imageFrame;
@property (nonatomic) CGSize imageSize; // ivar: _imageSize
@property (nonatomic, getter=isLabelHidden) BOOL labelHidden; // ivar: _labelHidden
@property (copy, nonatomic) NSString *packageName; // ivar: _packageName
@property (retain, nonatomic) CCUICAPackageView *packageView; // ivar: _packageView
@property (retain, nonatomic) MRUShadowView *shadowView; // ivar: _shadowView
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)isAccessibilityElement;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(NSUInteger)accessibilityTraits;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )accessibilityFrame;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)controlCenterApplyPrimaryContentShadow;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateContentSizeCategory;
-(void)updateLabelVisualStyling;
-(void)updatePackageVisualStyling;
-(void)visualStylingProviderDidChange:(id)arg0 ;


@end


#endif