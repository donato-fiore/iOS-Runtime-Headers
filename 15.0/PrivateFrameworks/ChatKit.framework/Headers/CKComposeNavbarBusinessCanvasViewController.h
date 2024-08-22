// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKCOMPOSENAVBARBUSINESSCANVASVIEWCONTROLLER_H
#define CKCOMPOSENAVBARBUSINESSCANVASVIEWCONTROLLER_H

@class NSString;
@protocol CKAvatarPickerViewControllerDelegate;


#import "CKComposeNavbarCanvasViewController.h"
#import "CKAvatarPickerViewController.h"
#import "CKConversation.h"
#import "CKLabel.h"

@interface CKComposeNavbarBusinessCanvasViewController : CKComposeNavbarCanvasViewController <CKAvatarPickerViewControllerDelegate>



@property (retain, nonatomic) CKAvatarPickerViewController *avatarController; // ivar: _avatarController
@property (retain, nonatomic) CKConversation *cachedConversation; // ivar: _cachedConversation
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CKLabel *defaultLabel; // ivar: _defaultLabel
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canShowAvatarView;
-(BOOL)hideChevron;
-(NSInteger)navBarContext;
-(id)_titleItemViewForTraitCollection:(id)arg0 ;
-(void)_handleAddressBookPartialChange:(id)arg0 ;
-(void)_updateBrandingForConversation:(id)arg0 ;
-(void)_updateDefaultLabelForConversation:(id)arg0 ;
-(void)_updateTitleForConversation:(id)arg0 animated:(BOOL)arg1 ;
-(void)tappedAvatarPickerViewController;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateContentsForConversation:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif