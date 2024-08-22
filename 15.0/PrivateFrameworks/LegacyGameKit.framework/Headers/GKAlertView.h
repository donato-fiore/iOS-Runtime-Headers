// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKALERTVIEW_H
#define GKALERTVIEW_H

@class UIAlertView, UIView;



@interface GKAlertView : UIAlertView {
    UIView *_clipView;
    UIView *_contentView;
}




+(struct CGSize )preferredContentViewSize;
+(void)initialize;
-(BOOL)_canDrawContent;
-(id)contentView;
-(id)initAlertView;
-(id)initWithTitle:(id)arg0 message:(id)arg1 delegate:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitles:(id)arg4 ;
-(void)_replaceContentView:(id)arg0 animated:(BOOL)arg1 ;
-(void)dealloc;
-(void)layoutAnimated:(BOOL)arg0 ;
-(void)layoutAnimated:(BOOL)arg0 withDuration:(CGFloat)arg1 ;
-(void)setContentView:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif