// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LKERROR_H
#define LKERROR_H


#import <Foundation/Foundation.h>


@interface LKError : NSObject



+(id)errorWithCode:(NSUInteger)arg0 ;
+(id)errorWithCode:(NSUInteger)arg0 userInfo:(id)arg1 ;


@end


#endif