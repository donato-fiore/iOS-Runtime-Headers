// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKUSERDOMAINCONCEPT_H
#define HKUSERDOMAINCONCEPT_H

@class NSUUID, NSString, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKMedicalCodingCollection.h"
#import "HKUserDomainConceptTypeIdentifier.h"
#import "HKUserDomainConceptLinkCollection.h"
#import "HKUserDomainConceptPropertyCollection.h"
#import "HKUserDomainConceptSemanticIdentifier.h"

@interface HKUserDomainConcept : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy, nonatomic) NSString *build; // ivar: _build
@property (readonly, copy, nonatomic) HKMedicalCodingCollection *codingCollection; // ivar: _codingCollection
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) CGFloat creationTimestamp; // ivar: _creationTimestamp
@property (readonly, nonatomic, getter=isDeleted) BOOL deleted; // ivar: _deleted
@property (readonly, copy, nonatomic) HKUserDomainConceptTypeIdentifier *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) HKUserDomainConceptLinkCollection *linkCollection; // ivar: _linkCollection
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) CGFloat modificationTimestamp; // ivar: _modificationTimestamp
@property (readonly, nonatomic) ? operatingSystemVersion; // ivar: _operatingSystemVersion
@property (readonly, copy, nonatomic) HKUserDomainConceptPropertyCollection *propertyCollection; // ivar: _propertyCollection
@property (readonly, copy, nonatomic) HKUserDomainConceptSemanticIdentifier *semanticIdentifier;
@property (readonly, nonatomic) BOOL shouldForceNanoSyncUponInsertion;


+(BOOL)supportsSecureCoding;
+(id)_typeIdentifier;
+(id)deletedUserDomainConceptWithUUID:(id)arg0 creationTimestamp:(CGFloat)arg1 ;
-(BOOL)isAdHocUserDomainConcept;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSemanticallyEquivalent:(id)arg0 ;
-(BOOL)unitTesting_isIdentical:(id)arg0 ;
-(BOOL)unitTesting_isIdentical:(id)arg0 ignoreModificationTimestamp:(BOOL)arg1 ;
-(NSUInteger)hash;
-(id)_dataDescription;
-(id)_deepCopy;
-(id)_firstCodingForSystem:(id)arg0 ;
-(id)_init;
-(id)_initBareObject;
-(id)copyUserDomainConceptByMergingInPropertyCollection:(id)arg0 ;
-(id)copyUserDomainConceptBySettingProperties:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deletedUserDomainConcept;
-(id)description;
-(id)firstAdhocCoding;
-(id)firstConceptIdentifier;
-(id)firstOntologyCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCodingCollection:(id)arg0 linkCollection:(id)arg1 propertyCollection:(id)arg2 ;
-(id)modificationCopy;
-(id)unitTesting_duplicate;
-(id)userDomainConceptByAddingCodings:(id)arg0 ;
-(id)userDomainConceptByReplacingCodings:(id)arg0 ;
-(id)userDomainConceptByReplacingLinks:(id)arg0 ;
-(id)userDomainConceptByReplacingLinks:(id)arg0 andCodings:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif