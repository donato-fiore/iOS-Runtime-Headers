// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSURLBAG_H
#define SSURLBAG_H

@class NSDictionary, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSXPCConnection.h"
#import "SSURLBagContext.h"

@interface SSURLBag : NSObject {
    SSXPCConnection *_connection;
    SSURLBagContext *_context;
    NSDictionary *_dictionary;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CGFloat _expirationTime;
    BOOL _ignoreCacheForNextLookup;
    NSMutableArray *_pendingLookups;
}


@property (readonly) SSURLBagContext *URLBagContext;
@property (readonly) NSDictionary *existingBagDictionary;
@property (readonly) NSString *storeFrontIdentifier; // ivar: _storeFrontIdentifier


+(id)URLBagForContext:(id)arg0 ;
+(void)setURLBag:(id)arg0 forContext:(id)arg1 ;
-(id)_connection;
-(id)init;
-(id)initWithURLBagContext:(id)arg0 ;
-(id)valueForKey:(id)arg0 error:(*id)arg1 ;
-(void)_drainPendingLookupsWithError:(id)arg0 ;
-(void)_loadURLBag;
-(void)_loadWithCompletionBlock:(id)arg0 ;
-(void)dealloc;
-(void)dispatchAsync:(id)arg0 ;
-(void)dispatchSync:(id)arg0 ;
-(void)getTrustForURL:(id)arg0 completionBlock:(id)arg1 ;
-(void)invalidate;
-(void)loadValueForKey:(id)arg0 completionBlock:(id)arg1 ;
-(void)loadWithCompletionBlock:(id)arg0 ;


@end


#endif