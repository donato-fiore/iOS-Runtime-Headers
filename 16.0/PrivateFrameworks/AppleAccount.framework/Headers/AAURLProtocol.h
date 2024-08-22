// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAURLPROTOCOL_H
#define AAURLPROTOCOL_H

@class NSURLProtocol;



@interface AAURLProtocol : NSURLProtocol {
    NSUInteger _state;
}




+(BOOL)canInitWithRequest:(id)arg0 ;
+(BOOL)requestIsCacheEquivalent:(id)arg0 toRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg0 ;
-(id)_normalizedRequestForURL:(id)arg0 ;
-(id)initWithRequest:(id)arg0 cachedResponse:(id)arg1 client:(id)arg2 ;
-(void)startLoading;
-(void)stopLoading;


@end


#endif