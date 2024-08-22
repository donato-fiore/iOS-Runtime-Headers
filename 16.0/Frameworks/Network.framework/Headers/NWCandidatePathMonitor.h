// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCANDIDATEPATHMONITOR_H
#define NWCANDIDATEPATHMONITOR_H

@class NSMutableDictionary, NSArray;
@protocol OS_nw_path_evaluator, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NWParameters.h"

@interface NWCandidatePathMonitor : NSObject {
    os_unfair_lock_s lock;
}


@property (retain, nonatomic) NSMutableDictionary *candidatePathEvaluators; // ivar: _candidatePathEvaluators
@property (readonly, nonatomic) NSArray *candidatePaths;
@property (readonly, nonatomic) NSArray *interfaces;
@property (readonly, nonatomic) NWParameters *parameters;
@property (retain, nonatomic) NSObject<OS_nw_path_evaluator> *primaryEvaluator; // ivar: _primaryEvaluator
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSArray *remoteEndpoints; // ivar: _remoteEndpoints
@property (copy, nonatomic) id *updateHandler; // ivar: _updateHandler


-(id)cParameters;
-(id)init;
-(id)initWithParameters:(id)arg0 ;
-(void)cancelCandidatePathEvaluators;
-(void)cancelWithHandler:(id)arg0 ;
-(void)dealloc;
-(void)startWithQueue:(id)arg0 updateHandler:(id)arg1 ;
-(void)updateRemoteEndpoints:(id)arg0 ;


@end


#endif