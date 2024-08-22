// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPERROR_H
#define SPERROR_H


#import <Foundation/Foundation.h>


@interface SPError : NSObject



+(BOOL)isValidationErrorCode:(NSInteger)arg0 ;
+(id)errorWithCode:(NSInteger)arg0 ;
+(id)errorWithCode:(NSInteger)arg0 additionalDescription:(id)arg1 ;


@end


#endif