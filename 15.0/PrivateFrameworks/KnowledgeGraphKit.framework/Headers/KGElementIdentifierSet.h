// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KGELEMENTIDENTIFIERSET_H
#define KGELEMENTIDENTIFIERSET_H

@class NSArray, NSIndexSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface KGElementIdentifierSet : NSObject <NSCopying>

 {
    Bitmap _bitmap;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSUInteger firstElement;
@property (readonly, copy, nonatomic) NSArray *indexArray;
@property (readonly, copy, nonatomic) NSIndexSet *indexSet;
@property (readonly, nonatomic) BOOL isEmpty;


+(void)drainBitsetPool;
-(*void)bitmap;
-(*void)mutableBitmap;
-(BOOL)containsIdentifier:(NSUInteger)arg0 ;
-(BOOL)containsIdentifierSet:(id)arg0 ;
-(BOOL)intersectsIdentifierSet:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToElementIdentifierSet:(id)arg0 ;
-(BOOL)isSubsetOfIdentifierSet:(id)arg0 ;
-(NSUInteger)elementAtOffset:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)randomElement;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)extractRangeByIndex:(struct _NSRange )arg0 ;
-(id)identifierSetByAddingIdentifier:(NSUInteger)arg0 ;
-(id)identifierSetByFilteringUsingBlock:(id)arg0 ;
-(id)identifierSetByFormingSymmetricDifferenceWithIdentifierSet:(id)arg0 ;
-(id)identifierSetByFormingUnion:(id)arg0 ;
-(id)identifierSetByIntersectingIdentifierSet:(id)arg0 ;
-(id)identifierSetByRemovingIdentifier:(NSUInteger)arg0 ;
-(id)identifierSetBySubtractingIdentifierSet:(id)arg0 ;
-(id)init;
-(id)initWithBitmap:(*void)arg0 ;
-(id)initWithElementIdentifier:(NSUInteger)arg0 ;
-(id)initWithIndexArray:(id)arg0 ;
-(id)initWithIndexCollection:(id)arg0 ;
-(id)initWithIndexSet:(id)arg0 ;
-(id)mutableCopy;
-(id)prefix:(NSUInteger)arg0 ;
-(struct KGElementIdentifierSetIndex )endIndex;
-(struct KGElementIdentifierSetIndex )indexAfterIndex:(struct KGElementIdentifierSetIndex )arg0 ;
-(struct KGElementIdentifierSetIndex )indexWithIterator:(*void)arg0 ;
-(struct KGElementIdentifierSetIndex )startIndex;
-(void)enumerateIdentifiersWithBlock:(id)arg0 ;


@end


#endif