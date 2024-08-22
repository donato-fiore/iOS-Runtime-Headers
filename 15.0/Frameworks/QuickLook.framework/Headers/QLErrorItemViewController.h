// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLERRORITEMVIEWCONTROLLER_H
#define QLERRORITEMVIEWCONTROLLER_H

@class NSError;


#import "QLItemViewController.h"
#import "QLItem.h"

@interface QLErrorItemViewController : QLItemViewController

@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain) QLItem *previewItem; // ivar: _previewItem


-(BOOL)canEnterFullScreen;
-(BOOL)canPinchToDismiss;
-(BOOL)canSwipeToDismiss;
-(void)_updateLabelsWithCurrentErrorIfNeeded;
-(void)loadPreviewControllerWithContents:(id)arg0 context:(id)arg1 completionHandler:(id)arg2 ;
-(void)loadView;


@end


#endif