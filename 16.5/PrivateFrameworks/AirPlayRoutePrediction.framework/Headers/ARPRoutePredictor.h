// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARPROUTEPREDICTOR_H
#define ARPROUTEPREDICTOR_H

@class NSString, NSSet, _DKEvent, NSArray;
@protocol _DKKnowledgeQuerying, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ARPRoutePredictor : NSObject

@property (readonly, copy, nonatomic) NSString *file; // ivar: _file
@property BOOL hasLoadedMicroLocation; // ivar: _hasLoadedMicroLocation
@property (readonly, nonatomic) NSObject<_DKKnowledgeQuerying> *knowledgeStore; // ivar: _knowledgeStore
@property (retain) NSSet *knownOutputDeviceIDs; // ivar: _knownOutputDeviceIDs
@property (retain) _DKEvent *latestMicroLocationEvent; // ivar: _latestMicroLocationEvent
@property (copy, nonatomic) id *longFormVideoFilter; // ivar: _longFormVideoFilter
@property (readonly, nonatomic) CGFloat microLocationSimilarityThreshold; // ivar: _microLocationSimilarityThreshold
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property CGFloat routingSessionTimeout; // ivar: _routingSessionTimeout
@property (retain) NSArray *sessions; // ivar: _sessions
@property (readonly, nonatomic) int token; // ivar: _token


+(CGFloat)defaultMicroLocationSimilarityThreshold;
+(id)defaultFile;
+(id)routePredictor;
-(id)description;
-(id)initWithmicroLocationSimilarityThreshold:(CGFloat)arg0 file:(id)arg1 knowledgeStore:(id)arg2 ;
-(id)predictionsForContext:(id)arg0 ;
-(id)predictionsForCurrentContext;
-(id)predictionsWithCurrentContext:(*id)arg0 ;
-(void)_reloadLatestMicroLocationEvent;
-(void)_reloadPersistedSessions;
-(void)dealloc;


@end


#endif