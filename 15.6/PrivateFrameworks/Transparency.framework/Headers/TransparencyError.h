// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRANSPARENCYERROR_H
#define TRANSPARENCYERROR_H

@class NSError;



@interface TransparencyError : NSError



+(BOOL)hasUnknownSPKIHashError:(*id)arg0 ;
+(id)errorWithDomain:(id)arg0 code:(NSInteger)arg1 description:(id)arg2 ;
+(id)errorWithDomain:(id)arg0 code:(NSInteger)arg1 errorLevel:(NSUInteger)arg2 underlyingError:(id)arg3 description:(id)arg4 ;
+(id)errorWithDomain:(id)arg0 code:(NSInteger)arg1 errorLevel:(NSUInteger)arg2 underlyingError:(id)arg3 description:(id)arg4 arguments:(char *)arg5 ;
+(id)errorWithDomain:(id)arg0 code:(NSInteger)arg1 underlyingError:(id)arg2 description:(id)arg3 ;
+(id)errorWithError:(id)arg0 underlyingError:(id)arg1 ;


@end


#endif