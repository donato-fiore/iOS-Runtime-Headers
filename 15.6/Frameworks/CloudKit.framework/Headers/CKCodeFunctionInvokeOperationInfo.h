// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCODEFUNCTIONINVOKEOPERATIONINFO_H
#define CKCODEFUNCTIONINVOKEOPERATIONINFO_H

@class NSURL, NSString, NSData, NSArray;
@protocol NSSecureCoding;


#import "CKDatabaseOperationInfo.h"

@interface CKCodeFunctionInvokeOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>



@property (copy, nonatomic) NSURL *clientRuntimeProvidedServiceURL; // ivar: _clientRuntimeProvidedServiceURL
@property (nonatomic) NSUInteger dataProtectionType; // ivar: _dataProtectionType
@property (nonatomic) BOOL enqueuedOnContainerService; // ivar: _enqueuedOnContainerService
@property (copy, nonatomic) NSString *functionName; // ivar: _functionName
@property (nonatomic) BOOL legacyIsLocalBit; // ivar: _legacyIsLocalBit
@property (copy, nonatomic) NSData *permittedRemoteMeasurement; // ivar: _permittedRemoteMeasurement
@property (copy, nonatomic) NSArray *requestLocalEnvelopes; // ivar: _requestLocalEnvelopes
@property (copy, nonatomic) NSArray *requestLocalSerializations; // ivar: _requestLocalSerializations
@property (copy, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (nonatomic) BOOL shouldFetchAssetContentInMemory; // ivar: _shouldFetchAssetContentInMemory
@property (nonatomic) BOOL shouldSendRecordPCSKeys; // ivar: _shouldSendRecordPCSKeys
@property (copy, nonatomic) NSString *trustedTargetDomain; // ivar: _trustedTargetDomain
@property (copy, nonatomic) NSString *trustedTargetOID; // ivar: _trustedTargetOID


+(BOOL)supportsSecureCoding;
+(void)applyDefaultParametersToServiceURLComponents:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif