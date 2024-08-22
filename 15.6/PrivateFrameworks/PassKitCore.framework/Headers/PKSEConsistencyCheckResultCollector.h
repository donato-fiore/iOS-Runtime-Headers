// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSECONSISTENCYCHECKRESULTCOLLECTOR_H
#define PKSECONSISTENCYCHECKRESULTCOLLECTOR_H

@class NSMutableArray, NSMutableDictionary, NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface PKSEConsistencyCheckResultCollector : NSObject {
    NSMutableArray *_requestedActions;
    NSMutableDictionary *_resultSummary;
    BOOL _sendCleanupReasons;
}


@property (nonatomic) BOOL addCleanupActionsToResultsSummary; // ivar: _addCleanupActionsToResultsSummary
@property (readonly, nonatomic) NSInteger cleanupActions; // ivar: _cleanupActions
@property (readonly, nonatomic) NSArray *requestedActions;
@property (readonly, nonatomic) NSDictionary *resultsSummary;


-(id)init;
-(void)addCleanupActions:(NSInteger)arg0 ;
-(void)addCleanupActions:(NSInteger)arg0 cleanupReason:(id)arg1 forDeviceCredential:(id)arg2 passCredential:(id)arg3 ;


@end


#endif