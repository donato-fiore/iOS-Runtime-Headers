// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSURLPROTOCOL_H
#define NSURLPROTOCOL_H

@protocol NSURLProtocolClient;

#import <Foundation/Foundation.h>

#import "NSURLProtocolInternal.h"
#import "NSCachedURLResponse.h"
#import "NSURLRequest.h"

@interface NSURLProtocol : NSObject {
    NSURLProtocolInternal *_internal;
}


@property (readonly, copy) NSCachedURLResponse *cachedResponse;
@property (readonly, retain) NSObject<NSURLProtocolClient> *client;
@property (readonly, copy) NSURLRequest *request;


+(BOOL)canInitWithRequest:(id)arg0 ;
+(BOOL)canInitWithTask:(id)arg0 ;
+(BOOL)registerClass:(Class)arg0 ;
+(BOOL)requestIsCacheEquivalent:(id)arg0 toRequest:(id)arg1 ;
+(Class)_protocolClassForRequest:(id)arg0 ;
+(Class)_protocolClassForRequest:(id)arg0 skipAppSSO:(BOOL)arg1 ;
+(id)_makeRequestCanonicalByMakingRequestURLCanonical:(id)arg0 ;
+(id)canonicalRequestForRequest:(id)arg0 ;
+(id)canonicalRequestForRequest:(id)arg0 task:(id)arg1 ;
+(id)propertyForKey:(id)arg0 inRequest:(id)arg1 ;
+(void)removePropertyForKey:(id)arg0 inRequest:(id)arg1 ;
+(void)setProperty:(id)arg0 forKey:(id)arg1 inRequest:(id)arg2 ;
+(void)unregisterClass:(Class)arg0 ;
-(id)init;
-(id)initWithRequest:(id)arg0 cachedResponse:(id)arg1 client:(id)arg2 ;
-(id)initWithTask:(id)arg0 cachedResponse:(id)arg1 client:(id)arg2 ;
-(void)dealloc;
-(void)startLoading;
-(void)stopLoading;


@end


#endif