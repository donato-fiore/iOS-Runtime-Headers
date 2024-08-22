// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASPROVISIONTASK_H
#define ASPROVISIONTASK_H

@class NSDictionary, NSString;


#import "ASTask.h"
#import "ASPolicy.h"

@interface ASProvisionTask : ASTask

@property (nonatomic) BOOL accountOnlyRemoteWipeSuccess; // ivar: _accountOnlyRemoteWipeSuccess
@property (retain, nonatomic) NSDictionary *deviceInfo; // ivar: _deviceInfo
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) ASPolicy *policy; // ivar: _policy
@property (nonatomic) int type; // ivar: _type


-(BOOL)getTopLevelToken:(char *)arg0 outStatusCodePage:(char *)arg1 outStatusToken:(char *)arg2 ;
-(BOOL)processContext:(id)arg0 ;
-(BOOL)requiresEASVersionUpdate;
-(NSInteger)taskStatusForExchangeStatus:(int)arg0 ;
-(id)_initWithType:(int)arg0 policy:(id)arg1 key:(id)arg2 ;
-(id)_initWithType:(int)arg0 policy:(id)arg1 key:(id)arg2 accountOnlyRemoteWipeSuccess:(BOOL)arg3 ;
-(id)_provisioningType;
-(id)initWithAccountOnlyRemoteWipeAcknowledgement:(id)arg0 withKey:(id)arg1 accountOnlyRemoteWipeSuccess:(BOOL)arg2 ;
-(id)initWithOriginalKeyForPolicyRequest:(id)arg0 ;
-(id)initWithPolicyAcknowledgement:(id)arg0 withKey:(id)arg1 ;
-(id)initWithRemoteWipeAcknowledgement:(id)arg0 withKey:(id)arg1 ;
-(id)requestBody;
-(int)commandCode;
-(void)finishWithError:(id)arg0 ;


@end


#endif