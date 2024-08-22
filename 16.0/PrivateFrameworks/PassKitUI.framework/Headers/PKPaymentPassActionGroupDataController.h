// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTPASSACTIONGROUPDATACONTROLLER_H
#define PKPAYMENTPASSACTIONGROUPDATACONTROLLER_H

@class PKPaymentPass, NSArray, PKPaymentWebService, NSString;
@protocol PKRemoteActionGroupViewControllerDelegate, PKSelectActionGroupViewControllerDelegate, PKPaymentDataProvider;

#import <Foundation/Foundation.h>

#import "PKNavigationController.h"

@interface PKPaymentPassActionGroupDataController : NSObject <PKRemoteActionGroupViewControllerDelegate, PKSelectActionGroupViewControllerDelegate>

 {
    PKPaymentPass *_pass;
    NSArray *_actionGroups;
    id<PKPaymentDataProvider> *_paymentDataProvider;
    PKPaymentWebService *_webService;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKNavigationController *navController;
@property (readonly) Class superclass;


-(id)initWithPass:(id)arg0 actionGroups:(id)arg1 paymentDataProvider:(id)arg2 webService:(id)arg3 ;
-(void)_dismissOrPopViewController:(id)arg0 ;
-(void)remoteGroupActionsViewControllerDidCancel:(id)arg0 ;
-(void)remoteGroupActionsViewControllerDidPerformFetchActionGroup:(id)arg0 ;
-(void)selectActionGroupViewControllerDidCancel:(id)arg0 ;
-(void)selectActionGroupViewControllerDidPerformFetchActionGroup:(id)arg0 ;


@end


#endif