// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICURLRESPONSE_H
#define ICURLRESPONSE_H

@class NSData, NSURL, NSDate, NSURLRequest, NSURLResponse;

#import <Foundation/Foundation.h>

#import "ICURLPerformanceMetrics.h"

@interface ICURLResponse : NSObject {
    NSInteger _parsedBodyResponseType;
    id *_parsedBodyResponse;
}


@property (readonly, nonatomic) NSData *bodyData; // ivar: _bodyData
@property (readonly, nonatomic) NSURL *bodyDataURL; // ivar: _bodyDataURL
@property (readonly, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) ICURLPerformanceMetrics *performanceMetrics; // ivar: _performanceMetrics
@property (readonly, nonatomic) NSInteger statusCode;
@property (readonly, nonatomic) NSURLRequest *urlRequest; // ivar: _urlRequest
@property (readonly, nonatomic) NSURLResponse *urlResponse; // ivar: _urlResponse


-(id)initWithURLResponse:(id)arg0 urlRequest:(id)arg1 bodyData:(id)arg2 performanceMetrics:(id)arg3 ;
-(id)initWithURLResponse:(id)arg0 urlRequest:(id)arg1 bodyDataURL:(id)arg2 performanceMetrics:(id)arg3 ;
-(id)parsedBody;
-(id)parsedBodyArray;
-(id)parsedBodyDictionary;
-(id)parsedBodyText;
-(void)_prepareParsedBodyResponse;


@end


#endif