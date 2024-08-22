// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSVSAPSIGNATUREDATASOURCE_H
#define SSVSAPSIGNATUREDATASOURCE_H

@class NSData, NSURLRequest, NSHTTPURLResponse, NSString;

#import <Foundation/Foundation.h>

#import "SSURLRequestProperties.h"

@interface SSVSAPSignatureDataSource : NSObject {
    NSData *_bodyData;
    NSURLRequest *_request;
    SSURLRequestProperties *_requestProperties;
    NSHTTPURLResponse *_response;
}


@property (readonly, nonatomic) NSData *HTTPBody;
@property (readonly, nonatomic) NSString *HTTPMethod;


-(id)initWithURLRequest:(id)arg0 ;
-(id)initWithURLRequestProperties:(id)arg0 ;
-(id)initWithURLResponse:(id)arg0 bodyData:(id)arg1 ;
-(id)valueForHTTPHeader:(id)arg0 ;
-(id)valueForQueryParameter:(id)arg0 ;


@end


#endif