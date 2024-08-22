// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSSPECIFIERGROUPINDEX_H
#define PSSPECIFIERGROUPINDEX_H

@class NSMutableArray, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PSSpecifierGroupIndex : NSObject <NSCopying>

 {
    NSMutableArray *_groupSections;
    NSMutableArray *_groupSpecifiers;
    NSMutableArray *_ungroupedPrefixSpecifiers;
    BOOL _wantsDebugCallbacks;
}


@property (readonly, copy, nonatomic) NSArray *groupSpecifiers;
@property (readonly, copy, nonatomic) NSArray *specifiers; // ivar: _specifiers


+(BOOL)_wantsDebuggingCallbacks;
+(id)groupIndexWithSpecifiers:(id)arg0 ;
-(BOOL)getGroup:(*NSUInteger)arg0 row:(*NSUInteger)arg1 ofSpecifier:(id)arg2 ;
-(BOOL)getGroup:(*NSUInteger)arg0 row:(*NSUInteger)arg1 ofSpecifierAtIndex:(NSUInteger)arg2 ;
-(BOOL)getGroup:(*NSUInteger)arg0 row:(*NSUInteger)arg1 ofSpecifierWithID:(id)arg2 ;
-(NSUInteger)_indexOfSpecifierInSection:(NSUInteger)arg0 row:(NSUInteger)arg1 forInsertion:(BOOL)arg2 ;
-(NSUInteger)groupIndexOfGroup:(id)arg0 ;
-(NSUInteger)groupIndexOfGroupWithID:(id)arg0 ;
-(NSUInteger)indexOfGroup:(id)arg0 ;
-(NSUInteger)indexOfGroupAtGroupIndex:(NSUInteger)arg0 ;
-(NSUInteger)indexOfGroupWithID:(id)arg0 ;
-(NSUInteger)indexOfSpecifierAtIndexPath:(id)arg0 ;
-(NSUInteger)indexOfSpecifierAtIndexPath:(id)arg0 forInsertion:(BOOL)arg1 ;
-(NSUInteger)numberOfGroups;
-(NSUInteger)numberOfRowsInGroupAtIndex:(NSUInteger)arg0 ;
-(id)_groupSections;
-(id)_init;
-(id)_initForCopyWithGroupIndex:(id)arg0 ;
-(id)_synthesizedSpecifiersFromGroupIndex;
-(id)_tabStringOfDepth:(NSUInteger)arg0 ;
-(id)_ungroupedPrefixSpecifiers;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)indexPathForSpecifier:(id)arg0 ;
-(id)indexPathForSpecifierAtIndex:(NSUInteger)arg0 ;
-(id)indexPathForSpecifierAtIndex:(NSUInteger)arg0 forInsertion:(BOOL)arg1 ;
-(id)indexPathForSpecifierWithID:(id)arg0 ;
-(id)init;
-(id)initWithSpecifiers:(id)arg0 ;
-(id)specifierAtIndexPath:(id)arg0 ;
-(id)specifiersInGroup:(id)arg0 ;
-(id)specifiersInGroupAtGroupIndex:(NSUInteger)arg0 ;
-(id)specifiersInGroupWithID:(id)arg0 ;
-(struct _NSRange )rangeOfSpecifiersInGroup:(id)arg0 ;
-(struct _NSRange )rangeOfSpecifiersInGroupAtGroupIndex:(NSUInteger)arg0 ;
-(struct _NSRange )rangeOfSpecifiersInGroupWithID:(id)arg0 ;
-(void)_appendDescriptionOfArray:(id)arg0 toString:(id)arg1 withTabLevel:(NSUInteger)arg2 ;
-(void)_createGroupIndex;
-(void)_didPerformOperation:(id)arg0 forSpecifierUpdates:(id)arg1 ;
-(void)_getSection:(*NSUInteger)arg0 row:(*NSUInteger)arg1 forSpecifierAtIndex:(NSUInteger)arg2 forInsertion:(BOOL)arg3 ;
-(void)_getSection:(*NSUInteger)arg0 row:(*NSUInteger)arg1 forSpecifierAtIndex:(NSUInteger)arg2 forInsertion:(BOOL)arg3 allowGroupSpecifiers:(BOOL)arg4 ;
-(void)_manuallyFindSection:(*NSUInteger)arg0 row:(*NSUInteger)arg1 forSpecifierAtIndex:(NSUInteger)arg2 ;
-(void)_willPerformOperation:(id)arg0 forSpecifierUpdates:(id)arg1 ;
-(void)performSpecifierUpdates:(id)arg0 ;
-(void)performSpecifierUpdatesUsingBlock:(id)arg0 ;
-(void)performUpdateOperation:(id)arg0 ;
-(void)performUpdateOperation:(id)arg0 forSpecifierUpdates:(id)arg1 ;
-(void)reloadWithSpecifiers:(id)arg0 ;


@end


#endif