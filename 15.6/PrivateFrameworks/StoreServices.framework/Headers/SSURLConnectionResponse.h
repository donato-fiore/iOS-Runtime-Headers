// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSURLCONNECTIONRESPONSE_H
#define SSURLCONNECTIONRESPONSE_H

@class NSString, NSURL, NSHTTPURLResponse, NSData;
@protocol SSXPCCoding;

#import <Foundation/Foundation.h>

#import "SSMetricsPageEvent.h"

@interface SSURLConnectionResponse : NSObject <SSXPCCoding>



@property (readonly, nonatomic) NSString *MIMEType;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSHTTPURLResponse *URLResponse; // ivar: _urlResponse
@property (readonly, nonatomic) NSData *bodyData; // ivar: _bodyData
@property (readonly, nonatomic) NSData *databaseEncoding;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger expectedContentLength;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SSMetricsPageEvent *metricsPageEvent; // ivar: _metricsPageEvent
@property (readonly, nonatomic) BOOL ssv_isExpiredResponse;
@property (readonly, nonatomic) NSString *storeCorrelationID;
@property (readonly, nonatomic) NSString *suggestedFilename;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *textEncodingName;


-(NSInteger)statusCode;
-(id)allHeaderFields;
-(id)copyXPCEncoding;
-(id)initWithDatabaseEncoding:(id)arg0 ;
-(id)initWithURLResponse:(id)arg0 bodyData:(id)arg1 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)dealloc;


@end


#endif