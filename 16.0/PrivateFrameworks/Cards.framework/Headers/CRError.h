// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRERROR_H
#define CRERROR_H


#import <Foundation/Foundation.h>


@interface CRError : NSObject



+(id)errorWithCode:(NSInteger)arg0 ;
+(id)errorWithCode:(NSInteger)arg0 description:(id)arg1 ;
+(id)errorWithCode:(NSInteger)arg0 description:(id)arg1 underlyingError:(id)arg2 userInfo:(id)arg3 ;


@end


#endif