// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXPROACTIVESUGGESTIONCONSUMER_H
#define ATXPROACTIVESUGGESTIONCONSUMER_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>

#import "ATXUICacheManager.h"

@interface ATXProactiveSuggestionConsumer : NSObject {
    unsigned char _consumer;
    ATXUICacheManager *_cacheManager;
    NSXPCConnection *_xpcConnection;
}




-(id)cachedSuggestionsForClientModelType:(NSInteger)arg0 ;
-(id)init;
-(id)initWithConsumerSubType:(unsigned char)arg0 ;
-(id)layoutForRequest:(id)arg0 ;
-(id)remoteSyncBlendingLayerServer;
-(id)suggestionLayoutFromCache;
-(id)suggestionsForRequest:(id)arg0 limit:(id)arg1 ;
-(void)setupRemoteClientXPCConnection;


@end


#endif