// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKVERTICALMARGINVIEW_H
#define HKVERTICALMARGINVIEW_H

@class UIView;
@protocol HKVerticalMarginDelegate;



@interface HKVerticalMarginView : UIView

@property (nonatomic) CGFloat currentKeyboardHeight; // ivar: _currentKeyboardHeight
@property (retain, nonatomic) NSObject<HKVerticalMarginDelegate> *marginDelegate; // ivar: _marginDelegate
@property (nonatomic) NSUInteger offsetOptions; // ivar: _offsetOptions


-(CGFloat)_bottomOffsetWithController:(id)arg0 ;
-(CGFloat)_findTabBarHeightWithController:(id)arg0 ;
-(CGFloat)_topOffsetWithController:(id)arg0 ;
-(id)_findViewController;
-(id)initWithSubview:(id)arg0 offsetOptions:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)keyboardWasShown:(id)arg0 ;
-(void)keyboardWillBeHidden:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif