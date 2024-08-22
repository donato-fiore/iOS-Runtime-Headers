// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSABOUTURLPROTOCOL_H
#define NSABOUTURLPROTOCOL_H



#import "NSURLProtocol.h"

@interface NSAboutURLProtocol : NSURLProtocol



+(BOOL)canInitWithRequest:(id)arg0 ;
+(id)canonicalRequestForRequest:(id)arg0 ;
-(void)startLoading;
-(void)stopLoading;


@end


#endif