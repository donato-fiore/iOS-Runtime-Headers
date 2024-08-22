// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCWIFIASSISTMANAGER_H
#define VCWIFIASSISTMANAGER_H

@class NSMutableSet, NWNetworkOfInterestManager, NWNetworkOfInterest;
@protocol NWNetworkOfInterestManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VCDispatchTimer.h"

@interface VCWifiAssistManager : NSObject <NWNetworkOfInterestManagerDelegate>

 {
    BOOL _userPrefered;
    BOOL _inBudget;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableSet *_delegates;
    VCDispatchTimer *_refreshTimer;
    NWNetworkOfInterestManager *_manager;
    NWNetworkOfInterest *_wifiNOI;
    BOOL _respectBudgetStatusEnabled;
}


@property (readonly) BOOL isAvailable;
@property (readonly) unsigned char wifiAssistState;


+(id)sharedInstance;
-(id)description;
-(id)init;
-(void)addDelegate:(id)arg0 ;
-(void)dealloc;
-(void)didStartTrackingNOI:(id)arg0 ;
-(void)didStopTrackingNOI:(id)arg0 ;
-(void)queryBudget;
-(void)queryUserPreference;
-(void)refreshBudget;
-(void)removeDelegate:(id)arg0 ;


@end


#endif