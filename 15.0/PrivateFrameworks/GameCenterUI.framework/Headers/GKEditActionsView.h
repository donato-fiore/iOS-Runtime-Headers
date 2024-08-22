// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKEDITACTIONSVIEW_H
#define GKEDITACTIONSVIEW_H

@class UIView, NSArray, CALayer;


#import "GKCollectionViewCell.h"

@interface GKEditActionsView : UIView

@property (retain, nonatomic) NSArray *actionButtons; // ivar: _actionButtons
@property (nonatomic) GKCollectionViewCell *cell; // ivar: _cell
@property (retain, nonatomic) NSArray *editActionConstraints; // ivar: _editActionConstraints
@property (retain, nonatomic) CALayer *maskLayer; // ivar: _maskLayer
@property (nonatomic) CGFloat visibleWidth; // ivar: _visibleWidth


-(id)initWithFrame:(struct CGRect )arg0 cell:(id)arg1 ;
-(void)didTouchEditAction:(id)arg0 ;
-(void)didTouchMoreEditAction:(id)arg0 ;
-(void)prepareActionButtons;


@end


#endif