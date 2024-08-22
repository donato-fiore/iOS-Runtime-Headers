// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSPRIVATESEARCHCONNECTION_H
#define CSPRIVATESEARCHCONNECTION_H

@class NSString;


#import "CSSearchConnection.h"

@interface CSPrivateSearchConnection : CSSearchConnection

@property (retain, nonatomic) NSString *token; // ivar: _token


+(id)privateSearchConnectionWithToken:(id)arg0 ;
-(id)createXPCDictionaryForQuery:(id)arg0 queryID:(NSInteger)arg1 queryContext:(id)arg2 needsInitialization:(BOOL)arg3 ;
-(id)initWithToken:(id)arg0 ;
-(void)sendMessageAsync:(id)arg0 completion:(id)arg1 ;


@end


#endif