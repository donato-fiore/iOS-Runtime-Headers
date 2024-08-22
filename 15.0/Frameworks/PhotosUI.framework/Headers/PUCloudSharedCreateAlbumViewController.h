// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUCLOUDSHAREDCREATEALBUMVIEWCONTROLLER_H
#define PUCLOUDSHAREDCREATEALBUMVIEWCONTROLLER_H

@class UIViewController, UINavigationItem, NSArray, NSString;
@protocol PUCloudSharedCreateAlbumViewControllerDelegate;


#import "PUPhotoStreamRecipientViewController.h"

@interface PUCloudSharedCreateAlbumViewController : UIViewController {
    UINavigationItem *_navItem;
    PUPhotoStreamRecipientViewController *_composeRecipientController;
}


@property (retain, nonatomic, setter=_setAlbumRecipients:) NSArray *_albumRecipients; // ivar: __albumRecipients
@property (readonly, nonatomic) NSArray *albumRecipients;
@property (weak, nonatomic) NSObject<PUCloudSharedCreateAlbumViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSString *nextButtonTitle; // ivar: _nextButtonTitle


-(BOOL)_validateRecipientsToAdd:(id)arg0 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(id)init;
-(id)navigationItem;
-(struct CGSize )contentSizeForViewInPopover;
-(void)_cancelAction:(id)arg0 ;
-(void)_doneAction:(id)arg0 ;
-(void)_handleCompletionWithSuccess:(BOOL)arg0 ;
-(void)_saveUserEnterredInfo;
-(void)dealloc;
-(void)loadView;


@end


#endif