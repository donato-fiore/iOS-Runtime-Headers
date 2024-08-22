// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLPLATTERDISCOVERYVIEW_H
#define PLPLATTERDISCOVERYVIEW_H

@class UILabel, UIView, UIButton, NSString, UIAction, MTVisualStylingProvider;


#import "PLPlatterView.h"

@interface PLPlatterDiscoveryView : PLPlatterView {
    UILabel *_titleTextLabel;
    UILabel *_bodyTextLabel;
    UIView *_graphicContainerView;
    UIButton *_clearButton;
}


@property (copy, nonatomic) NSString *bodyText;
@property (retain, nonatomic) UIAction *clearAction; // ivar: _clearAction
@property (retain, nonatomic) UIAction *defaultAction; // ivar: _defaultAction
@property (retain, nonatomic) UIView *graphicView;
@property (retain, nonatomic) MTVisualStylingProvider *strokeVisualStylingProvider; // ivar: _strokeVisualStylingProvider
@property (copy, nonatomic) NSString *titleText;


-(id)init;
-(id)requiredVisualStyleCategories;
-(id)visualStylingProviderForCategory:(NSInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureBodyLabelIfNeccessary;
-(void)_configureClearButtonIfNeccessary;
-(void)_configureTitleTextLabelIfNeccessary;
-(void)_layoutSubviewInBounds:(struct CGRect )arg0 measuringOnly:(struct CGSize *)arg1 ;
-(void)layoutSubviews;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;
-(void)updateVisualStylingOfView:(id)arg0 style:(NSInteger)arg1 visualStylingProvider:(id)arg2 outgoingProvider:(id)arg3 ;
-(void)visualStylingProviderDidChange:(id)arg0 forCategory:(NSInteger)arg1 outgoingProvider:(id)arg2 ;


@end


#endif