// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12COREAUDIOKIT16CAAUEQHEADERVIEW_H
#define _TTC12COREAUDIOKIT16CAAUEQHEADERVIEW_H

@class UIView;
@protocol UITextFieldDelegate;



@interface _TtC12CoreAudioKit16CAAUEQHeaderView : UIView <UITextFieldDelegate>

 {
    ? appleLogo;
    ? auLabel;
    ? paramStack;
    ? border;
    ? viewSetup;
    ? auName;
    ? auAbbreviatedName;
    ? compressedHorizontalLayout;
    ? viewConstraints;
    ? params;
}




+(BOOL)requiresConstraintBasedLayout;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)addParameterWithId:(unsigned int)arg0 name:(id)arg1 shortName:(id)arg2 symbolName:(id)arg3 value:(float)arg4 min:(float)arg5 max:(float)arg6 logBase:(float)arg7 formatter:(id)arg8 unit:(id)arg9 additionalPad:(CGFloat)arg10 ;
-(void)addParameterWithId:(unsigned int)arg0 name:(id)arg1 shortName:(id)arg2 value:(float)arg3 min:(float)arg4 max:(float)arg5 logBase:(float)arg6 formatter:(id)arg7 unit:(id)arg8 additionalPad:(CGFloat)arg9 ;
-(void)adjustViewIfHorizontallyCompressed:(struct CGSize )arg0 ;
-(void)beginGestureWithId:(unsigned int)arg0 ;
-(void)beginTouchWithNotification:(id)arg0 ;
-(void)didMoveToSuperview;
-(void)endEditingWithId:(unsigned int)arg0 ;
-(void)endGestureWithId:(unsigned int)arg0 ;
-(void)endTouchWithNotification:(id)arg0 ;
-(void)removeFromSuperview;
-(void)setColorForParameterWithId:(unsigned int)arg0 color:(id)arg1 ;
-(void)setConstraintsWith:(id)arg0 ;
-(void)setParameterWithId:(unsigned int)arg0 value:(float)arg1 ;
-(void)setTitle:(id)arg0 abbreviated:(id)arg1 ;
-(void)startEditingWithId:(unsigned int)arg0 ;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 reason:(NSInteger)arg1 ;
-(void)textFieldEditingDidChange:(id)arg0 ;
-(void)tintColorDidChange;


@end


#endif