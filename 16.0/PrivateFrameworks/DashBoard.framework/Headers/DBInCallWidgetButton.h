// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBINCALLWIDGETBUTTON_H
#define DBINCALLWIDGETBUTTON_H

@class UIButton;


#import "DBInCallWidgetButtonRingView.h"

@interface DBInCallWidgetButton : UIButton

@property (readonly, nonatomic) NSInteger inCallButtonType; // ivar: _inCallButtonType
@property (retain, nonatomic) DBInCallWidgetButtonRingView *ringView; // ivar: _ringView


-(id)initWithButtonType:(NSInteger)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setupConstraints;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif