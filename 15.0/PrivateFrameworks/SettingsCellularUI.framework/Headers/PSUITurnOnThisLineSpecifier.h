// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSUITURNONTHISLINESPECIFIER_H
#define PSUITURNONTHISLINESPECIFIER_H

@class PSSpecifier, CXCallObserver, CTCellularPlanManager, NSString, PSListController;
@protocol CXCallObserverDelegate;


#import "PSUICoreTelephonyCallCache.h"
#import "PSUICellularPlanManagerCache.h"
#import "PSUICellularPlanUniversalReference.h"

@interface PSUITurnOnThisLineSpecifier : PSSpecifier <CXCallObserverDelegate>



@property (retain, nonatomic) PSUICoreTelephonyCallCache *callCache; // ivar: _callCache
@property (retain, nonatomic) CXCallObserver *callObserver; // ivar: _callObserver
@property (retain, nonatomic) CTCellularPlanManager *cellularPlanManager; // ivar: _cellularPlanManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) PSListController *hostController; // ivar: _hostController
@property (retain, nonatomic) PSUICellularPlanManagerCache *planManagerCache; // ivar: _planManagerCache
@property (retain, nonatomic) PSUICellularPlanUniversalReference *planReference; // ivar: _planReference
@property (readonly) Class superclass;


-(id)initWithPlanUniversalReference:(id)arg0 cellularPlanManager:(id)arg1 planManagerCache:(id)arg2 callCache:(id)arg3 hostController:(id)arg4 ;
-(id)isPlanEnabled:(id)arg0 ;
-(void)callObserver:(id)arg0 callChanged:(id)arg1 ;
-(void)setPlanEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setSwitchEnabled;


@end


#endif