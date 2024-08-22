// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNSTARKNOCONTENTBANNERVIEW_H
#define CNSTARKNOCONTENTBANNERVIEW_H

@class UIView, NSMutableArray, UIButton, UILabel, NSString;



@interface CNStarkNoContentBannerView : UIView

@property (retain) NSMutableArray *constraintsForTitleLabel; // ivar: _constraintsForTitleLabel
@property (retain) NSMutableArray *constraintsForTitleLabelAndSiriButton; // ivar: _constraintsForTitleLabelAndSiriButton
@property (retain) UIButton *siriButton; // ivar: _siriButton
@property (nonatomic) BOOL siriButtonEnabled; // ivar: _siriButtonEnabled
@property (nonatomic) BOOL siriButtonSelected; // ivar: _siriButtonSelected
@property (retain) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSString *titleString;


-(BOOL)canBecomeFocused;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)choose;
-(void)clickGestureDidUpdate:(id)arg0 ;
-(void)deselect;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)select;
-(void)setupClickGestureRecognizer;
-(void)setupConstraintsForTitleLabelAndSiriButton;
-(void)setupConstraintsforTitleLabel;
-(void)setupSiriButton;
-(void)setupTitleLabel;
-(void)siriButtonTapped:(id)arg0 ;
-(void)siriButtonTouchDown:(id)arg0 ;
-(void)siriButtonTouchUp:(id)arg0 ;
-(void)stateUpdated;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;


@end


#endif