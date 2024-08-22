// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSONDEVICECONVERSIONFLOW_H
#define TSONDEVICECONVERSIONFLOW_H

@class NSString, UIBarButtonItem;
@protocol TSSIMSetupFlowDelegate;


#import "TSSIMSetupFlow.h"

@interface TSOnDeviceConversionFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate>

 {
    NSString *_phoneNumber;
    NSString *_carrierName;
    UIBarButtonItem *_cancelButton;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)firstViewController;
-(id)initWithPhoneNumber:(id)arg0 carrierName:(id)arg1 ;
-(id)nextViewControllerFrom:(id)arg0 ;
-(void)firstViewController:(id)arg0 ;
-(void)setDefaultNavigationItems:(id)arg0 ;


@end


#endif