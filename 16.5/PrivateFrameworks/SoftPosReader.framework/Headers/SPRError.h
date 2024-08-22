// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPRERROR_H
#define SPRERROR_H


#import <Foundation/Foundation.h>


@interface SPRError : NSObject



+(id)errorWithCode:(NSInteger)arg0 ;
+(id)errorWithCode:(NSInteger)arg0 reason:(id)arg1 ;
+(id)errorWithCode:(NSInteger)arg0 reason:(id)arg1 underlyingError:(id)arg2 ;
+(id)failureForCode:(NSInteger)arg0 ;


@end


#endif