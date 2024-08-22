// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASVINLINEHOSTVIEWCONTROLLER_H
#define ASVINLINEHOSTVIEWCONTROLLER_H

@class UIViewController, NSUUID, NSURL, UIDocumentInteractionController, NSString;
@protocol UIDocumentInteractionControllerDelegate, ARQLInlineService2;



@interface ASVInlineHostViewController : UIViewController <UIDocumentInteractionControllerDelegate>

 {
    NSUUID *_uuid;
    UIViewController *_childVC;
    NSURL *_canonicalWebPageURL;
    UIDocumentInteractionController *_documentInteractionController;
    id<ARQLInlineService2> *_fullscreenService;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithUUID:(id)arg0 child:(id)arg1 fullscreenInlineService:(id)arg2 canonicalWebPageURL:(id)arg3 ;
-(void)documentInteractionControllerDidDismissOptionsMenu:(id)arg0 ;
-(void)handleConnectionInterrupted;
-(void)queryShowShareSheetAndNotifyDidDismiss:(BOOL)arg0 ;
-(void)requestNewShareSheetFrame;
-(void)showShareSheet:(id)arg0 frame:(struct CGRect )arg1 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif