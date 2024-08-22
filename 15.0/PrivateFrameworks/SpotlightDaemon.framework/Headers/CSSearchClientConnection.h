// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSSEARCHCLIENTCONNECTION_H
#define CSSEARCHCLIENTCONNECTION_H

@class NSMutableOrderedSet, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "SDConnectionConfiguration.h"

@interface CSSearchClientConnection : NSObject {
    uint8_t _outBatchCount;
}


@property (retain, nonatomic) SDConnectionConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) unsigned int outBatchCount;
@property (retain, nonatomic) NSMutableOrderedSet *pausedTasks; // ivar: _pausedTasks
@property (retain, nonatomic) NSMutableDictionary *queryTasks; // ivar: _queryTasks


-(BOOL)searchInternal;
-(id)allowedBundleIDs;
-(id)bundleID;
-(id)initWithConnection:(id)arg0 ;
-(id)initWithConnectionConfiguration:(id)arg0 ;
-(id)protectionClass;
-(id)queryTask:(NSInteger)arg0 ;
-(void)_didReceiveResultsBatchCompletion;
-(void)_willSendResultsBatch:(id)arg0 qid:(NSInteger)arg1 ;
-(void)cancelQueryTask:(NSInteger)arg0 ;
-(void)cancelQueryTasks;
-(void)dealloc;
-(void)overrideMailHitCounts:(id)arg0 ;
-(void)setQueryTask:(id)arg0 forQueryID:(NSInteger)arg1 ;


@end


#endif