// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSSPECIFIERUPDATES_H
#define PSSPECIFIERUPDATES_H

@class NSMutableArray, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PSSpecifierGroupIndex.h"
#import "PSSpecifierUpdateContext.h"

@interface PSSpecifierUpdates : NSObject <NSCopying>

 {
    NSMutableArray *_currentSpecifiers;
    NSMutableArray *_updates;
    PSSpecifierGroupIndex *_groupIndex;
    BOOL _wantsDebugCallbacks;
}


@property (copy, nonatomic) PSSpecifierUpdateContext *context; // ivar: _context
@property (readonly, copy, nonatomic) NSArray *currentSpecifiers;
@property (readonly, copy, nonatomic) PSSpecifierGroupIndex *groupIndex;
@property (readonly, copy, nonatomic) NSArray *originalSpecifiers; // ivar: _originalSpecifiers
@property (readonly, copy, nonatomic) NSArray *updates;


+(BOOL)_wantsDebugCallbacks;
+(id)updatesByDiffingSpecifiers:(id)arg0 withSpecifiers:(id)arg1 changedBlock:(id)arg2 ;
+(id)updatesWithSpecifiers:(id)arg0 ;
+(void)_assertSpecifierIDsAreUnique:(id)arg0 ;
-(BOOL)_addAndApplyOperation:(id)arg0 ;
-(BOOL)_enumerateArrayWithConjuctionalResult:(id)arg0 usingBlock:(id)arg1 ;
-(BOOL)_removeOneSpecifierOnlyAtIndex:(NSUInteger)arg0 ;
-(BOOL)appendSpecifier:(id)arg0 ;
-(BOOL)appendSpecifier:(id)arg0 toGroup:(id)arg1 ;
-(BOOL)appendSpecifier:(id)arg0 toGroupAtGroupIndex:(NSUInteger)arg1 ;
-(BOOL)appendSpecifier:(id)arg0 toGroupWithID:(id)arg1 ;
-(BOOL)appendSpecifiers:(id)arg0 ;
-(BOOL)appendSpecifiers:(id)arg0 toGroup:(id)arg1 ;
-(BOOL)appendSpecifiers:(id)arg0 toGroupAtGroupIndex:(NSUInteger)arg1 ;
-(BOOL)appendSpecifiers:(id)arg0 toGroupWithID:(id)arg1 ;
-(BOOL)insertContiguousSpecifiers:(id)arg0 afterSpecifier:(id)arg1 ;
-(BOOL)insertContiguousSpecifiers:(id)arg0 afterSpecifierWithID:(id)arg1 ;
-(BOOL)insertContiguousSpecifiers:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(BOOL)insertSpecifier:(id)arg0 afterSpecifier:(id)arg1 ;
-(BOOL)insertSpecifier:(id)arg0 afterSpecifierWithID:(id)arg1 ;
-(BOOL)insertSpecifier:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(BOOL)insertSpecifier:(id)arg0 atIndexPath:(id)arg1 ;
-(BOOL)moveSpecifier:(id)arg0 toIndex:(NSUInteger)arg1 ;
-(BOOL)moveSpecifierAtIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 ;
-(BOOL)moveSpecifierAtIndexPath:(id)arg0 toIndexPath:(id)arg1 ;
-(BOOL)reloadSpecifier:(id)arg0 ;
-(BOOL)reloadSpecifierAtIndex:(NSUInteger)arg0 ;
-(BOOL)reloadSpecifierAtIndexPath:(id)arg0 ;
-(BOOL)reloadSpecifierWithID:(id)arg0 ;
-(BOOL)reloadSpecifiers:(id)arg0 ;
-(BOOL)reloadSpecifiersInGroup:(id)arg0 ;
-(BOOL)reloadSpecifiersInGroupAtGroupIndex:(NSUInteger)arg0 ;
-(BOOL)reloadSpecifiersInGroupWithID:(id)arg0 ;
-(BOOL)reloadSpecifiersInRange:(struct _NSRange )arg0 ;
-(BOOL)reloadSpecifiersWithIDs:(id)arg0 ;
-(BOOL)removeSpecifier:(id)arg0 ;
-(BOOL)removeSpecifierAtIndex:(NSUInteger)arg0 ;
-(BOOL)removeSpecifierAtIndexPath:(id)arg0 ;
-(BOOL)removeSpecifierWithID:(id)arg0 ;
-(BOOL)removeSpecifiers:(id)arg0 ;
-(BOOL)removeSpecifiersInGroup:(id)arg0 ;
-(BOOL)removeSpecifiersInGroupAtGroupIndex:(NSUInteger)arg0 ;
-(BOOL)removeSpecifiersInGroupWithID:(id)arg0 ;
-(BOOL)removeSpecifiersInRange:(struct _NSRange )arg0 ;
-(BOOL)removeSpecifiersWithIDs:(id)arg0 ;
-(BOOL)swapSpecifier:(id)arg0 withSpecifier:(id)arg1 ;
-(BOOL)swapSpecifierAtIndex:(NSUInteger)arg0 withSpecifierAtIndex:(NSUInteger)arg1 ;
-(NSUInteger)indexOfSpecifier:(id)arg0 ;
-(NSUInteger)indexOfSpecifierWithID:(id)arg0 ;
-(id)_init;
-(id)_initForCopyWithOriginalSpecifiers:(id)arg0 currentSpecifiers:(id)arg1 updates:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithSpecifiers:(id)arg0 ;
-(id)initWithSpecifiers:(id)arg0 applyUpdates:(id)arg1 ;
-(id)specifierForID:(id)arg0 ;
-(id)specifiersAfterApplyingUpdatesToIndex:(NSUInteger)arg0 ;
-(id)stepByStepDescription;
-(void)_didApplyOperation:(id)arg0 ;
-(void)_operationFailed:(id)arg0 reason:(id)arg1 ;
-(void)enumerateUpdatesUsingBlock:(id)arg0 ;


@end


#endif