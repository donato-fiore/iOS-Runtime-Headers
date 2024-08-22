// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKMULTIVALUEMERGEABLEDELTAREGISTER_H
#define CKMULTIVALUEMERGEABLEDELTAREGISTER_H

@class NSArray, NSString, NSData, NSMutableDictionary;
@protocol CKVersionedMergeable;


#import "CKMultiValueRegister.h"
#import "CKMultiValueMergeableDeltaRegisterState.h"

@interface CKMultiValueMergeableDeltaRegister : CKMultiValueRegister <CKVersionedMergeable>



@property (copy, nonatomic) NSArray *contents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) CKMultiValueMergeableDeltaRegisterState *persistedState;
@property (readonly, nonatomic) NSData *salt; // ivar: _salt
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableDictionary *timestampToContents;


+(id)installationIdentifierWithSalt:(id)arg0 ;
-(BOOL)checkElementType:(id)arg0 error:(*id)arg1 ;
-(BOOL)mergeDeltas:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)deltaDeliveryRequirements;
-(NSUInteger)modifierLimitForInstallationIdentifierCheck;
-(id)initWithIdentifier:(id)arg0 vector:(id)arg1 contents:(id)arg2 error:(*id)arg3 ;
-(id)initWithPersistedState:(id)arg0 contents:(id)arg1 error:(*id)arg2 ;
-(id)installationIdentifier;
-(id)mergeableDeltasForMetadata:(id)arg0 error:(*id)arg1 ;
-(id)siteIdentifier;
-(id)stateVector;
-(void)CKDescribePropertiesUsing:(id)arg0 ;


@end


#endif