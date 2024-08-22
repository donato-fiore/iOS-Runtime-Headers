// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKMERGEABLERECORDVALUE_H
#define CKMERGEABLERECORDVALUE_H

@class NSString, NSSet, CKDistributedTimestampStateVector, NSArray, CKMergeableValueID;
@protocol CKRecordValue, CKPropertiesDescription, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CKMultiValueMergeableDeltaRegister.h"
#import "CKMultiValueMergeableDeltaRegisterState.h"

@interface CKMergeableRecordValue : NSObject <CKRecordValue, CKPropertiesDescription, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSSet *deltasToSave; // ivar: _deltasToSave
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL encryptMetadata;
@property (nonatomic) NSInteger encryptMetadataTernary; // ivar: _encryptMetadataTernary
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL inlineReplacementEnabled; // ivar: _inlineReplacementEnabled
@property (nonatomic) BOOL isValueIDKnownToServer; // ivar: _isValueIDKnownToServer
@property (copy, nonatomic) CKDistributedTimestampStateVector *lastKnownServerTimestampVector; // ivar: _lastKnownServerTimestampVector
@property (readonly, nonatomic) CKMultiValueMergeableDeltaRegister *multiValueRegister;
@property (retain, nonatomic) CKMultiValueMergeableDeltaRegisterState *multiValueRegisterState; // ivar: _multiValueRegisterState
@property (copy, nonatomic) NSArray *pendingReplacementRequests; // ivar: _pendingReplacementRequests
@property (nonatomic) BOOL regressedMergeableStateVectorShouldReturnError; // ivar: _regressedMergeableStateVectorShouldReturnError
@property (copy, nonatomic) NSSet *savedDeltaMetadatas; // ivar: _savedDeltaMetadatas
@property (copy, nonatomic) NSSet *serverDeltaMetadatas; // ivar: _serverDeltaMetadatas
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSSet *unmergedDeltas; // ivar: _unmergedDeltas
@property (copy, nonatomic) CKMergeableValueID *valueID; // ivar: _valueID


+(BOOL)supportsSecureCoding;
-(BOOL)addDeltasToSaveFromMergeable:(id)arg0 container:(id)arg1 error:(*id)arg2 ;
-(BOOL)addDeltasToSaveFromMergeable:(id)arg0 error:(*id)arg1 ;
-(BOOL)hasAssetBackedDeltas;
-(BOOL)mergeIntoMergeable:(id)arg0 error:(*id)arg1 ;
-(BOOL)mergeRecordValue:(id)arg0 error:(*id)arg1 ;
-(id)deliverableDeltasWithCurrentStateVector:(id)arg0 usingDeliveryRequirements:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithValueID:(id)arg0 ;
-(id)redactedDescription;
-(void)CKDescribePropertiesUsing:(id)arg0 ;
-(void)addServerDeltaMetadatas:(id)arg0 ;
-(void)addUnmergedDeltas:(id)arg0 ;
-(void)didMergeDeltas:(id)arg0 ;
-(void)didSaveDeltas:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeLastKnownServerTimestampVector:(id)arg0 ;
-(void)mergeLastKnownServerTimestampVectorFromDeltas:(id)arg0 ;
-(void)sanityCheckDeltas:(id)arg0 ;


@end


#endif