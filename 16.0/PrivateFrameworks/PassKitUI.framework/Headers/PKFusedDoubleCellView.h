// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKFUSEDDOUBLECELLVIEW_H
#define PKFUSEDDOUBLECELLVIEW_H

@class UIView, UIImageView, UILabel, NSString, UIColor, PKPaymentPass;
@protocol PKPaymentDashboardCellActionHandleable;



@interface PKFusedDoubleCellView : UIView <PKPaymentDashboardCellActionHandleable>

 {
    UIView *_separatorView;
    UIImageView *_disclosureView;
    UILabel *_leftTitleView;
    UILabel *_leftDetailView;
    UILabel *_leftSubDetailView;
    UILabel *_rightTitleView;
    UILabel *_rightDetailView;
    UILabel *_rightSubDetailView;
    NSUInteger _deferUpdateCounter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enableDisclosure; // ivar: _enableDisclosure
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *leftDetail; // ivar: _leftDetail
@property (copy, nonatomic) UIColor *leftDetailColor; // ivar: _leftDetailColor
@property (copy, nonatomic) NSString *leftSubDetail; // ivar: _leftSubDetail
@property (copy, nonatomic) UIColor *leftSubDetailColor; // ivar: _leftSubDetailColor
@property (copy, nonatomic) NSString *leftTitle; // ivar: _leftTitle
@property (copy, nonatomic) UIColor *leftTitleColor; // ivar: _leftTitleColor
@property (copy, nonatomic) PKPaymentPass *pass; // ivar: _pass
@property (copy, nonatomic) NSString *rightDetail; // ivar: _rightDetail
@property (copy, nonatomic) UIColor *rightDetailColor; // ivar: _rightDetailColor
@property (copy, nonatomic) NSString *rightSubDetail; // ivar: _rightSubDetail
@property (copy, nonatomic) UIColor *rightSubDetailColor; // ivar: _rightSubDetailColor
@property (copy, nonatomic) NSString *rightTitle; // ivar: _rightTitle
@property (copy, nonatomic) UIColor *rightTitleColor; // ivar: _rightTitleColor
@property (readonly) Class superclass;


-(CGFloat)_layoutLabelsSideBySide:(struct CGRect )arg0 halfSize:(struct CGSize )arg1 leftTitleSize:(struct CGSize )arg2 leftDetailSize:(struct CGSize )arg3 leftSubDetailSize:(struct CGSize )arg4 disclosureSize:(struct CGSize )arg5 disclosurePadding:(CGFloat)arg6 rightSize:(struct CGSize )arg7 rightTitleSize:(struct CGSize )arg8 rightDetailSize:(struct CGSize )arg9 rightSubDetailSize:(struct CGSize )arg10 isTemplateLayout:(BOOL)arg11 ;
-(CGFloat)_layoutLabelsStacked:(struct CGRect )arg0 disclosureSize:(struct CGSize )arg1 disclosurePadding:(CGFloat)arg2 isTemplateLayout:(BOOL)arg3 ;
-(NSInteger)viewType;
-(id)_detailFont;
-(id)_subDetailFont;
-(id)_titleFont;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_performInit;
-(void)_setupViews;
-(void)_updateContent:(BOOL)arg0 ;
-(void)beginUpdates;
-(void)endUpdates:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif