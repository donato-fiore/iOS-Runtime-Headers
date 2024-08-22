// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMFHTTPREQUEST_H
#define HMFHTTPREQUEST_H

@class NSURL, NSData, NSDictionary, NSString, NSURLRequest;


#import "HMFObject.h"
#import "HMFHTTPRequestInternal.h"

@interface HMFHTTPRequest : HMFObject

@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSData *body;
@property (readonly, nonatomic) NSDictionary *headerFields;
@property (readonly, nonatomic) HMFHTTPRequestInternal *internal; // ivar: _internal
@property (readonly, copy, nonatomic) NSString *method;
@property (nonatomic) CGFloat timeoutInterval; // ivar: _timeoutInterval
@property (readonly, copy, nonatomic) NSURLRequest *urlRequest;


-(id)attributeDescriptions;
-(id)init;
-(id)initWithInternalRequest:(id)arg0 ;
-(id)responseWithStatusCode:(NSInteger)arg0 ;


@end


#endif