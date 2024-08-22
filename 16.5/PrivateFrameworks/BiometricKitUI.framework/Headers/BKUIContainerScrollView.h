// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKUICONTAINERSCROLLVIEW_H
#define BKUICONTAINERSCROLLVIEW_H

@class UIScrollView, NSLayoutConstraint, NSString, UIView;
@protocol BKUIScrollableContainer;


#import "BKUIPearlInstructionView.h"
#import "BKUIButtonTray.h"

@interface BKUIContainerScrollView : UIScrollView <BKUIScrollableContainer>



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
@property (nonatomic) BOOL showsVerticalScrollIndicator;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSLayoutConstraint *topToSuperViewConstraint; // ivar: _topToSuperViewConstraint


-(id)initWithFrame:(struct CGRect )arg0 buttonTray:(id)arg1 ;


@end


#endif