// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSEPARATORVIEW_H
#define SBSEPARATORVIEW_H

@class UIView;


#import "SBSeparatorNubView.h"

@interface SBSeparatorView : UIView

@property (nonatomic) CGFloat keyboardHeight; // ivar: _keyboardHeight
@property (readonly, nonatomic) CGRect nubRect;
@property (nonatomic) NSUInteger nubStyle; // ivar: _nubStyle
@property (retain, nonatomic) SBSeparatorNubView *nubView; // ivar: _nubView


+(struct CGSize )nubHitTestSize;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateNubViewFrame;
-(void)layoutSubviews;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif