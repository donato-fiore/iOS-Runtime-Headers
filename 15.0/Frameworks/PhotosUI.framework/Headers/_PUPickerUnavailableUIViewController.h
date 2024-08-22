// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PUPICKERUNAVAILABLEUIVIEWCONTROLLER_H
#define _PUPICKERUNAVAILABLEUIVIEWCONTROLLER_H

@class UIViewController, NSError, PXContentUnavailableView;
@protocol _PUPickerUnavailableUIViewControllerDelegate;


#import "PUPickerConfiguration.h"

@interface _PUPickerUnavailableUIViewController : UIViewController

@property (readonly, nonatomic) PUPickerConfiguration *configuration; // ivar: _configuration
@property (weak, nonatomic) NSObject<_PUPickerUnavailableUIViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSUInteger reason; // ivar: _reason
@property (readonly, nonatomic) PXContentUnavailableView *unavailableView; // ivar: _unavailableView


+(id)unavailableUIViewController:(NSUInteger)arg0 configuration:(id)arg1 error:(id)arg2 delegate:(id)arg3 ;
+(id)unavailableUIViewControllerEmbeddedInNavigationController:(NSUInteger)arg0 configuration:(id)arg1 error:(id)arg2 delegate:(id)arg3 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithReason:(NSUInteger)arg0 configuration:(id)arg1 error:(id)arg2 ;
-(id)unavailableButtonTitle;
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