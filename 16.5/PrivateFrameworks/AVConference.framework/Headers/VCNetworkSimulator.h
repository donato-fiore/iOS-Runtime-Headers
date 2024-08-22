// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCNETWORKSIMULATOR_H
#define VCNETWORKSIMULATOR_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "VCEmulatedNetwork.h"

@interface VCNetworkSimulator : NSObject {
    NSDictionary *_policies;
    BOOL _isStarted;
    *tagVCRealTimeThread _thread;
    _opaque_pthread_mutex_t _mutex;
    _opaque_pthread_cond_t _packetPushedCondition;
    _opaque_pthread_cond_t _queueEmptyCondition;
    BOOL _isQueueEmpty;
}


@property (readonly, nonatomic) VCEmulatedNetwork *network; // ivar: _network


+(id)sharedInstance;
-(id)createDefaultPolicies;
-(id)init;
-(id)loadPoliciesFromJsonFile;
-(int)processNetwork;
-(int)waitForCondition:(struct _opaque_pthread_cond_t *)arg0 withTimeout:(CGFloat)arg1 conditionPredicate:(*BOOL)arg2 ;
-(void)dealloc;
-(void)setupNetwork;
-(void)start;
-(void)stop;


@end


#endif