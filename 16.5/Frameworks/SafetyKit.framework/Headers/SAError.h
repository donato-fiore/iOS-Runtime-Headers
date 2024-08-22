// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAERROR_H
#define SAERROR_H


#import <Foundation/Foundation.h>


@interface SAError : NSObject



+(id)errorWithCode:(NSInteger)arg0 ;
+(id)errorWithCode:(NSInteger)arg0 description:(id)arg1 recoverySuggestion:(id)arg2 ;
+(id)errorWithCode:(NSInteger)arg0 description:(id)arg1 recoverySuggestion:(id)arg2 underlyingError:(id)arg3 ;


@end


#endif