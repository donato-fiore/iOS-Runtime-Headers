// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUICANDIDATEBACKDROPVIEW_H
#define TUICANDIDATEBACKDROPVIEW_H

@class UIView, UIKBBackdropView;
@protocol TUICandidateViewStyle;



@interface TUICandidateBackdropView : UIView

@property (retain, nonatomic) UIKBBackdropView *backdropView; // ivar: _backdropView
@property (retain, nonatomic) NSObject<TUICandidateViewStyle> *style; // ivar: _style


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)commonInit;
-(void)didMoveToWindow;
-(void)layoutSubviews;


@end


#endif