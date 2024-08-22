// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXPROACTIVESUGGESTIONCLIENT_H
#define ATXPROACTIVESUGGESTIONCLIENT_H

@class ATXUICacheManager, NSXPCConnection, NSString;
@protocol ATXProactiveSuggestionClientProtocol;

#import <Foundation/Foundation.h>


@interface ATXProactiveSuggestionClient : NSObject <ATXProactiveSuggestionClientProtocol>

 {
    unsigned char _consumer;
    ATXUICacheManager *_cacheManager;
    NSXPCConnection *_xpcConnection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithConsumerSubType:(unsigned char)arg0 ;
-(id)layoutForRequest:(id)arg0 ;
-(id)remoteSyncBlendingLayerServer;
-(id)suggestionLayoutFromCache;
-(void)setupRemoteClientXPCConnection;


@end


#endif