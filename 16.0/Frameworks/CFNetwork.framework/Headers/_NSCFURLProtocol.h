// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSCFURLPROTOCOL_H
#define _NSCFURLPROTOCOL_H



#import "NSURLProtocol.h"

@interface _NSCFURLProtocol : NSURLProtocol {
    *_CFURLProtocol _prot;
    *NSCFURLProtocolClient _client;
}




+(BOOL)canInitWithRequest:(id)arg0 ;
+(BOOL)canInitWithTask:(id)arg0 ;
+(BOOL)requestIsCacheEquivalent:(id)arg0 toRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg0 ;
+(id)canonicalRequestForRequest:(id)arg0 task:(id)arg1 ;
+(struct InternalProtocolImplementation *)_cf_internalImpl;
-(id)initWithRequest:(id)arg0 cachedResponse:(id)arg1 client:(id)arg2 ;
-(void)dealloc;
-(void)startLoading;
-(void)stopLoading;


@end


#endif