// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKTRANSCRIPTMANAGEMENTNAMEFIELD_H
#define CKTRANSCRIPTMANAGEMENTNAMEFIELD_H

@class UIView, _UIBackdropView, NSString, UILabel, UITextField;
@protocol UITextFieldDelegate, CKTranscriptManagementNameFieldDelegate;



@interface CKTranscriptManagementNameField : UIView <UITextFieldDelegate>



@property (retain, nonatomic) _UIBackdropView *backdropView; // ivar: _backdropView
@property (retain, nonatomic) UIView *bottomSeparator; // ivar: _bottomSeparator
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKTranscriptManagementNameFieldDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) UILabel *fieldLabel; // ivar: _fieldLabel
@property (copy, nonatomic) NSString *groupName;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isOverlay; // ivar: _isOverlay
@property (readonly) Class superclass;
@property (retain, nonatomic) UITextField *textField; // ivar: _textField
@property (retain, nonatomic) UIView *topSeparator; // ivar: _topSeparator


+(CGFloat)preferredHeight;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)commitGroupName;
-(void)dealloc;
-(void)layoutMarginsDidChange;
-(void)layoutSubviews;
-(void)textFieldDidEndEditing:(id)arg0 ;


@end


#endif