// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSCFWIKIPEDIAPROTOCOL_H
#define _NSCFWIKIPEDIAPROTOCOL_H



#import "NSURLProtocol.h"

@interface _NSCFWikipediaProtocol : NSURLProtocol {
    *void _instance;
    *CFURLProtocolInstanceCallbacks _callbacks;
}




+(BOOL)canInitWithRequest:(id)arg0 ;
+(BOOL)requestIsCacheEquivalent:(id)arg0 toRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg0 ;
-(id)initWithRequest:(id)arg0 cachedResponse:(id)arg1 client:(id)arg2 ;
-(void)dealloc;
-(void)startLoading;
-(void)stopLoading;


@end


#endif