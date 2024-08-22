// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATINTERNALERROR_H
#define ATINTERNALERROR_H


#import <Foundation/Foundation.h>


@interface ATInternalError : NSObject



+(id)errorWithCode:(NSUInteger)arg0 format:(id)arg1 ;
+(id)errorWithCode:(NSUInteger)arg0 underlyingError:(id)arg1 ;
+(id)errorWithPosixError:(int)arg0 format:(id)arg1 ;


@end


#endif