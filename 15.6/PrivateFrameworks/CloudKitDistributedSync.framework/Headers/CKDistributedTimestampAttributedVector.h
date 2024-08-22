// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDISTRIBUTEDTIMESTAMPATTRIBUTEDVECTOR_H
#define CKDISTRIBUTEDTIMESTAMPATTRIBUTEDVECTOR_H

@class NSMutableDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CKDistributedTimestampAttributedVector : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSMutableDictionary *attributeToSparseVector; // ivar: _attributeToSparseVector


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)timestampCount;
-(NSUInteger)timestampCountForSiteIdentifier:(id)arg0 ;
-(id)allSiteIdentifiers;
-(id)clockValuesForSiteIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithStringSiteIdentifiers;
-(id)descriptionWithStringSiteIdentifiers:(BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)vectorFillingInImplicitClockValuesWithAtomState:(unsigned char)arg0 usingSiteIdentifiers:(id)arg1 ;
-(id)vectorFilteredByAtomState:(unsigned char)arg0 ;
-(id)vectorFilteredByAttribute:(unsigned short)arg0 ;
-(id)vectorFilteredByClockType:(unsigned char)arg0 ;
-(id)vectorFilteredByModifier:(id)arg0 ;
-(id)vectorFilteredBySiteIdentifiers:(id)arg0 ;
-(id)vectorWithAttributeReplacementBlock:(id)arg0 ;
-(id)vectorWithoutAttributes;
-(id)winningLWWTimestampForModifier:(id)arg0 winningAttribute:(*unsigned short)arg1 ;
-(void)_maintainInvariants;
-(void)addAllClockValuesFromVector:(id)arg0 ;
-(void)addClockValuesInIndexSet:(id)arg0 withAttribute:(unsigned short)arg1 forSiteIdentifier:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateAllClockValuesUsingBlock:(id)arg0 ;
-(void)enumerateClockValuesForSiteIdentifier:(id)arg0 usingBlock:(id)arg1 ;
-(void)intersectAttributedVector:(id)arg0 ;
-(void)intersectVector:(id)arg0 ;
-(void)minusVector:(id)arg0 ;
-(void)minusVector:(id)arg0 forAttribute:(unsigned short)arg1 ;
-(void)removeClockValuesInIndexSet:(id)arg0 forSiteIdentifier:(id)arg1 ;


@end


#endif