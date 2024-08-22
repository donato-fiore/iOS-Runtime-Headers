// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSERROR_H
#define MSERROR_H

@class NSError;



@interface MSError : NSError



+(id)MSErrorWithDomain:(id)arg0 code:(NSInteger)arg1 errorLevel:(NSUInteger)arg2 underlyingError:(id)arg3 description:(id)arg4 ;
+(id)MSErrorWithDomain:(id)arg0 code:(NSInteger)arg1 errorLevel:(NSUInteger)arg2 underlyingError:(id)arg3 description:(id)arg4 arguments:(char *)arg5 ;
+(id)MSErrorWithDomain:(id)arg0 code:(NSInteger)arg1 underlyingError:(id)arg2 description:(id)arg3 ;


@end


#endif