// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCELLULARPLANPROXIMITYTRANSFERCONTROLLER_H
#define TSCELLULARPLANPROXIMITYTRANSFERCONTROLLER_H

@class CoreTelephonyClient, NSString;
@protocol CoreTelephonyClientCellularPlanManagementDelegate, TSSIMSetupFlowDelegate, ESIMProxTransferControllerDelegate;

#import <Foundation/Foundation.h>


@interface TSCellularPlanProximityTransferController : NSObject <CoreTelephonyClientCellularPlanManagementDelegate, TSSIMSetupFlowDelegate>



@property (retain, nonatomic) CoreTelephonyClient *client; // ivar: _client
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ESIMProxTransferControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithESIMDelegate:(id)arg0 ;
-(void)launchSecureIntentUI:(id)arg0 completion:(id)arg1 ;
-(void)viewControllerDidComplete:(id)arg0 ;


@end


#endif