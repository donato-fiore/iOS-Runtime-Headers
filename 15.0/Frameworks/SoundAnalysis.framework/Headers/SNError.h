// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNERROR_H
#define SNERROR_H


#import <Foundation/Foundation.h>


@interface SNError : NSObject



+(id)errorWithCode:(NSInteger)arg0 underlyingError:(id)arg1 message:(id)arg2 ;
+(void)populateClientError:(*id)arg0 withCode:(NSInteger)arg1 underlyingError:(id)arg2 message:(id)arg3 ;


@end


#endif