// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPERROR_H
#define CPERROR_H


#import <Foundation/Foundation.h>


@interface CPError : NSObject



+(id)errorWithCode:(NSInteger)arg0 ;
+(id)errorWithCode:(NSInteger)arg0 description:(id)arg1 underlyingError:(id)arg2 ;
+(id)internalErrorWithDescription:(id)arg0 ;
+(id)internalErrorWithDescription:(id)arg0 underlyingError:(id)arg1 ;


@end


#endif