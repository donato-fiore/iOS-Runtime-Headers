// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHCOREERROR_H
#define SHCOREERROR_H


#import <Foundation/Foundation.h>


@interface SHCoreError : NSObject



+(BOOL)annotateError:(*id)arg0 code:(NSInteger)arg1 underlyingError:(id)arg2 keyOverrides:(id)arg3 ;
+(BOOL)annotateError:(*id)arg0 withError:(id)arg1 ;
+(id)errorWithCode:(NSInteger)arg0 underlyingError:(id)arg1 ;
+(id)errorWithCode:(NSInteger)arg0 underlyingError:(id)arg1 keyOverrides:(id)arg2 ;
+(id)messageForCode:(NSInteger)arg0 ;
+(id)normalizedError:(id)arg0 ;
+(id)normalizedUserInfo:(id)arg0 ;


@end


#endif