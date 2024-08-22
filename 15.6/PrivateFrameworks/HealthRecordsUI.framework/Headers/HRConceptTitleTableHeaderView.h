// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HRCONCEPTTITLETABLEHEADERVIEW_H
#define HRCONCEPTTITLETABLEHEADERVIEW_H

@class UIView, NSString;
@protocol HRConceptTitleTableHeaderViewDelegate;



@interface HRConceptTitleTableHeaderView : UIView {
    ? titleLabel;
    ? actionButton;
    ? fontChoices;
    ? widthCache;
    ? titleCache;
}


@property (nonatomic) CGFloat bottomExtraSpace; // ivar: bottomExtraSpace
@property (nonatomic, copy) NSString *buttonTitle;
@property (nonatomic, weak) NSObject<HRConceptTitleTableHeaderViewDelegate> *delegate; // ivar: delegate
@property (nonatomic, copy) NSString *title;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)actionButtonTappedWithSender:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif