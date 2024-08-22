// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLLOADINGITEMVIEWCONTROLLER_H
#define QLLOADINGITEMVIEWCONTROLLER_H

@class UILabel, UIActivityIndicatorView;


#import "QLItemViewController.h"

@interface QLLoadingItemViewController : QLItemViewController {
    UILabel *_loadingLabel;
    UIActivityIndicatorView *_spinner;
}




-(BOOL)canEnterFullScreen;
-(BOOL)canPinchToDismiss;
-(BOOL)canSwipeToDismiss;
-(void)_updateLoadingLabel;
-(void)loadPreviewControllerWithContents:(id)arg0 context:(id)arg1 completionHandler:(id)arg2 ;
-(void)previewBecameFullScreen:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif