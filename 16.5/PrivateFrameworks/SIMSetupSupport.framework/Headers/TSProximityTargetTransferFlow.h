// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPROXIMITYTARGETTRANSFERFLOW_H
#define TSPROXIMITYTARGETTRANSFERFLOW_H

@class UIBarButtonItem, NSString;
@protocol TSSIMSetupFlowDelegate;


#import "TSSIMSetupFlow.h"
#import "SSProximityDevice.h"

@interface TSProximityTargetTransferFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate>



@property NSUInteger backgroundTask; // ivar: _backgroundTask
@property (retain) SSProximityDevice *btServer; // ivar: _btServer
@property (retain) UIBarButtonItem *cancelButton; // ivar: _cancelButton
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSString *pin; // ivar: _pin
@property (readonly) Class superclass;
@property (retain) id *transferBackPlan; // ivar: _transferBackPlan


-(id)_firstViewController;
-(id)firstViewController;
-(id)initWithTransferBackPlan:(id)arg0 ;
-(id)nextViewControllerFrom:(id)arg0 ;
-(void)_beginAdvertising:(id)arg0 ;
-(void)_endAdvertising;
-(void)_handleSKEvent:(id)arg0 ;
-(void)_startBackgroundTask;
-(void)_stopBackgroundTask;
-(void)dealloc;
-(void)firstViewController:(id)arg0 ;
-(void)installationFailed;
-(void)setDefaultNavigationItems:(id)arg0 ;
-(void)userDidTapCancel;


@end


#endif