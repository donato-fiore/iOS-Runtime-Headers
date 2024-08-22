// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSPERSISTENTSUBSCRIPTION_H
#define VSPERSISTENTSUBSCRIPTION_H

@class NSManagedObject, NSNumber, NSString, NSDate, NSArray;



@interface VSPersistentSubscription : NSManagedObject

@property (copy, nonatomic) NSNumber *accessLevel;
@property (copy, nonatomic) NSString *billingIdentifier;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSString *derivedSubscriptionInfo;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSDate *mostRecentSaveDate;
@property (copy, nonatomic) NSString *providedSubscriptionInfo;
@property (copy, nonatomic) NSString *sourceIdentifier;
@property (copy, nonatomic) NSNumber *sourceKind;
@property (copy, nonatomic) NSString *subscriberIdentifierHash;
@property (copy, nonatomic) NSArray *tierIdentifiers;


+(id)keyPathsForValuesAffectingDerivedSubscriptionInfo;
-(BOOL)_validateNullableValue:(*id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)validateAccessLevel:(*id)arg0 error:(*id)arg1 ;
-(BOOL)validateBillingIdentifier:(*id)arg0 error:(*id)arg1 ;
-(BOOL)validateCreationDate:(*id)arg0 error:(*id)arg1 ;
-(BOOL)validateExpirationDate:(*id)arg0 error:(*id)arg1 ;
-(BOOL)validateModificationDate:(*id)arg0 error:(*id)arg1 ;
-(BOOL)validateSubscriberIdentifierHash:(*id)arg0 error:(*id)arg1 ;
-(BOOL)validateTierIdentifiers:(*id)arg0 error:(*id)arg1 ;
-(void)_deriveValuesFromProvidedInfo:(id)arg0 ;
-(void)_setNullResettableValue:(id)arg0 forKey:(id)arg1 ;
-(void)_updateDerivedSubscriptionInfo;
-(void)awakeFromFetch;
-(void)awakeFromInsert;
-(void)didChangeValueForKey:(id)arg0 ;


@end


#endif