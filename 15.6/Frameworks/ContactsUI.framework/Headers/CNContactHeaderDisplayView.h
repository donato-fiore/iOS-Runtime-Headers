// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTACTHEADERDISPLAYVIEW_H
#define CNCONTACTHEADERDISPLAYVIEW_H

@class NSDictionary, NSString, NSLayoutConstraint, CNContactFormatter, CNGeminiResult, UILabel, UIView;
@protocol CNPickerControllerDelegate, UINavigationControllerDelegate, CNUIReusableView;


#import "CNContactHeaderView.h"
#import "CNContactDowntimeView.h"
#import "CNGeminiPickerController.h"
#import "CNContactGeminiView.h"

@interface CNContactHeaderDisplayView : CNContactHeaderView <CNPickerControllerDelegate, UINavigationControllerDelegate, CNUIReusableView>

 {
    NSDictionary *_taglineTextAttributes;
    NSDictionary *_downtimeTextAttributes;
    NSDictionary *_geminiTextAttributes;
}


@property (nonatomic) BOOL allowsPickerActions; // ivar: _allowsPickerActions
@property (retain, nonatomic) NSString *alternateName; // ivar: _alternateName
@property (retain) NSLayoutConstraint *avatarNameSpacingConstraint; // ivar: _avatarNameSpacingConstraint
@property (nonatomic) NSUInteger avatarStyle;
@property (retain, nonatomic) CNContactFormatter *contactFormatter; // ivar: _contactFormatter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CNContactDowntimeView *downtimeView; // ivar: _downtimeView
@property (retain, nonatomic) CNGeminiPickerController *geminiPicker; // ivar: _geminiPicker
@property (retain) CNGeminiResult *geminiResult; // ivar: _geminiResult
@property (retain) CNContactGeminiView *geminiView; // ivar: _geminiView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UILabel *importantLabel; // ivar: _importantLabel
@property (retain, nonatomic) NSString *importantMessage; // ivar: _importantMessage
@property (copy, nonatomic) NSDictionary *importantTextAttributes; // ivar: _importantTextAttributes
@property (nonatomic) BOOL isDowntimeContact; // ivar: _isDowntimeContact
@property (nonatomic) BOOL isEmergencyContact; // ivar: _isEmergencyContact
@property (nonatomic) BOOL isRestrictedContact; // ivar: _isRestrictedContact
@property (nonatomic) CGFloat maxLabelsHeight; // ivar: _maxLabelsHeight
@property (retain, nonatomic) NSString *message; // ivar: _message
@property (nonatomic) CGFloat minLabelsHeight; // ivar: _minLabelsHeight
@property (retain, nonatomic) UIView *personHeaderView; // ivar: _personHeaderView
@property (nonatomic) BOOL shouldShowGemini; // ivar: _shouldShowGemini
@property (readonly) Class superclass;
@property (retain) UILabel *taglineLabel; // ivar: _taglineLabel
@property (copy, nonatomic) NSDictionary *taglineTextAttributes;


+(id)contactHeaderViewWithContact:(id)arg0 allowsPhotoDrops:(BOOL)arg1 showingNavBar:(BOOL)arg2 monogramOnly:(BOOL)arg3 delegate:(id)arg4 ;
+(id)contactHeaderViewWithContact:(id)arg0 showingNavBar:(BOOL)arg1 monogramOnly:(BOOL)arg2 delegate:(id)arg3 ;
+(id)descriptorForRequiredKeysForContactFormatter:(id)arg0 ;
+(id)makePhotoViewWithShouldAllowTakePhotoAction:(BOOL)arg0 shouldAllowImageDrops:(BOOL)arg1 monogramOnly:(BOOL)arg2 ;
+(id)sizeAttributesShowingNavBar:(BOOL)arg0 ;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(CGFloat)defaultMaxHeight;
-(CGFloat)maxHeight;
-(CGFloat)minHeight;
-(id)_headerStringForContacts:(id)arg0 ;
-(id)_importantString;
-(id)_taglineStringForContacts:(id)arg0 ;
-(id)descriptorForRequiredKeys;
-(id)downtimeTextAttributes;
-(id)geminiTextAttributes;
-(id)initWithContact:(id)arg0 frame:(struct CGRect )arg1 shouldAllowImageDrops:(BOOL)arg2 showingNavBar:(BOOL)arg3 monogramOnly:(BOOL)arg4 delegate:(id)arg5 ;
-(id)initWithContact:(id)arg0 frame:(struct CGRect )arg1 showingNavBar:(BOOL)arg2 monogramOnly:(BOOL)arg3 delegate:(id)arg4 ;
-(void)_updateDowntimeView;
-(void)_updateImportantLabel;
-(void)_updatePhotoView;
-(void)calculateLabelSizes;
-(void)calculateLabelSizesIfNeeded;
-(void)copy:(id)arg0 ;
-(void)createGeminiViewIfNeeded;
-(void)didFinishUsing;
-(void)disablePhotoTapGesture;
-(void)handleGeminiViewTouch:(id)arg0 ;
-(void)handleNameLabelLongPress:(id)arg0 ;
-(void)layoutSubviews;
-(void)menuWillHide:(id)arg0 ;
-(void)picker:(id)arg0 didPickItem:(id)arg1 ;
-(void)pickerDidCancel:(id)arg0 ;
-(void)reloadDataPreservingChanges:(BOOL)arg0 ;
-(void)setDowntimeTextAttributes:(id)arg0 ;
-(void)setGeminiTextAttributes:(id)arg0 ;
-(void)setNameTextAttributes:(id)arg0 ;
-(void)tintColorDidChange;
-(void)updateConstraints;
-(void)updateFontSizes;
-(void)updateGeminiResult:(id)arg0 ;
-(void)updateSizeDependentAttributes;


@end


#endif