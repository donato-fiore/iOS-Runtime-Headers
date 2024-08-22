// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXEDITABLENAVIGATIONTITLEVIEW_H
#define PXEDITABLENAVIGATIONTITLEVIEW_H

@class UIView, NSString;
@protocol UITextFieldDelegate, PXEditableNavigationTitleViewDelegate;


#import "_PXEditableNavigationTitleTextField.h"

@interface PXEditableNavigationTitleView : UIView <UITextFieldDelegate>

 {
    ? _needsUpdateFlags;
    BOOL _isPerformingUpdates;
    ? _delegateRespondsTo;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXEditableNavigationTitleViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEditing) BOOL editing; // ivar: _editing
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (readonly, nonatomic) _PXEditableNavigationTitleTextField *textField; // ivar: _textField


-(BOOL)_needsUpdate;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_invalidateTextColor;
-(void)_setNeedsUpdate;
-(void)_textFieldTextDidChange:(id)arg0 ;
-(void)_updateIfNeeded;
-(void)_updateTextColorIfNeeded;
-(void)dealloc;
-(void)endEditing;
-(void)layoutSubviews;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 reason:(NSInteger)arg1 ;
-(void)tintColorDidChange;


@end


#endif