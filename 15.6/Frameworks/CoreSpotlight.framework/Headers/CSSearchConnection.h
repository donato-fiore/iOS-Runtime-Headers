// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSSEARCHCONNECTION_H
#define CSSEARCHCONNECTION_H

@class NSMutableDictionary;


#import "CSXPCConnection.h"

@interface CSSearchConnection : CSXPCConnection

@property (readonly, nonatomic) BOOL previouslyInitialized; // ivar: _previouslyInitialized
@property (retain, nonatomic) NSMutableDictionary *queries; // ivar: _queries


+(id)sharedCSUserFSConnection;
+(id)sharedSearchConnection;
-(id)createXPCDictionaryForQuery:(id)arg0 queryID:(NSInteger)arg1 queryContext:(id)arg2 needsInitialization:(BOOL)arg3 ;
-(id)init;
-(id)initWithMachServiceName:(id)arg0 ;
-(id)queryForID:(id)arg0 ;
-(id)removeQueryForID:(id)arg0 ;
-(void)cancelQuery:(NSUInteger)arg0 ;
-(void)handleError:(id)arg0 ;
-(void)handleReply:(id)arg0 ;
-(void)preheat:(id)arg0 ;
-(void)sendMessageAsync:(id)arg0 completion:(id)arg1 ;
-(void)setQuery:(id)arg0 forID:(id)arg1 ;
-(void)startQuery:(id)arg0 context:(id)arg1 ;


@end


#endif