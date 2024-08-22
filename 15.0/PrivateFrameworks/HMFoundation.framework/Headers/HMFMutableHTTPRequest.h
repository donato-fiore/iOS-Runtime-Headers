// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMFMUTABLEHTTPREQUEST_H
#define HMFMUTABLEHTTPREQUEST_H

@class NSData, NSDictionary;


#import "HMFHTTPRequest.h"

@interface HMFMutableHTTPRequest : HMFHTTPRequest

@property (copy, nonatomic) NSData *body;
@property (copy, nonatomic) NSDictionary *headerFields;
@property (nonatomic) CGFloat timeoutInterval;


-(id)initWithInternalRequest:(id)arg0 ;
-(id)initWithURL:(id)arg0 method:(id)arg1 body:(id)arg2 timeoutInterval:(CGFloat)arg3 ;
-(id)responseWithStatusCode:(NSInteger)arg0 ;
-(void)setHeaderValue:(id)arg0 forHeaderKey:(id)arg1 ;


@end


#endif