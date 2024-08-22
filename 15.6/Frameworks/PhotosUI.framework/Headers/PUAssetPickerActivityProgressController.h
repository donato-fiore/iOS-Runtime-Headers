// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUASSETPICKERACTIVITYPROGRESSCONTROLLER_H
#define PUASSETPICKERACTIVITYPROGRESSCONTROLLER_H

@class UIAlertController, NSString, NSProgress;

#import <Foundation/Foundation.h>

#import "PUAssetPickerActivityProgressViewController.h"

@interface PUAssetPickerActivityProgressController : NSObject {
    PUAssetPickerActivityProgressViewController *_progressViewController;
    UIAlertController *_alertController;
}


@property (copy, nonatomic) id *cancellationHandler; // ivar: _cancellationHandler
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)init;
-(void)_setupAlertController;
-(void)hideWithCompletion:(id)arg0 ;
-(void)showFromSourceViewController:(id)arg0 completion:(id)arg1 ;


@end


#endif