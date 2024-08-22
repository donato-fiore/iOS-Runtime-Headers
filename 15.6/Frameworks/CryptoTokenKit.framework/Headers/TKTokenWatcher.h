// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TKTOKENWATCHER_H
#define TKTOKENWATCHER_H

@class NSXPCConnection, NSMutableDictionary, NSXPCListenerEndpoint, NSArray;
@protocol TKProtocolTokenWatcherHost;

#import <Foundation/Foundation.h>

#import "TKClientToken.h"

@interface TKTokenWatcher : NSObject <TKProtocolTokenWatcherHost>

 {
    int _notifyToken;
    NSXPCConnection *_connection;
    NSMutableDictionary *_tokenInfos;
    NSMutableDictionary *_removalHandlers;
    id *_insertionHandler;
}


@property (readonly, nonatomic) TKClientToken *client; // ivar: _client
@property (readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) NSArray *tokenIDs;


-(id)init;
-(id)initWithClient:(id)arg0 ;
-(id)initWithEndpoint:(id)arg0 ;
-(id)initWithInsertionHandler:(id)arg0 ;
-(id)tokenInfoForTokenID:(id)arg0 ;
// -(void)addRemovalHandler:(id)arg0 forTokenID:(unk)arg1  ;
-(void)dealloc;
-(void)insertedToken:(id)arg0 ;
-(void)removedToken:(id)arg0 ;
-(void)setInsertionHandler:(id)arg0 ;
-(void)startWatching;


@end


#endif