// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DOCADDTAGVIEW_H
#define DOCADDTAGVIEW_H

@class UIView, UILabel, CAShapeLayer, NSString, UITextField;
@protocol UITextFieldDelegate, UIScribbleInteractionDelegate, DOCAddTagTextFieldDelegate;


#import "DOCTagDotView.h"

@interface DOCAddTagView : UIView <UITextFieldDelegate, UIScribbleInteractionDelegate>



@property (readonly, nonatomic) UILabel *addNewTagLabel; // ivar: _addNewTagLabel
@property (readonly, nonatomic) CAShapeLayer *borderLayer; // ivar: _borderLayer
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DOCAddTagTextFieldDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) DOCTagDotView *tagDotView; // ivar: _tagDotView
@property (readonly, nonatomic) UITextField *tagNameTextField; // ivar: _tagNameTextField
@property (readonly, nonatomic) NSString *text;


-(BOOL)scribbleInteractionShouldDelayFocus:(id)arg0 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)cancel;
-(void)commit;
-(void)layoutSubviews;
-(void)scribbleInteractionWillBeginWriting:(id)arg0 ;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidChange:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateBorderAttributes;
-(void)updateBorderPath;


@end


#endif