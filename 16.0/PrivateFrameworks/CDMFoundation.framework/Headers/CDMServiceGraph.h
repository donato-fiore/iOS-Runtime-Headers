// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDMSERVICEGRAPH_H
#define CDMSERVICEGRAPH_H

@class NSMutableArray, NSMutableDictionary, NSString, NSDictionary, NSLock, NSError;

#import <Foundation/Foundation.h>

#import "CDMServiceGraphNode.h"
#import "CDMDataDispatcher.h"

@interface CDMServiceGraph : NSObject {
    NSMutableArray *_nodes;
    NSMutableDictionary *_nodesWithName;
    NSMutableDictionary *_serviceMap;
    id *_graphOutput;
    id *_graphInput;
    NSString *_language;
    NSDictionary *_startCommand;
    NSString *_handlerId;
    CDMServiceGraphNode *_endNode;
    NSLock *_aneLock;
    CDMDataDispatcher *_dataDispatcher;
    NSMutableDictionary *_skipNodes;
}


@property (retain, nonatomic) NSError *error; // ivar: _error


+(BOOL)shouldSkipNode:(id)arg0 service:(id)arg1 ;
+(int)getCdmRequesterWithConnectionId:(id)arg0 ;
-(BOOL)isAcyclic;
-(Class)supportedGraphInputType;
-(id)addNodeWithName:(id)arg0 aneEnabled:(BOOL)arg1 block:(id)arg2 ;
-(id)addNodeWithName:(id)arg0 bindService:(id)arg1 aneEnabled:(BOOL)arg2 block:(id)arg3 ;
-(id)addNodeWithName:(id)arg0 bindService:(id)arg1 block:(id)arg2 ;
-(id)addNodeWithName:(id)arg0 block:(id)arg1 ;
-(id)getDataDispatcher;
-(id)getEndNode;
-(id)getGraphInput;
-(id)getGraphOutput;
-(id)getHandlerId;
-(id)getLanguage;
-(id)getNodes;
-(id)getNodesWithName;
-(id)getServiceByClass:(Class)arg0 ;
-(id)getSkippedNodes;
-(id)getStartCommand;
-(id)init;
-(id)initWithServices:(id)arg0 graphInput:(id)arg1 languageCode:(id)arg2 startCommand:(id)arg3 handlerId:(id)arg4 aneLock:(id)arg5 ;
-(id)initWithServices:(id)arg0 graphInput:(id)arg1 languageCode:(id)arg2 startCommand:(id)arg3 handlerId:(id)arg4 aneLock:(id)arg5 dataDispatcher:(id)arg6 ;
-(id)removeLRMCharacter:(id)arg0 ;
-(id)toMermaid;
-(id)topoSort;
-(id)validateRequest:(id)arg0 ;
-(void)buildGraph;
-(void)buildGraphInternal;
-(void)failedWithError:(id)arg0 ;
-(void)failedWithErrorCode:(NSInteger)arg0 errorDomain:(id)arg1 message:(id)arg2 ;
-(void)populateRequesterEnumForNluRequest:(id)arg0 ;
-(void)setGraphOutput:(id)arg0 ;
-(void)skipNode:(id)arg0 basedOnNode:(id)arg1 withCondition:(id)arg2 ;


@end


#endif