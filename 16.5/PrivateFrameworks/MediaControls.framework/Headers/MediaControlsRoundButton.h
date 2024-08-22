// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MEDIACONTROLSROUNDBUTTON_H
#define MEDIACONTROLSROUNDBUTTON_H

@class UIControl, NSString, UIImageSymbolConfiguration, UILabel;
@protocol MRUVisualStylingProviderObserver;


#import "MRUAsset.h"
#import "MRUAssetView.h"
#import "MRUShadowView.h"
#import "MRUVisualStylingProvider.h"

@interface MediaControlsRoundButton : UIControl <MRUVisualStylingProviderObserver>



@property (retain, nonatomic) MRUAsset *asset; // ivar: _asset
@property (readonly, nonatomic) CGRect assetFrame;
@property (nonatomic) CGSize assetSize; // ivar: _assetSize
@property (retain, nonatomic) MRUAssetView *assetView; // ivar: _assetView
@property (nonatomic) NSInteger axis; // ivar: _axis
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *glyphState; // ivar: _glyphState
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration; // ivar: _imageSymbolConfiguration
@property (nonatomic, getter=isLabelHidden) BOOL labelHidden; // ivar: _labelHidden
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
-(void)updateAssetVisualStyling;
-(void)updateContentSizeCategory;
-(void)updateLabelVisualStyling;
-(void)visualStylingProviderDidChange:(id)arg0 ;


@end


#endif