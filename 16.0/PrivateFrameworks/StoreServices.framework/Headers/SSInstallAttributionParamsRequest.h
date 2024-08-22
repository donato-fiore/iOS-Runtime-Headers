// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSINSTALLATTRIBUTIONPARAMSREQUEST_H
#define SSINSTALLATTRIBUTIONPARAMSREQUEST_H

@class NSString, NSNumber;
@protocol SSXPCCoding;


#import "SSRequest.h"

@interface SSInstallAttributionParamsRequest : SSRequest <SSXPCCoding>



@property (readonly, nonatomic) NSString *adNetworkId; // ivar: _adNetworkId
@property (readonly, nonatomic) NSNumber *appAdamId; // ivar: _appAdamId
@property (readonly, nonatomic) NSString *attributionSignature; // ivar: _attributionSignature
@property (readonly, nonatomic) NSNumber *campaignId; // ivar: _campaignId
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *impressionId; // ivar: _impressionId
@property (readonly, nonatomic) NSString *originatingBundleId; // ivar: _originatingBundleId
@property (readonly, nonatomic) BOOL overrideCampaignLimit; // ivar: _overrideCampaignLimit
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSNumber *timestamp; // ivar: _timestamp


-(id)copyXPCEncoding;
-(id)initWithAppAdamId:(id)arg0 adNetworkId:(id)arg1 campaignId:(id)arg2 impressionId:(id)arg3 timestamp:(id)arg4 attributionSignature:(id)arg5 ;
-(id)initWithAppAdamId:(id)arg0 adNetworkId:(id)arg1 campaignId:(id)arg2 impressionId:(id)arg3 timestamp:(id)arg4 attributionSignature:(id)arg5 originatingBundleId:(id)arg6 ;
-(id)initWithAppAdamId:(id)arg0 adNetworkId:(id)arg1 campaignId:(id)arg2 impressionId:(id)arg3 timestamp:(id)arg4 attributionSignature:(id)arg5 originatingBundleId:(id)arg6 overrideCampaignLimit:(BOOL)arg7 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)startWithCompletionBlock:(id)arg0 ;


@end


#endif