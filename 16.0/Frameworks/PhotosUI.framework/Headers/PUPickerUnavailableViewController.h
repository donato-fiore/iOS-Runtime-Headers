// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPICKERUNAVAILABLEVIEWCONTROLLER_H
#define PUPICKERUNAVAILABLEVIEWCONTROLLER_H

@class UIViewController, NSError;
@protocol _PUPickerUnavailableViewControllerDelegate;


#import "PHPickerConfiguration.h"

@interface PUPickerUnavailableViewController : UIViewController

@property (readonly, nonatomic) PHPickerConfiguration *configuration; // ivar: _configuration
@property (weak, nonatomic) NSObject<_PUPickerUnavailableViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSUInteger reason; // ivar: _reason


+(id)unavailableViewController:(NSUInteger)arg0 configuration:(id)arg1 error:(id)arg2 delegate:(id)arg3 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithReason:(NSUInteger)arg0 configuration:(id)arg1 error:(id)arg2 ;
-(id)unavailableButtonTitle;
-(id)unavailableKey;
-(id)unavailableMessage;
-(id)unavailableTitle;
-(void)askDelegateToCancel;
-(void)askDelegateToRetry;
-(void)cancelButtonTapped:(id)arg0 ;
-(void)updateReason:(NSUInteger)arg0 error:(id)arg1 ;
-(void)updateUnavailableView;
-(void)viewDidLoad;


@end


#endif