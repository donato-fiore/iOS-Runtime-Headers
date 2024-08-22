// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDISTRIBUTEDTIMESTAMPCLOCKVECTOR_H
#define CKDISTRIBUTEDTIMESTAMPCLOCKVECTOR_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CKDistributedTimestampAttributedVector.h"

@interface CKDistributedTimestampClockVector : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) CKDistributedTimestampAttributedVector *backingVector; // ivar: _backingVector


+(BOOL)supportsSecureCoding;
-(BOOL)hasTimestampsNotInVector:(id)arg0 ;
-(BOOL)includesTimestamp:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isGreaterThanOrEqualToVector:(id)arg0 ;
-(NSInteger)compareToVector:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)timestampCount;
-(NSUInteger)timestampCountForSiteIdentifier:(id)arg0 ;
-(id)allModifiers;
-(id)allSiteIdentifiers;
-(id)clockTypesForAllModifiers;
-(id)clockValuesForSiteIdentifier:(id)arg0 ;
-(id)clockVector;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)descriptionWithStringSiteIdentifiers:(BOOL)arg0 usingSuperscripts:(BOOL)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)vectorFillingInImplicitClockValuesUsingSiteIdentifiers:(id)arg0 ;
-(id)vectorFilteredByClockType:(unsigned char)arg0 ;
-(id)vectorFilteredByModifier:(id)arg0 ;
-(id)vectorFilteredBySiteIdentifiers:(id)arg0 ;
-(unsigned char)clockTypeForModifier:(id)arg0 ;
-(unsigned char)clockTypeForTimestamp:(id)arg0 ;
-(unsigned char)vectorExpansionState;
-(void)_checkInvariantsAgainstClockValues:(id)arg0 withSiteIdentifier:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)_checkInvariantsAgainstVector:(id)arg0 ;
-(void)_maintainInvariants;
-(void)addClockValuesInIndexSet:(id)arg0 forSiteIdentifier:(id)arg1 ;
-(void)addClockValuesInIndexSet:(id)arg0 withClockType:(unsigned char)arg1 forSiteIdentifier:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateAllClockValuesUsingBlock:(id)arg0 ;
-(void)enumerateClockValuesForSiteIdentifier:(id)arg0 usingBlock:(id)arg1 ;
-(void)intersectVector:(id)arg0 ;
-(void)minusVector:(id)arg0 ;
-(void)removeClockValuesInIndexSet:(id)arg0 forSiteIdentifier:(id)arg1 ;
-(void)unionVector:(id)arg0 ;


@end


#endif