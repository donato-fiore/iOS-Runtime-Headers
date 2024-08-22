// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOCADDTAGVIEW_H
#define DOCADDTAGVIEW_H

@class UIView, UILabel, CAShapeLayer, NSString, NSArray, UITextField;
@protocol UITextFieldDelegate, UIScribbleInteractionDelegate, DOCAddTagTextFieldDelegate;


#import "DOCTagDotView.h"

@interface DOCAddTagView : UIView <UITextFieldDelegate, UIScribbleInteractionDelegate>



@property (readonly, nonatomic) UILabel *addNewTagLabel; // ivar: _addNewTagLabel
@property (readonly, nonatomic) CAShapeLayer *backgroundShapeLayer; // ivar: _backgroundShapeLayer
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DOCAddTagTextFieldDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *notificationObservances; // ivar: _notificationObservances
@property (readonly) Class superclass;
@property (readonly, nonatomic) DOCTagDotView *tagDotView; // ivar: _tagDotView
@property (readonly, nonatomic) UITextField *tagNameTextField; // ivar: _tagNameTextField
@property (readonly, nonatomic) NSString *text;


-(BOOL)scribbleInteractionShouldDelayFocus:(id)arg0 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)cancel;
-(void)commit;
-(void)dealloc;
-(void)handleTapGesture:(id)arg0 ;
-(void)layoutSubviews;
-(void)scribbleInteractionWillBeginWriting:(id)arg0 ;
-(void)setShowingAddNewTagLabel:(BOOL)arg0 ;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidChange:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateBorderAttributes;
-(void)updateBorderPath;


@end


#endif