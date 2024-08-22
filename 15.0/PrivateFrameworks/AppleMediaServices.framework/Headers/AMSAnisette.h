// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSANISETTE_H
#define AMSANISETTE_H

@class NSString;
@protocol AMSBagConsumer_Project;

#import <Foundation/Foundation.h>


@interface AMSAnisette : NSObject <AMSBagConsumer_Project>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_shouldRetryAfterError:(id)arg0 ;
+(BOOL)handleResponse:(id)arg0 account:(id)arg1 type:(NSInteger)arg2 bag:(id)arg3 ;
+(NSUInteger)_accountIDForType:(NSInteger)arg0 account:(id)arg1 ;
+(id)_eraseProvisioningForType:(NSInteger)arg0 account:(id)arg1 ;
+(id)_handleActionName:(id)arg0 actionData:(id)arg1 account:(id)arg2 type:(NSInteger)arg3 bag:(id)arg4 ;
+(id)_headersForRequest:(id)arg0 account:(id)arg1 type:(NSInteger)arg2 ;
+(id)_provisionMachineWithActionData:(id)arg0 type:(NSInteger)arg1 account:(id)arg2 bag:(id)arg3 ;
+(id)_syncMachineWithActionData:(id)arg0 type:(NSInteger)arg1 account:(id)arg2 bag:(id)arg3 ;
+(id)bagKeySet;
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;
+(id)handleResponse:(id)arg0 type:(NSInteger)arg1 bag:(id)arg2 account:(id)arg3 ;
+(id)headersForRequest:(id)arg0 account:(id)arg1 type:(NSInteger)arg2 bag:(id)arg3 ;
+(void)_bagDomainExistsForURL:(id)arg0 type:(NSInteger)arg1 bag:(id)arg2 completion:(id)arg3 ;
+(void)addRequiredBagKeysToAggregator:(id)arg0 ;


@end


#endif