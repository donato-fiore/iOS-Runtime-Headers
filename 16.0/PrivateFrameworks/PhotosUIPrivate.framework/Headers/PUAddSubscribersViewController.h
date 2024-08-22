// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUADDSUBSCRIBERSVIEWCONTROLLER_H
#define PUADDSUBSCRIBERSVIEWCONTROLLER_H

@class UIViewController, UIBarButtonItem, PLCloudSharedAlbum;


#import "PUPhotoStreamRecipientViewController.h"

@interface PUAddSubscribersViewController : UIViewController {
    PUPhotoStreamRecipientViewController *_composeRecipientController;
    UIBarButtonItem *_addButton;
}


@property (readonly, nonatomic) PLCloudSharedAlbum *album; // ivar: _album


-(BOOL)_validateRecipientsToAdd:(id)arg0 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(id)contentScrollView;
-(id)initWithSharedStream:(id)arg0 ;
-(void)_addButtonHandler;
-(void)_cancelButtonHandler;
-(void)_dismiss;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)_saveAndDismiss;
-(void)dealloc;
-(void)loadView;
-(void)recipientViewController:(id)arg0 didEnterText:(id)arg1 ;
-(void)recipientViewControllerDidAddRecipient:(id)arg0 ;
-(void)recipientViewControllerDidRemoveRecipient:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif