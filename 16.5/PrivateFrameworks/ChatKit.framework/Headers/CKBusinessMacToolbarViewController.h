// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKBUSINESSMACTOOLBARVIEWCONTROLLER_H
#define CKBUSINESSMACTOOLBARVIEWCONTROLLER_H

@class UIViewController, UIView, IMHandle;


#import "CKConversation.h"
#import "CKBusinessMacToolbarView.h"

@interface CKBusinessMacToolbarViewController : UIViewController

@property (readonly, nonatomic) CKConversation *conversation; // ivar: _conversation
@property (retain, nonatomic) UIView *detailsPopoverPresentationSourceView; // ivar: _detailsPopoverPresentationSourceView
@property (retain, nonatomic) IMHandle *handle; // ivar: _handle
@property (readonly, nonatomic) BOOL showingInStandAloneWindow; // ivar: _showingInStandAloneWindow
@property (retain, nonatomic) CKBusinessMacToolbarView *toolbarView; // ivar: _toolbarView


-(id)initWithConversation:(id)arg0 showingInStandAloneWindow:(BOOL)arg1 ;
-(struct CGRect )_detailsPopoverFrame;
-(void)_handleAddressBookPartialChange:(id)arg0 ;
-(void)_updateBannerImageData;
-(void)_updateBrandColors;
-(void)_updateFallbackTitle;
-(void)dealloc;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif