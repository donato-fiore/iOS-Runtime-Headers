// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFPICKERVIEWPROVIDER_H
#define WFPICKERVIEWPROVIDER_H

@class NSString, UIViewController;
@protocol WFNetworkView, WFNetworkViewProvider, WFPickerViewProviderDelegate;

#import <Foundation/Foundation.h>


@interface WFPickerViewProvider : NSObject <WFNetworkView, WFNetworkViewProvider>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFPickerViewProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIViewController *rootViewController; // ivar: _rootViewController
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wantsModalPresentation; // ivar: wantsModalPresentation


-(BOOL)_canHandleCredentialsContext:(id)arg0 ;
-(id)_promptForEnterpriseJoin:(id)arg0 ;
-(id)certificateViewControllerWithContext:(id)arg0 ;
-(id)credentialsViewControllerWithContext:(id)arg0 ;
-(id)initWithRootViewController:(id)arg0 ;
-(id)networkDetailsViewControllerWithContext:(id)arg0 ;
-(id)networkErrorViewControllerWithContext:(id)arg0 ;
-(id)otherNetworkViewControllerWithContext:(id)arg0 ;
-(void)didDismissNetworkViewController:(id)arg0 forContext:(id)arg1 ;
-(void)presentNetworkViewController:(id)arg0 forContext:(id)arg1 ;


@end


#endif