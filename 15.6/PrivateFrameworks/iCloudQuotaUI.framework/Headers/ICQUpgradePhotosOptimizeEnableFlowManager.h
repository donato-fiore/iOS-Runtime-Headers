// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICQUPGRADEPHOTOSOPTIMIZEENABLEFLOWMANAGER_H
#define ICQUPGRADEPHOTOSOPTIMIZEENABLEFLOWMANAGER_H



#import "ICQUpgradeFlowManager.h"

@interface ICQUpgradePhotosOptimizeEnableFlowManager : ICQUpgradeFlowManager



-(BOOL)_shouldPresentRemoteFlow;
-(BOOL)needsNetwork;
-(id)initSubclassWithOffer:(id)arg0 ;
-(void)_performPageButtonActionWithParameters:(id)arg0 completion:(id)arg1 ;


@end


#endif