// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMCHTTPLOG_H
#define DMCHTTPLOG_H


#import <Foundation/Foundation.h>


@interface DMCHTTPLog : NSObject



+(id)_logDirectoryForIdentifier:(id)arg0 ;
+(void)_writeRequestLogToURL:(id)arg0 request:(id)arg1 response:(id)arg2 responseData:(id)arg3 responseError:(id)arg4 ;
+(void)logHTTPDetailsForIdentifier:(id)arg0 request:(id)arg1 response:(id)arg2 responseData:(id)arg3 responseError:(id)arg4 ;
+(void)logHTTPDetailsForIdentifier:(id)arg0 request:(id)arg1 response:(id)arg2 responseURL:(id)arg3 responseError:(id)arg4 ;


@end


#endif