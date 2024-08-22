// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVASSETCUSTOMURLREQUEST_H
#define AVASSETCUSTOMURLREQUEST_H

@class NSURLSessionTaskMetrics;

#import <Foundation/Foundation.h>


@interface AVAssetCustomURLRequest : NSObject {
    *__CFDictionary _customURLRequest;
    *__CFDictionary _customURLResponse;
}


@property (retain, nonatomic) NSURLSessionTaskMetrics *metrics; // ivar: _metrics
@property (readonly, nonatomic) NSUInteger requestID; // ivar: _requestID


+(id)requestWithRequest:(struct __CFDictionary *)arg0 id:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithRequest:(struct __CFDictionary *)arg0 id:(NSUInteger)arg1 ;
-(struct __CFDictionary *)customURLRequest;
-(struct __CFDictionary *)customURLResponse;
-(void)dealloc;
-(void)setCustomURLRequest:(struct __CFDictionary *)arg0 ;
-(void)setCustomURLResponse:(struct __CFDictionary *)arg0 ;


@end


#endif