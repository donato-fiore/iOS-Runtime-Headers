// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBCLIPVIEWCONTROLLER_H
#define WEBCLIPVIEWCONTROLLER_H

@class UITableViewController, UITableViewCell, UIImageView, NSString, UIWebClip;
@protocol UITextFieldDelegate, _SFBookmarkTextEntryTableViewControllerDelegate, WebClipViewControllerDelegate;


#import "TabDocument.h"

@interface WebClipViewController : UITableViewController <UITextFieldDelegate, _SFBookmarkTextEntryTableViewControllerDelegate>

 {
    TabDocument *_tabDocument;
    UITableViewCell *_titleCell;
    UITableViewCell *_addressCell;
    UIImageView *_iconImageView;
    BOOL _suspendAfterDismiss;
    BOOL _delegateNotifiedOfResult;
}


@property (nonatomic) BOOL canEditAndSave; // ivar: _canEditAndSave
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WebClipViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain) UIWebClip *webClip; // ivar: _webClip


-(BOOL)_canAddWebClip;
-(BOOL)_canEditFieldsInCurrentViewController;
-(BOOL)_shouldUseTranslucentAppearance;
-(BOOL)bookmarkTextEntryTableViewControllerShouldUseTranslucentAppearance:(id)arg0 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithTabDocument:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(struct CGPoint )_centerForIconView;
-(struct UIEdgeInsets )_cellInset;
-(void)_add;
-(void)_cancel;
-(void)_textFieldChanged:(id)arg0 ;
-(void)bookmarkTextEntryTableViewController:(id)arg0 dismissedWithText:(id)arg1 ;
-(void)dealloc;
-(void)didRotateFromInterfaceOrientation:(NSInteger)arg0 ;
-(void)loadView;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateUIAnimated:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif