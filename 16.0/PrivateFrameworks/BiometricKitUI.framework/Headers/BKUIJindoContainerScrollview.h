// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKUIJINDOCONTAINERSCROLLVIEW_H
#define BKUIJINDOCONTAINERSCROLLVIEW_H

@class UIView, NSLayoutConstraint, NSString, UIScrollView;
@protocol BKUIScrollableContainer;


#import "BKUIPearlInstructionView.h"
#import "BKUIButtonTray.h"

@interface BKUIJindoContainerScrollview : UIView <BKUIScrollableContainer>



@property (retain, nonatomic) BKUIPearlInstructionView *animatingInstructionView; // ivar: _animatingInstructionView
@property (retain, nonatomic) BKUIButtonTray *buttonTray; // ivar: _buttonTray
@property (retain, nonatomic) NSLayoutConstraint *buttonTrayTopAnchor; // ivar: _buttonTrayTopAnchor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSLayoutConstraint *horizontalConstraint; // ivar: _horizontalConstraint
@property (nonatomic) NSInteger indicatorStyle;
@property (retain, nonatomic) BKUIPearlInstructionView *instructionView; // ivar: _instructionView
@property (retain, nonatomic) NSLayoutConstraint *instructionViewTopConstraint; // ivar: _instructionViewTopConstraint
@property (retain, nonatomic) NSLayoutConstraint *pinButtonTrayToScrollViewBottomConstraint; // ivar: _pinButtonTrayToScrollViewBottomConstraint
@property (retain, nonatomic) UIView *scrollContentView; // ivar: _scrollContentView
@property (retain, nonatomic) UIScrollView *scrollview; // ivar: _scrollview
@property (nonatomic) BOOL showsVerticalScrollIndicator;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSLayoutConstraint *topToSuperViewConstraint; // ivar: _topToSuperViewConstraint


-(id)initWithFrame:(struct CGRect )arg0 buttonTray:(id)arg1 ;
-(void)setContentOffset:(struct CGPoint )arg0 animated:(BOOL)arg1 ;


@end


#endif