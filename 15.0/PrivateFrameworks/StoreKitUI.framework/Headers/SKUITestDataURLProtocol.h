// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUITESTDATAURLPROTOCOL_H
#define SKUITESTDATAURLPROTOCOL_H

@class NSURLProtocol;



@interface SKUITestDataURLProtocol : NSURLProtocol



+(BOOL)canInitWithRequest:(id)arg0 ;
+(BOOL)requestIsCacheEquivalent:(id)arg0 toRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg0 ;
-(void)startLoading;
-(void)stopLoading;


@end


#endif