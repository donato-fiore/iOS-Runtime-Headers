// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHINSIGHTSERROR_H
#define SHINSIGHTSERROR_H


#import <Foundation/Foundation.h>


@interface SHInsightsError : NSObject



+(id)errorWithCode:(NSInteger)arg0 underlyingError:(id)arg1 ;
+(id)errorWithCode:(NSInteger)arg0 underlyingError:(id)arg1 keyOverrides:(id)arg2 ;
+(id)messageForCode:(NSInteger)arg0 ;


@end


#endif