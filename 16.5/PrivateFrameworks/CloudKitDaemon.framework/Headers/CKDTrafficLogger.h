// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDTRAFFICLOGGER_H
#define CKDTRAFFICLOGGER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CKDTrafficLogger : NSObject

@property (retain, nonatomic) NSString *requestID; // ivar: _requestID
@property (nonatomic) NSInteger sequenceNumber; // ivar: _sequenceNumber


-(BOOL)shouldLog;
-(id)initWithRequestID:(id)arg0 ;
-(void)_logObject:(id)arg0 ofType:(NSUInteger)arg1 ;
-(void)finishRequestLog;
-(void)logPartialRequestObjectData:(id)arg0 ;
-(void)logPartialResponseObjectData:(id)arg0 ;
-(void)logRequest:(id)arg0 toURL:(id)arg1 withMethod:(id)arg2 withMessageClassString:(id)arg3 parsingStandaloneMessage:(BOOL)arg4 ;
-(void)logRequestBodyStreamReset;
-(void)logResponse:(id)arg0 ;
-(void)logResponseConfiguration:(NSUInteger)arg0 withMessageClassString:(id)arg1 ;


@end


#endif