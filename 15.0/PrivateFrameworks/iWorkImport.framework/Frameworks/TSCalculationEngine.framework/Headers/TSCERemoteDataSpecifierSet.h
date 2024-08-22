// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCEREMOTEDATASPECIFIERSET_H
#define TSCEREMOTEDATASPECIFIERSET_H

@class NSMutableSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSCERemoteDataSpecifierSet : NSObject <NSCopying>

 {
    unordered_map<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>>> _coldDataByYear;
}


@property (readonly, nonatomic) NSUInteger count;
@property (retain, nonatomic) NSMutableSet *hotData; // ivar: _hotData


+(id)set;
+(id)setWithSpecifier:(id)arg0 ;
+(id)setWithSpecifierArray:(id)arg0 ;
+(id)setWithSpecifiers:(id)arg0 ;
-(BOOL)containsColdSpecifiers;
-(BOOL)containsSpecifier:(id)arg0 ;
-(BOOL)containsSpecifiersFromSet:(id)arg0 ;
-(BOOL)containsSpecifiersWithSymbol:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)p_coldSpecifierCount;
-(id)allSpecifiers;
-(id)allSymbols;
-(id)coldSpecifierArrayForYear:(NSUInteger)arg0 ;
-(id)coldSpecifierSet;
-(id)coldSpecifiers;
-(id)coldSpecifiersForYear:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)hotSpecifierArray;
-(id)hotSpecifierSet;
-(id)hotSpecifiers;
-(id)init;
-(id)initWithSpecifierArray:(id)arg0 ;
-(id)initWithSpecifiers:(id)arg0 ;
-(id)p_description:(BOOL)arg0 ;
-(id)setByIntersectingWithSet:(id)arg0 ;
-(id)setByIntersectingWithSymbolsOfSet:(id)arg0 ;
-(id)setByRemovingSpecifiersFromSet:(id)arg0 ;
-(id)setByRemovingSpecifiersWithSymbols:(id)arg0 ;
-(id)setOfSpecifiersContainedInSet:(id)arg0 ;
-(id)setOfSpecifiersNotContainedInSet:(id)arg0 ;
-(id)setOfSpecifiersPassingTest:(id)arg0 ;
-(id)setOfSpecifiersWithDate:(id)arg0 ;
-(id)setOfSpecifiersWithSymbol:(id)arg0 ;
-(id)shortDescription;
-(id)sortedArrayOfSpecifiers;
-(id)yearsReferenced;
-(void)enumerateSpecifiersWithBlock:(id)arg0 ;
-(void)insertSpecifier:(id)arg0 ;
-(void)insertSpecifiersFromArray:(id)arg0 ;
-(void)insertSpecifiersFromSet:(id)arg0 ;
-(void)p_enumerateYearSetsWithBlock:(id)arg0 ;
-(void)removeAllSpecifiers;
-(void)removeSpecifier:(id)arg0 ;
-(void)removeSpecifiersFromArray:(id)arg0 ;
-(void)removeSpecifiersFromSet:(id)arg0 ;


@end


#endif