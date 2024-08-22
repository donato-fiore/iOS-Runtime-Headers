// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TVRMALERTBUTTON_H
#define _TVRMALERTBUTTON_H

@class UIButton, UIView;



@interface _TVRMAlertButton : UIButton

@property (retain, nonatomic) UIView *burnView; // ivar: _burnView
@property (retain, nonatomic) UIView *plusDView; // ivar: _plusDView
@property (nonatomic) BOOL showingBackgroundEffect; // ivar: _showingBackgroundEffect


-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif