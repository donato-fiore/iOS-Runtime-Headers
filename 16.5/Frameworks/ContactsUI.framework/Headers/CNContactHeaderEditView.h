// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTHEADEREDITVIEW_H
#define CNCONTACTHEADEREDITVIEW_H

@class UIButton, NSLayoutConstraint;


#import "CNContactHeaderView.h"

@interface CNContactHeaderEditView : CNContactHeaderView

@property (nonatomic) BOOL allowsEditPhoto; // ivar: _allowsEditPhoto
@property (retain, nonatomic) UIButton *editButton; // ivar: _editButton
@property (retain, nonatomic) NSLayoutConstraint *editButtonHeightConstraint; // ivar: _editButtonHeightConstraint
@property (nonatomic) CGSize maxButtonSize; // ivar: _maxButtonSize


+(id)contactHeaderViewWithContact:(id)arg0 shouldAllowTakePhotoAction:(BOOL)arg1 monogramOnly:(BOOL)arg2 delegate:(id)arg3 ;
+(id)contactHeaderViewWithContact:(id)arg0 shouldAllowTakePhotoAction:(BOOL)arg1 showingNavBar:(BOOL)arg2 monogramOnly:(BOOL)arg3 delegate:(id)arg4 ;
+(id)makePhotoViewWithShouldAllowTakePhotoAction:(BOOL)arg0 shouldAllowImageDrops:(BOOL)arg1 monogramOnly:(BOOL)arg2 ;
+(id)sizeAttributesShowingNavBar:(BOOL)arg0 ;
-(BOOL)hasPhoto;
-(BOOL)photoIsModified;
-(CGFloat)defaultMaxHeight;
-(CGFloat)maxHeight;
-(id)initWithContact:(id)arg0 frame:(struct CGRect )arg1 shouldAllowTakePhotoAction:(BOOL)arg2 delegate:(id)arg3 showingNavBar:(BOOL)arg4 monogramOnly:(BOOL)arg5 ;
-(id)initWithContact:(id)arg0 frame:(struct CGRect )arg1 shouldAllowTakePhotoAction:(BOOL)arg2 showingNavBar:(BOOL)arg3 monogramOnly:(BOOL)arg4 delegate:(id)arg5 ;
-(void)calculateLabelSizesIfNeeded;
-(void)didFinishUsing;
-(void)presentAvatarPickerWithImageData:(id)arg0 ;
-(void)saveContactPhoto;
-(void)updateConstraints;
-(void)updateContactWithEditedPropertyItem:(id)arg0 ;
-(void)updateEditButtonTitle;
-(void)updateFontSizes;
-(void)updateSizeDependentAttributes;
-(void)updateWithContacts:(id)arg0 ;


@end


#endif