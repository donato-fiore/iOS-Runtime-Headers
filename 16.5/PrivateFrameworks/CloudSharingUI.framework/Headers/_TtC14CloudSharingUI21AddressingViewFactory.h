// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC14CLOUDSHARINGUI21ADDRESSINGVIEWFACTORY_H
#define _TTC14CLOUDSHARINGUI21ADDRESSINGVIEWFACTORY_H

@class UIViewController;

#import <Foundation/Foundation.h>


@interface _TtC14CloudSharingUI21AddressingViewFactory : NSObject {
    ? viewModel;
}


@property (nonatomic, readonly) UIViewController *viewController; // ivar: viewController


-(id)init;
// -(id)initWithHeaderImageData:(id)arg0 headerTitle:(id)arg1 loadingText:(id)arg2 supplementaryText:(id)arg3 userInfoText:(id)arg4 primaryButtonText:(id)arg5 secondaryButtonText:(id)arg6 userDidClickPrimaryButton:(id)arg7 userDidClickSecondaryButton:(unk)arg8 userDidClickShowContactPicker:(id)arg9 userDidChangeAddresses:(unk)arg10  ;
-(void)addAddressFrom:(id)arg0 contactProperty:(id)arg1 ;
-(void)updateWithHeaderImageData:(id)arg0 headerTitle:(id)arg1 loadingText:(id)arg2 supplementaryText:(id)arg3 userInfoText:(id)arg4 primaryButtonText:(id)arg5 secondaryButtonText:(id)arg6 ;


@end


#endif