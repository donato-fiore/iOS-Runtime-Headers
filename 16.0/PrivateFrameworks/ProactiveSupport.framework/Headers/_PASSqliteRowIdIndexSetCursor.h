// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PASSQLITEROWIDINDEXSETCURSOR_H
#define _PASSQLITEROWIDINDEXSETCURSOR_H

@class PASSqliteRowIdCursor, NSIndexSet, NSMutableIndexSet;



@interface _PASSqliteRowIdIndexSetCursor : PASSqliteRowIdCursor {
    NSUInteger _currentIndex;
    NSIndexSet *_indexSet;
    NSMutableIndexSet *_mutableIndexSet;
    BOOL _isDescending;
}


@property (readonly, nonatomic) NSMutableIndexSet *mutableIndexSet;


+(BOOL)canOrderByRowId:(BOOL)arg0 ;
+(CGFloat)costFactorForRandomAccess;
+(id)planningInfoForRowIdConstraint:(int)arg0 ;
-(NSUInteger)currentIndexedRowId;
-(id)init;
-(void)applyRowIdConstraint:(int)arg0 withArgument:(id)arg1 ;
-(void)applyRowIdSort:(BOOL)arg0 ;
-(void)finalizeConstraints;
-(void)matchNoRows;
-(void)matchOneRow:(NSUInteger)arg0 ;
-(void)setIndexSet:(id)arg0 ;
-(void)stepIndexedRow;


@end


#endif