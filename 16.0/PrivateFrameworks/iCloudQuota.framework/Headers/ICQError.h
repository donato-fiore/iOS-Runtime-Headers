// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQERROR_H
#define ICQERROR_H


#import <Foundation/Foundation.h>


@interface ICQError : NSObject



+(id)_errorWithCode:(NSInteger)arg0 retryAfter:(id)arg1 ;
+(id)_formatterForHTTPDate;
+(id)_retryAfterDateFromString:(id)arg0 ;
+(id)_retryAfterDelayFromString:(id)arg0 ;
+(id)retryErrorWithRetryAfter:(id)arg0 ;
+(id)serviceUnavailableWithRetryAfter:(id)arg0 ;


@end


#endif