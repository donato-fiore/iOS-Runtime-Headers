// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKADJUSTABLESINGLECELLVIEW_H
#define PKADJUSTABLESINGLECELLVIEW_H

@class UIView, UIImageView, UILabel, PKPaymentPassAction, NSString, UIColor, PKPaymentPass;
@protocol PKPaymentDashboardCellActionHandleable;


#import "PKContinuousButton.h"

@interface PKAdjustableSingleCellView : UIView <PKPaymentDashboardCellActionHandleable>

 {
    UIImageView *_disclosureView;
    PKContinuousButton *_actionButton;
    CGFloat _topPadding;
    BOOL _isTemplateLayout;
    UILabel *_titleView;
    UILabel *_detailView;
    UILabel *_subDetailView;
    NSUInteger _deferUpdateCounter;
    BOOL _animated;
}


@property (copy, nonatomic) PKPaymentPassAction *action; // ivar: _action
@property (copy, nonatomic) id *actionHandler; // ivar: _actionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *detail; // ivar: _detail
@property (copy, nonatomic) UIColor *detailColor; // ivar: _detailColor
@property (nonatomic) NSInteger detailLineBreakMode; // ivar: _detailLineBreakMode
@property (nonatomic) BOOL enableDisclosure; // ivar: _enableDisclosure
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) PKPaymentPass *pass; // ivar: _pass
@property (copy, nonatomic) NSString *subDetail; // ivar: _subDetail
@property (copy, nonatomic) UIColor *subDetailColor; // ivar: _subDetailColor
@property (nonatomic) NSInteger subDetailLineBreakMode; // ivar: _subDetailLineBreakMode
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) UIColor *titleColor; // ivar: _titleColor
@property (nonatomic) NSInteger titleLineBreakMode; // ivar: _titleLineBreakMode


-(BOOL)_needsThirdLine;
-(NSInteger)viewType;
-(id)_smallerDetailFont;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_actionButtonTapped:(id)arg0 ;
-(void)_applyStyles;
-(void)_performInit;
-(void)_setupViews;
-(void)_updateContent:(BOOL)arg0 ;
-(void)beginUpdates;
-(void)endUpdates:(BOOL)arg0 ;
-(void)layoutIfNeededAnimated:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif