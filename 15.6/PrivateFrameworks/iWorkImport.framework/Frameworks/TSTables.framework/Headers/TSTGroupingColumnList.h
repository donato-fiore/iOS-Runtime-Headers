// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTGROUPINGCOLUMNLIST_H
#define TSTGROUPINGCOLUMNLIST_H

@class TSKSosBase, NSArray;
@protocol NSCopying;



@interface TSTGroupingColumnList : TSKSosBase <NSCopying>

 {
    NSArray *_groupingColumns;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSArray *groupingColumns;


-(BOOL)hasPrefix:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFunctionallyEquivalent:(id)arg0 ;
-(BOOL)isGroupingColumnUidsEqual:(id)arg0 ;
-(BOOL)p_isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)groupingColumnForColumnUID:(struct TSKUIDStruct )arg0 ;
-(id)init;
-(id)initWithArchive:(*void)arg0 ;
-(id)initWithGroupingColumns:(id)arg0 ;
-(id)ruleAtGroupLevel:(unsigned char)arg0 ;
-(id)ruleAtIndex:(NSUInteger)arg0 ;
-(struct TSKUIDStructVectorTemplate<TSKUIDStruct> )groupingColumnUidList;
-(void)addRule:(id)arg0 atGroupLevel:(unsigned char)arg1 ;
-(void)addRule:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)appendRules:(id)arg0 ;
-(void)changeGroupingTypeForGroupLevel:(unsigned char)arg0 toType:(NSInteger)arg1 ;
-(void)changeGroupingTypeForRuleIndex:(NSUInteger)arg0 toType:(NSInteger)arg1 ;
-(void)encodeToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)moveRuleFromGroupLevel:(unsigned char)arg0 toLevel:(unsigned char)arg1 ;
-(void)moveRuleFromIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 ;
-(void)removeRuleAtGroupLevel:(unsigned char)arg0 ;
-(void)removeRuleAtIndex:(NSUInteger)arg0 ;
-(void)replaceRuleAtGroupLevel:(unsigned char)arg0 withRule:(id)arg1 ;
-(void)replaceRuleAtIndex:(NSUInteger)arg0 withRule:(id)arg1 ;


@end


#endif