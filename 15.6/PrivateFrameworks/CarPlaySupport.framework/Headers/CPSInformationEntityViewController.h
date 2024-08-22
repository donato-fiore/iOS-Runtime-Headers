// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPSINFORMATIONENTITYVIEWCONTROLLER_H
#define CPSINFORMATIONENTITYVIEWCONTROLLER_H

@class UILayoutGuide, NSArray, NSString, UIStackView, NSLayoutConstraint, UILabel, UIVisualEffectView;
@protocol CPSButtonDelegate, UIScrollViewDelegate, CPSInformationScrollViewDelegate, CPInformationTemplateProviding;


#import "CPSBaseTemplateViewController.h"
#import "CPSInformationTemplateButtonsViewController.h"
#import "CPSHairlineView.h"
#import "CPSInformationScrollView.h"

@interface CPSInformationEntityViewController : CPSBaseTemplateViewController <CPSButtonDelegate, UIScrollViewDelegate, CPSInformationScrollViewDelegate, CPInformationTemplateProviding>



@property (retain, nonatomic) CPSInformationTemplateButtonsViewController *buttonsViewController; // ivar: _buttonsViewController
@property (retain, nonatomic) UILayoutGuide *centeringGuide; // ivar: _centeringGuide
@property (retain, nonatomic) NSArray *centeringGuideConstraints; // ivar: _centeringGuideConstraints
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CPSHairlineView *hairlineView; // ivar: _hairlineView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIStackView *itemStackView; // ivar: _itemStackView
@property (retain, nonatomic) NSLayoutConstraint *itemStackViewLeadingConstraint; // ivar: _itemStackViewLeadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *itemStackViewWidthConstraint; // ivar: _itemStackViewWidthConstraint
@property (retain, nonatomic) CPSInformationScrollView *scrollView; // ivar: _scrollView
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) UIVisualEffectView *visualEffectView; // ivar: _visualEffectView


-(id)informationTemplate;
-(void)_scrollViewAccessoryInsetsDidChange:(id)arg0 ;
-(void)_setHairlineHidden:(BOOL)arg0 ;
-(void)_updateCenteringGuideConstraints;
-(void)_updateHairline;
-(void)_updateItemStackView;
-(void)_updateScrollViewInsets;
-(void)_viewDidLoad;
-(void)didSelectButton:(id)arg0 ;
-(void)scrollViewContentSizeChanged:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setControl:(id)arg0 enabled:(BOOL)arg1 ;
-(void)updateWithInformationTemplate:(id)arg0 ;
-(void)viewDidLayoutSubviews;


@end


#endif