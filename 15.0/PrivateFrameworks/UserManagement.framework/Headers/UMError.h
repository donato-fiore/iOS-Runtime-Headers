// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UMERROR_H
#define UMERROR_H


#import <Foundation/Foundation.h>


@interface UMError : NSObject



+(id)errorWithErrorCode:(NSUInteger)arg0 ;
+(id)errorWithErrorCode:(NSUInteger)arg0 underlyingError:(id)arg1 ;
+(id)errorWithErrorCode:(NSUInteger)arg0 userInfo:(id)arg1 ;


@end


#endif