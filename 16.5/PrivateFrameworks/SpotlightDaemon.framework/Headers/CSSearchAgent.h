// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSSEARCHAGENT_H
#define CSSEARCHAGENT_H

@class CSXPCConnection, NSMutableDictionary;
@protocol MDIndexer;



@interface CSSearchAgent : CSXPCConnection

@property (retain, nonatomic) NSObject<MDIndexer> *indexer; // ivar: _indexer
@property (retain, nonatomic) NSMutableDictionary *searchConnections; // ivar: _searchConnections


+(id)searchAgent;
+(id)searchAgent:(BOOL)arg0 serviceName:(id)arg1 ;
-(BOOL)addClientConnectionIfAllowedForConfiguration:(id)arg0 ;
-(BOOL)addClientConnectionIfAllowedForConnection:(id)arg0 ;
-(BOOL)handleCommand:(char *)arg0 info:(id)arg1 connection:(id)arg2 ;
-(BOOL)lostClientConnection:(id)arg0 error:(id)arg1 ;
-(id)searchConnection:(id)arg0 ;
-(void)_prepareQueryContext:(id)arg0 searchConnection:(id)arg1 ;
-(void)cancelQuery:(id)arg0 ;
-(void)cancelSimpleQuery:(id)arg0 ;
-(void)handleEngagement:(id)arg0 forConnection:(id)arg1 ;
-(void)preheat:(id)arg0 ;
-(void)startQuery:(id)arg0 ;
-(void)startSimpleQuery:(id)arg0 ;


@end


#endif