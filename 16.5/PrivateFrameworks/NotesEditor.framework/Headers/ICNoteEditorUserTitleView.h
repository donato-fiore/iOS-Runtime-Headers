// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICNOTEEDITORUSERTITLEVIEW_H
#define ICNOTEEDITORUSERTITLEVIEW_H

@class UIView, UIAlertController, NSArray, NSString, UIButton, UILabel, ICNote;
@protocol UITextFieldDelegate, ICNoteEditorUserTitleViewDelegate;



@interface ICNoteEditorUserTitleView : UIView <UITextFieldDelegate>



@property (weak, nonatomic) UIAlertController *alertController; // ivar: _alertController
@property (retain, nonatomic) NSArray *alternateConstraintsForAXLargerTextSizes; // ivar: _alternateConstraintsForAXLargerTextSizes
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *defaultConstraints; // ivar: _defaultConstraints
@property (weak, nonatomic) NSObject<ICNoteEditorUserTitleViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) UIButton *editButton; // ivar: _editButton
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UILabel *label; // ivar: _label
@property (retain, nonatomic) ICNote *note; // ivar: _note
@property (readonly, nonatomic) CGFloat preferredHeight;
@property (readonly) Class superclass;


+(BOOL)shouldShowUserTitleViewForNote:(id)arg0 ;
+(id)newUserTitleView;
-(BOOL)accessibilityActivate;
-(BOOL)isAccessibilityElement;
-(id)accessibilityContainer;
-(id)accessibilityHint;
-(id)accessibilityValue;
-(void)accessibilityElementDidBecomeFocused;
-(void)awakeFromNib;
-(void)dealloc;
-(void)editButtonPressed:(id)arg0 ;
-(void)noteWillBeDeleted:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;
-(void)updateContentToCurrentNote;
-(void)updateFonts;


@end


#endif