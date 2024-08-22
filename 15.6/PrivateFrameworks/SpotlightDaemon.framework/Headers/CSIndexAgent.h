// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSINDEXAGENT_H
#define CSINDEXAGENT_H

@class CSXPCConnection, NSMutableDictionary;
@protocol MDIndexer;



@interface CSIndexAgent : CSXPCConnection

@property (retain, nonatomic) NSMutableDictionary *indexConnections; // ivar: _indexConnections
@property (retain, nonatomic) NSObject<MDIndexer> *indexer; // ivar: _indexer


+(id)indexAgent;
+(id)indexAgent:(BOOL)arg0 serviceName:(id)arg1 ;
+(id)indexDelegateAgent:(id)arg0 ;
-(BOOL)addClientConnectionIfAllowedForConfiguration:(id)arg0 ;
-(BOOL)addClientConnectionIfAllowedForConnection:(id)arg0 ;
-(BOOL)handleCommand:(char *)arg0 info:(id)arg1 connection:(id)arg2 ;
-(BOOL)lostClientConnection:(id)arg0 error:(id)arg1 ;
-(id)indexConnection:(id)arg0 ;


@end


#endif