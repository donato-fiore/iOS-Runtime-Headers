// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STCLOUDACTIVATION_H
#define STCLOUDACTIVATION_H

@class NSData, NSString, NSUUID;
@protocol STReconcilableObject, STSerializableManagedObject;


#import "STUniquedManagedObject.h"

@interface STCloudActivation : STUniquedManagedObject <STReconcilableObject, STSerializableManagedObject>



@property (retain, nonatomic) NSData *activationPlist;
@property (nonatomic) NSInteger activationType;
@property (copy, nonatomic) NSString *ckRecordID;
@property (retain, nonatomic) NSData *ckRecordSystemFields;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSUUID *sortKey;
@property (readonly) Class superclass;


+(BOOL)reconcileWithManagedObjectContext:(id)arg0 andUpdateLosers:(id)arg1 error:(*id)arg2 ;
-(BOOL)updateWithDictionaryRepresentation:(id)arg0 ;
-(id)computeUniqueIdentifier;
-(id)dictionaryRepresentation;
-(void)didChangeValueForKey:(id)arg0 ;


@end


#endif