// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCALLBACKCONTEXTREGISTRY_H
#define AVCALLBACKCONTEXTREGISTRY_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AVCallbackContextRegistry : NSObject {
    NSMutableDictionary *_contextsForTokens;
    NSUInteger _currentToken;
    NSObject<OS_dispatch_queue> *_readWriteQueue;
}




+(id)sharedCallbackContextRegistry;
+(void)initialize;
-(*void)registerCallbackContextObject:(id)arg0 ;
-(id)callbackContextForToken:(*void)arg0 ;
-(id)init;
-(void)dealloc;
-(void)unregisterCallbackContextForToken:(*void)arg0 ;


@end


#endif