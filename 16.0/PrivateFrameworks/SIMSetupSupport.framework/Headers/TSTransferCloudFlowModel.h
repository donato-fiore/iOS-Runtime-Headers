// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTRANSFERCLOUDFLOWMODEL_H
#define TSTRANSFERCLOUDFLOWMODEL_H

@class CTDisplayPlanList, NSDictionary, NSMutableArray, NSString;
@protocol OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface TSTransferCloudFlowModel : NSObject {
    NSObject<OS_dispatch_group> *_queryGroup;
}


@property (retain, nonatomic) CTDisplayPlanList *carrierSetupItems; // ivar: _carrierSetupItems
@property (nonatomic) BOOL isActivationPolicyMismatch; // ivar: _isActivationPolicyMismatch
@property (nonatomic) BOOL isDualeSIMCapablityLoss; // ivar: _isDualeSIMCapablityLoss
@property (retain, nonatomic) NSDictionary *postdata; // ivar: _postdata
@property (retain, nonatomic) NSMutableArray *transferItems; // ivar: _transferItems
@property (retain, nonatomic) NSString *websheetUrl; // ivar: _websheetUrl


-(BOOL)shouldShowCarrierSetupPane;
-(void)arePlansAvailable:(id)arg0 ;
-(void)filterCarrierSetupItems:(id)arg0 ;
-(void)filterTransferPlans:(id)arg0 ;
-(void)getWebsheetInfo:(id)arg0 completion:(id)arg1 ;
-(void)requestCarrierSetups:(id)arg0 ;
-(void)requestPlansWithCompletion:(id)arg0 ;
-(void)requestTransferPlans:(id)arg0 ;


@end


#endif