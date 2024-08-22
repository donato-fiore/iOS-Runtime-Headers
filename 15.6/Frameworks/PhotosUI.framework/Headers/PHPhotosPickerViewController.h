// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHPHOTOSPICKERVIEWCONTROLLER_H
#define PHPHOTOSPICKERVIEWCONTROLLER_H

@class UIViewController;


#import "PUPhotosPickerViewController.h"
#import "PUPhotosPickerViewControllerSpec.h"
#import "PHPhotosPickerOptions.h"

@interface PHPhotosPickerViewController : UIViewController {
    PUPhotosPickerViewController *_photosPickerViewController;
    PUPhotosPickerViewControllerSpec *_spec;
}


@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, nonatomic) PHPhotosPickerOptions *options; // ivar: _options


-(BOOL)_updateSpecIfNeeded;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithOptions:(id)arg0 ;
-(void)_commonPHPhotosPickerViewControllerInitializer;
-(void)_handlePickerViewControllerDidFinish:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif