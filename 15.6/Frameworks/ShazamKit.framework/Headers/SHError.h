// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHERROR_H
#define SHERROR_H


#import <Foundation/Foundation.h>


@interface SHError : NSObject



+(BOOL)annotateClientError:(*id)arg0 code:(NSInteger)arg1 underlyingError:(id)arg2 ;
+(BOOL)annotateClientError:(*id)arg0 code:(NSInteger)arg1 underlyingError:(id)arg2 keyOverrides:(id)arg3 ;
+(BOOL)annotateClientError:(*id)arg0 withError:(id)arg1 ;
+(BOOL)remapErrorToClientErrorPointer:(*id)arg0 ;
+(id)errorWithCode:(NSInteger)arg0 underlyingError:(id)arg1 ;
+(id)errorWithCode:(NSInteger)arg0 underlyingError:(id)arg1 keyOverrides:(id)arg2 ;
+(id)internalErrorWithCode:(NSInteger)arg0 underlyingError:(id)arg1 ;
+(id)messageForCode:(NSInteger)arg0 ;
+(id)remapErrorToClientError:(id)arg0 ;


@end


#endif