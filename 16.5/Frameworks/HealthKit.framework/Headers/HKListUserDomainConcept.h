// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKLISTUSERDOMAINCONCEPT_H
#define HKLISTUSERDOMAINCONCEPT_H

@class NSString;
@protocol NSSecureCoding;


#import "HKUserDomainConcept.h"

@interface HKListUserDomainConcept : HKUserDomainConcept <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *listName; // ivar: _listName
@property (readonly, nonatomic) NSUInteger listType; // ivar: _listType


+(BOOL)supportsSecureCoding;
+(id)_typeIdentifier;
-(BOOL)shouldForceNanoSyncUponInsertion;
-(BOOL)unitTesting_isIdentical:(id)arg0 ;
-(BOOL)unitTesting_isIdentical:(id)arg0 ignoreModificationTimestamp:(BOOL)arg1 ;
-(id)_dataDescription;
-(id)_deepCopy;
-(id)_mutableCopyOfLinks;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCodingCollection:(id)arg0 linkCollection:(id)arg1 propertyCollection:(id)arg2 ;
-(id)initWithListType:(NSUInteger)arg0 ;
-(id)initWithListType:(NSUInteger)arg0 listName:(id)arg1 ;
-(id)listByAddingUserDomainConcept:(id)arg0 ;
-(id)listByAddingUserDomainConcepts:(id)arg0 ;
-(id)listByExchangingConceptAtIndex:(NSUInteger)arg0 withIndex:(NSUInteger)arg1 ;
-(id)listByInsertingUserDomainConcept:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(id)listByRemovingAllUserDomainConcepts;
-(id)listByRemovingUserDomainConceptAtIndex:(NSUInteger)arg0 ;
-(id)listByReplacingConceptAtIndex:(NSUInteger)arg0 withUserDomainConcept:(id)arg1 ;
-(id)listByUpdatingName:(id)arg0 ;
-(id)semanticIdentifier;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif