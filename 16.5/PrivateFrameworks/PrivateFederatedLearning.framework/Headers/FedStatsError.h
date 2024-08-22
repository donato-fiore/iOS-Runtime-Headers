// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FEDSTATSERROR_H
#define FEDSTATSERROR_H


#import <Foundation/Foundation.h>


@interface FedStatsError : NSObject



+(id)errorWithCode:(NSInteger)arg0 description:(id)arg1 ;
+(id)errorWithCode:(NSInteger)arg0 underlyingError:(id)arg1 description:(id)arg2 ;


@end


#endif