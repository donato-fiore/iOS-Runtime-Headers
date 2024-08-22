// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPHOMESHARINGURLPROTOCOL_H
#define MPHOMESHARINGURLPROTOCOL_H

@class NSURLProtocol;



@interface MPHomeSharingURLProtocol : NSURLProtocol



+(BOOL)canInitWithRequest:(id)arg0 ;
+(id)canonicalRequestForRequest:(id)arg0 ;
+(void)initialize;
-(void)startLoading;
-(void)stopLoading;


@end


#endif