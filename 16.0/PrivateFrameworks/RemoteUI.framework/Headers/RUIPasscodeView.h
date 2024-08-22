// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RUIPASSCODEVIEW_H
#define RUIPASSCODEVIEW_H

@class UIScrollView, UIView<RUIHeader>, UITextField, UIView<RemoteUITableFooter>, NSString, PSPasscodeField, UIColor, UIView<RUIPasscodeField>;
@protocol RUITableFooterDelegate, CAAnimationDelegate, PSPasscodeFieldDelegate, RUITopLevelPageElement;


#import "RUIElement.h"
#import "RUIHTMLHeaderView.h"
#import "RUIHTMLHeaderElement.h"
#import "RUIHeaderElement.h"
#import "RUIObjectModel.h"
#import "RUIPage.h"

@interface RUIPasscodeView : RUIElement <RUITableFooterDelegate, CAAnimationDelegate, PSPasscodeFieldDelegate, RUITopLevelPageElement>

 {
    UIScrollView *_containerView;
    UIView<RUIHeader> *_headerView;
    RUIHTMLHeaderView *_HTMLHeaderView;
    UITextField *_complexPasscodeField;
    UIView<RemoteUITableFooter> *_footerView;
    NSString *_pendingAutoFillToken;
    BOOL _appeared;
    NSUInteger _passcodeValidationAttempts;
    CGFloat _keyboardHeight;
    PSPasscodeField *_passcodeField;
}


@property (retain, nonatomic) RUIHTMLHeaderElement *HTMLHeader; // ivar: _HTMLHeader
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) RUIElement *footer; // ivar: _footer
@property (retain, nonatomic) UIColor *foregroundColor; // ivar: _foregroundColor
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) RUIHeaderElement *header; // ivar: _header
@property (copy, nonatomic) NSString *headerTitle; // ivar: _headerTitle
@property (nonatomic) NSInteger keyboardAppearance; // ivar: _keyboardAppearance
@property (nonatomic) NSUInteger numberOfEntryFields; // ivar: _numberOfEntryFields
@property (weak, nonatomic) RUIObjectModel *objectModel; // ivar: _objectModel
@property (weak, nonatomic) RUIPage *page; // ivar: _page
@property (readonly, nonatomic) UIView<RUIPasscodeField> *passcodeField;
@property (copy, nonatomic) NSString *submittedPIN; // ivar: _submittedPIN
@property (readonly) Class superclass;


-(BOOL)_requiresLocalPasscodeValidation;
-(id)initWithAttributes:(id)arg0 parent:(id)arg1 ;
-(id)passcodeView;
-(id)sourceURL;
-(id)subElementWithID:(id)arg0 ;
-(id)titleLabel;
-(id)view;
-(void)_clearPasscode;
-(void)_complexPasscodeFieldDidChange:(id)arg0 ;
-(void)_doneButtonTapped:(id)arg0 ;
-(void)_jiggleView:(id)arg0 ;
-(void)_updateFieldSpacer;
-(void)autofillWithToken:(id)arg0 ;
-(void)footerView:(id)arg0 activatedLinkWithURL:(id)arg1 ;
-(void)keyboardFrameDidChange:(id)arg0 ;
-(void)passcodeField:(id)arg0 enteredPasscode:(id)arg1 ;
-(void)performAction:(int)arg0 forElement:(id)arg1 completion:(id)arg2 ;
-(void)populatePostbackDictionary:(id)arg0 ;
-(void)setImage:(id)arg0 ;
-(void)setImageAlignment:(int)arg0 ;
-(void)setImageSize:(struct CGSize )arg0 ;
-(void)submitPIN;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayout;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif