// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NRDEVICEPREFERENCESQUICKRELAY_H
#define NRDEVICEPREFERENCESQUICKRELAY_H

@class NSUUID;
@protocol OS_dispatch_queue, OS_nw_path, OS_nw_path_evaluator;

#import <Foundation/Foundation.h>


@interface NRDevicePreferencesQuickRelay : NSObject {
    BOOL _needsReassert;
    NSObject<OS_dispatch_queue> *_queue;
    NSUUID *_nrUUID;
    NSUUID *_agentUUID;
    NSObject<OS_nw_path> *_path;
    NSObject<OS_nw_path_evaluator> *_pathEvaluator;
    NSUInteger _assertCount;
}




-(id)initWithNRUUID:(id)arg0 ;
-(void)addQuickRelayRequest;
-(void)dealloc;
-(void)removeAllQuickRelayRequests;
-(void)removeQuickRelayRequest;


@end


#endif