// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPHOTOSTREAMCREATETITLEVIEWCONTROLLER_H
#define PUPHOTOSTREAMCREATETITLEVIEWCONTROLLER_H

@class UIViewController, UITextField, UILabel, UITextView, UINavigationItem, NSArray, NSLayoutConstraint, NSString;
@protocol UITextViewDelegate, PUPhotoStreamCreateTitleDelegate;



@interface PUPhotoStreamCreateTitleViewController : UIViewController <UITextViewDelegate>

 {
    UITextField *_titleField;
    UILabel *_descriptionLabel;
    UITextView *_textView;
    UILabel *_textPlaceholderLabel;
    UINavigationItem *_navItem;
    UILabel *_instructionLabel;
    NSArray *_constraints;
    BOOL _hidePlaceholder;
    UILabel *_axPlaceholderLabel;
    NSLayoutConstraint *_standardHeightConstraint;
    NSLayoutConstraint *_axHeightConstraint;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) NSObject<PUPhotoStreamCreateTitleDelegate> *titleDelegate; // ivar: _titleDelegate


-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)navigationItem;
-(struct CGSize )contentSizeForViewInPopover;
-(void)_addConstraintsForTraitCollection:(id)arg0 ;
-(void)_cancelPost:(id)arg0 ;
-(void)_setTitle:(id)arg0 ;
-(void)contentSizeChanged;
-(void)dealloc;
-(void)loadView;
-(void)textViewDidChange:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif