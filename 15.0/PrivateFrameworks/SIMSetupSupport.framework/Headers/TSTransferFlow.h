// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTRANSFERFLOW_H
#define TSTRANSFERFLOW_H

@class UIViewController<TSSetupFlowItem>, NSString;
@protocol TSSIMSetupFlowDelegate;


#import "TSSIMSetupFlow.h"

@interface TSTransferFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate>

 {
    UIViewController<TSSetupFlowItem> *_currentViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)needsToRunUsingMessageSession:(id)arg0 completion:(id)arg1 ;
+(void)needsToRunUsingMessageSession:(id)arg0 transferablePlanOnSource:(BOOL)arg1 completion:(id)arg2 ;
-(id)firstViewController;
-(id)nextViewControllerFrom:(id)arg0 ;
-(void)firstViewController:(id)arg0 ;
-(void)setDefaultNavigationItems:(id)arg0 ;
-(void)viewControllerDidComplete:(id)arg0 ;


@end


#endif