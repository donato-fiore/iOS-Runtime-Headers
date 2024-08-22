// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLCUSTOMITEMVIEWCONTROLLER_H
#define QLCUSTOMITEMVIEWCONTROLLER_H

@class UIViewController, NSString, NSDictionary, UIView;
@protocol QLRemotePopoverTracker, QLCustomItemViewControllerHost;


#import "QLAppearance.h"

@interface QLCustomItemViewController : UIViewController <QLRemotePopoverTracker>

 {
    QLAppearance *_lastAppearance;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<QLCustomItemViewControllerHost> *hostViewControllerProxy; // ivar: _hostViewControllerProxy
@property (nonatomic) BOOL isShareEnabled; // ivar: _isShareEnabled
@property (copy, nonatomic) NSDictionary *previewOptions; // ivar: _previewOptions
@property (weak, nonatomic) UIView *shareSheetPresentationView; // ivar: _shareSheetPresentationView
@property (readonly) Class superclass;


-(void)didDismissActivityViewController;
-(void)dismissPreviewController;
-(void)forwardMessageToHost:(id)arg0 completionHandler:(id)arg1 ;
-(void)getFrameWithCompletionBlock:(id)arg0 ;
-(void)presentActivityViewControllerFromView:(id)arg0 ;
-(void)presentActivityViewControllerFromView:(id)arg0 withURL:(id)arg1 ;
-(void)presentationModeDidChange:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)setAppearance:(id)arg0 animated:(BOOL)arg1 ;
-(void)setFullScreen:(BOOL)arg0 ;


@end


#endif