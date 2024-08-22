// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SRERROR_H
#define SRERROR_H


#import <Foundation/Foundation.h>


@interface SRError : NSObject



+(id)authorizationError;
+(id)authorizationErrorWithStatus:(NSInteger)arg0 ;
+(id)connectionNotFoundError;
+(id)errorWithCode:(NSInteger)arg0 ;
+(id)errorWithCode:(NSInteger)arg0 description:(id)arg1 recoverySuggestion:(id)arg2 ;
+(id)errorWithCode:(NSInteger)arg0 description:(id)arg1 recoverySuggestion:(id)arg2 underlyingError:(id)arg3 ;
+(id)errorWithCode:(NSInteger)arg0 underlyingError:(id)arg1 ;
+(id)invalidEntitlementError;
+(id)invalidInfoPlistErrorWithMissingKey:(id)arg0 code:(NSInteger)arg1 ;


@end


#endif