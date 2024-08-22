// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICQREMOTEUPGRADEFLOWMANAGER_H
#define ICQREMOTEUPGRADEFLOWMANAGER_H

@class ICQOffer, ICQRemoteContext, NSDate;
@protocol ICQUpgradeFlowManagerDelegate;

#import <Foundation/Foundation.h>

#import "ICQUpgradeFlowManager.h"
#import "ICQUpgradeFlowOptions.h"
#import "ICQRemoteUIDataLoader.h"

@interface ICQRemoteUpgradeFlowManager : NSObject

@property (weak, nonatomic) NSObject<ICQUpgradeFlowManagerDelegate> *delegate; // ivar: _delegate
@property (weak, nonatomic) ICQUpgradeFlowManager *flowManager; // ivar: _flowManager
@property (copy, nonatomic) ICQUpgradeFlowOptions *flowOptions; // ivar: _flowOptions
@property (retain, nonatomic) ICQRemoteUIDataLoader *loader; // ivar: _loader
@property (retain, nonatomic) ICQOffer *offer; // ivar: _offer
@property (retain, nonatomic) ICQRemoteContext *remoteContext; // ivar: _remoteContext
@property (retain, nonatomic) NSDate *timeLastPresented; // ivar: _timeLastPresented


+(id)sharedManager;
+(void)commonHeadersForRequest:(id)arg0 withCompletion:(id)arg1 ;
+(void)renewCredentialsWithCompletion:(id)arg0 ;
-(id)init;
-(void)beginRemoteFlow;
-(void)startUpsellWithOffer:(id)arg0 preloadedRemoteUIData:(id)arg1 error:(id)arg2 ;


@end


#endif