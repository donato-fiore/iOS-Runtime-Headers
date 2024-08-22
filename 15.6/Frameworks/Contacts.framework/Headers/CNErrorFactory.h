// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNERRORFACTORY_H
#define CNERRORFACTORY_H


#import <Foundation/Foundation.h>


@interface CNErrorFactory : NSObject



+(NSInteger)CNErrorCodeForABError:(struct __CFError *)arg0 ;
+(id)_localizedDescriptionForCode:(NSInteger)arg0 ;
+(id)_localizedReasonForCode:(NSInteger)arg0 ;
+(id)errorByAddingUserInfoEntries:(id)arg0 toError:(id)arg1 ;
+(id)errorByPrependingKeyPath:(id)arg0 toKeyPathsInError:(id)arg1 ;
+(id)errorForiOSABError:(struct __CFError *)arg0 ;
+(id)errorObject:(id)arg0 doesNotImplementSelector:(SEL)arg1 ;
+(id)errorWithCode:(NSInteger)arg0 ;
+(id)errorWithCode:(NSInteger)arg0 userInfo:(id)arg1 ;
+(id)genericiOSABError;
+(id)os_log;
+(id)validationErrorByAggregatingValidationErrors:(id)arg0 ;


@end


#endif