// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBWINDOWEDACCESSORYVIEW_H
#define SBWINDOWEDACCESSORYVIEW_H

@class UIView, UIColor, UIButton;
@protocol SBWindowedAccessoryViewDelegate;



@interface SBWindowedAccessoryView : UIView

@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (weak, nonatomic) NSObject<SBWindowedAccessoryViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIButton *forceDetachWindowedAcessoryButton; // ivar: _forceDetachWindowedAcessoryButton


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_forceDetachWindowedAcessoryButtonTapped:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif