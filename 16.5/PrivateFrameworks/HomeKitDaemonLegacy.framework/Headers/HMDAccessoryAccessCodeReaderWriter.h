// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORYACCESSCODEREADERWRITER_H
#define HMDACCESSORYACCESSCODEREADERWRITER_H

@class HMFObject, NSString;
@protocol HMFLogging;


#import "HMDAccessCodeManagerContext.h"

@interface HMDAccessoryAccessCodeReaderWriter : HMFObject <HMFLogging>



@property (readonly) HMDAccessCodeManagerContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)hmPrivateErrorCodeForHAPAccessCodeError:(NSInteger)arg0 ;
+(id)_accessCodeControlFromWriteResponses:(id)arg0 forWriteRequest:(id)arg1 ;
+(id)_createListWriteRequestsForCharacteristics:(id)arg0 ;
+(id)_createReadWriteRequestsForAccessCodeIdentifiersByCharacteristic:(id)arg0 ;
+(id)accessCodeFetchResponsesForReadWriteResponses:(id)arg0 ofWriteRequests:(id)arg1 ;
+(id)createConstraintsFromReadResponses:(id)arg0 readRequests:(id)arg1 ;
+(id)createModificationResponsesForWriteResponses:(id)arg0 ofRequestPairs:(id)arg1 ;
+(id)createWriteRequestForAddRequests:(id)arg0 characteristic:(id)arg1 ;
+(id)createWriteRequestForRemoveRequests:(id)arg0 characteristic:(id)arg1 ;
+(id)createWriteRequestForUpdateRequests:(id)arg0 characteristic:(id)arg1 ;
+(id)createWriteRequestsForModificationRequests:(id)arg0 hapAccessories:(id)arg1 ;
+(id)genericModificationResponseForFailedRequest:(id)arg0 ;
+(id)identifiersFromListWriteResponses:(id)arg0 ofWriteRequests:(id)arg1 ;
+(id)logCategory;
+(id)modificationResponseForControlResponse:(id)arg0 operationType:(NSInteger)arg1 accessoryUUID:(id)arg2 ;
-(id)_accessoryAccessCodeFromCredential:(id)arg0 accessory:(id)arg1 doorLock:(id)arg2 ;
-(id)_characteristicsOfType:(id)arg0 fromAccessoriesWithUUIDs:(id)arg1 ;
-(id)_createConstraintsReadRequestsForAccessoriesWithUUIDs:(id)arg0 ;
-(id)_createListWriteRequestsForAccessoriesWithUUIDS:(id)arg0 ;
-(id)_createModificationResponsesForWriteResponses:(id)arg0 ofRequestPairs:(id)arg1 ;
-(id)_createReadWriteRequestsForAccessCodeIdentifiers:(id)arg0 ;
-(id)_createWriteRequestsForModificationRequests:(id)arg0 ;
-(id)_fetchResponseFromCredentials:(id)arg0 accessory:(id)arg1 doorLock:(id)arg2 ;
-(id)_performReadRequests:(id)arg0 withRetries:(BOOL)arg1 ;
-(id)_performWriteRequests:(id)arg0 withRetries:(BOOL)arg1 ;
-(id)_readAccessCodeWithIdentifier:(id)arg0 accessoryUUID:(id)arg1 ;
-(id)_readAccessCodesFromAccessoriesWithUUIDs:(id)arg0 withRetries:(BOOL)arg1 ;
-(id)_readAccessCodesFromAccessoriesWithUUIDs_HAP:(id)arg0 withRetries:(BOOL)arg1 ;
-(id)_readAccessCodesFromAccessoriesWithUUIDs_Matter:(id)arg0 withRetries:(BOOL)arg1 ;
-(id)_readAccessCodesFromAccessory_Matter:(id)arg0 withRetries:(BOOL)arg1 ;
-(id)_readConstraintsFromAccessoriesWithUUIDs:(id)arg0 withRetries:(BOOL)arg1 ;
-(id)_readConstraintsFromAccessoriesWithUUIDs_HAP:(id)arg0 withRetries:(BOOL)arg1 ;
-(id)_readConstraintsFromAccessoriesWithUUIDs_Matter:(id)arg0 withRetries:(BOOL)arg1 ;
-(id)_readConstraintsFromAccessory_Matter:(id)arg0 withRetries:(BOOL)arg1 ;
-(id)initWithContext:(id)arg0 ;
-(id)logIdentifier;
-(id)performAccessCodeModificationRequests:(id)arg0 withRetries:(BOOL)arg1 ;
-(id)performAccessCodeModificationRequests_HAP:(id)arg0 withRetries:(BOOL)arg1 ;
-(id)performAccessCodeModificationRequests_Matter:(id)arg0 withRetries:(BOOL)arg1 ;
-(id)performModificationRequest_Matter:(id)arg0 ;
-(id)readAccessCodeWithIdentifier:(id)arg0 accessoryUUID:(id)arg1 ;
-(id)readAccessCodesFromAccessoriesWithUUIDs:(id)arg0 ;
-(id)readConstraintsFromAccessoriesWithUUIDs:(id)arg0 ;
-(id)removeAccessCodeWithValue_Matter:(id)arg0 fromAccessory:(id)arg1 withUserUUID:(id)arg2 guestName:(id)arg3 ;
-(id)removeAllAccessCodesWithValue:(id)arg0 withUserUUID:(id)arg1 guestName:(id)arg2 ;
-(id)removeAllAccessCodesWithValue_HAP:(id)arg0 withUserUUID:(id)arg1 guestName:(id)arg2 ;
-(id)removeAllAccessCodesWithValue_Matter:(id)arg0 withUserUUID:(id)arg1 guestName:(id)arg2 ;
-(void)_readConstraintsAndAccessCodesFromAccessoriesWithUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)readConstraintsAndAccessCodesFromAccessoriesWithUUIDs:(id)arg0 completion:(id)arg1 ;


@end


#endif