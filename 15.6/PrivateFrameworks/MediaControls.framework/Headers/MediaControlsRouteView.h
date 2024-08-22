// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MEDIACONTROLSROUTEVIEW_H
#define MEDIACONTROLSROUTEVIEW_H

@class UIView, NSString, UILabel, NSTimer, CCUICAPackageView, MTVisualStylingProvider;
@protocol MTVisualStylingProviderObservingPrivate;



@interface MediaControlsRouteView : UIView <MTVisualStylingProviderObservingPrivate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL displayMessage; // ivar: _displayMessage
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isLabelHidden) BOOL labelHidden; // ivar: _labelHidden
@property (retain, nonatomic) UILabel *messageLabel; // ivar: _messageLabel
@property (retain, nonatomic) NSTimer *messageTimer; // ivar: _messageTimer
@property (retain, nonatomic) NSString *packageName; // ivar: _packageName
@property (retain, nonatomic) CCUICAPackageView *packageView; // ivar: _packageView
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) MTVisualStylingProvider *visualStylingProvider; // ivar: _visualStylingProvider


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_contentSizeCategoryDidChange;
-(void)_updateLabelVisualStyling;
-(void)layoutSubviews;
-(void)providedStylesDidChangeForProvider:(id)arg0 ;
-(void)setGlyphState:(id)arg0 ;
-(void)showMessage:(id)arg0 ;


@end


#endif