// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTRANSFERCLOUDFLOW_H
#define TSTRANSFERCLOUDFLOW_H

@class UIBarButtonItem, NSString;
@protocol TSSIMSetupFlowDelegate, TSCellularPlanManagerCacheDelegate;


#import "TSSIMSetupFlow.h"
#import "TSTransferCloudFlowModel.h"

@interface TSTransferCloudFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate, TSCellularPlanManagerCacheDelegate>

 {
    UIBarButtonItem *_cancelButton;
    NSUInteger _proximitySetupState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) TSTransferCloudFlowModel *model; // ivar: _model
@property (readonly) Class superclass;


-(id)_createIntroViewController:(BOOL)arg0 ;
-(id)firstViewController;
-(id)initWithProximitySetupState:(NSUInteger)arg0 ;
-(id)nextViewControllerFrom:(id)arg0 ;
-(void)_userDidTapCancel;
-(void)dealloc;
-(void)firstViewController:(id)arg0 ;
-(void)setDefaultNavigationItems:(id)arg0 ;
-(void)startOverWithFirstViewController:(id)arg0 ;


@end


#endif