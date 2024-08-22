// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFERROR_H
#define AFERROR_H


#import <Foundation/Foundation.h>


@interface AFError : NSObject



+(id)errorWithCode:(NSInteger)arg0 ;
+(id)errorWithCode:(NSInteger)arg0 description:(id)arg1 ;
+(id)errorWithCode:(NSInteger)arg0 description:(id)arg1 underlyingError:(id)arg2 ;
+(id)errorWithCode:(NSInteger)arg0 description:(id)arg1 underlyingErrors:(id)arg2 ;
+(id)new;
-(id)init;


@end


#endif