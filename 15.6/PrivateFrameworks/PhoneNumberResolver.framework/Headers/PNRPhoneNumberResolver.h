// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PNRPHONENUMBERRESOLVER_H
#define PNRPHONENUMBERRESOLVER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PNRPhoneNumberResolver : NSObject {
    NSObject<OS_dispatch_queue> *_resolveQueue;
}




-(id)_notAPhoneNumberError;
-(id)_notFullyQualifiedError;
-(id)init;
-(id)resolvePhoneNumber:(id)arg0 countryCode:(id)arg1 error:(*id)arg2 ;
-(void)_recordUsageAnalyticForCountryCode:(id)arg0 success:(BOOL)arg1 ;
-(void)resolveFullyQualifiedPhoneNumber:(id)arg0 inCountry:(id)arg1 logId:(id)arg2 resultBlock:(id)arg3 ;
// -(void)resolvePhoneNumbers:(id)arg0 handler:(id)arg1 queue:(unk)arg2  ;
-(void)resolvePhoneNumbers:(id)arg0 queue:(id)arg1 handler:(id)arg2 ;


@end


#endif