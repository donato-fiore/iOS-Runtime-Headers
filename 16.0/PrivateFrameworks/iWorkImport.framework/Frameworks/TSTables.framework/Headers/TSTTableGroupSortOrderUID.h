// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTTABLEGROUPSORTORDERUID_H
#define TSTTABLEGROUPSORTORDERUID_H

@class TSKSosBase, NSArray;



@interface TSTTableGroupSortOrderUID : TSKSosBase

@property (readonly, nonatomic) NSArray *groupSortRules; // ivar: _groupSortRules
@property (readonly, nonatomic) NSUInteger ruleCount;


+(id)groupSortOrderWithRules:(id)arg0 withTableInfo:(id)arg1 ;
-(BOOL)containsAnyRulesInColumnUIDList:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)groupSortOrderByRemovingColumnUIDs:(*void)arg0 tableInfo:(id)arg1 ;
-(id)groupSortOrderByReplacingRuleAtIndex:(NSUInteger)arg0 withRule:(id)arg1 withTableInfo:(id)arg2 ;
-(id)groupSortOrderWithTableInfo:(id)arg0 ;
-(id)groupSortRulesForLevel:(unsigned char)arg0 tableInfo:(id)arg1 ;
-(id)initFromArchive:(*void)arg0 ;
-(id)initWithGroupRules:(id)arg0 withTableInfo:(id)arg1 ;
-(void)encodeToArchive:(*void)arg0 ;
-(void)sortRulesWithTableInfo:(id)arg0 ;


@end


#endif