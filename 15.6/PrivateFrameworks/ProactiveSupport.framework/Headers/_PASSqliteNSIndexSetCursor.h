// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PASSQLITENSINDEXSETCURSOR_H
#define _PASSQLITENSINDEXSETCURSOR_H

@class PASSqliteRowIdIndexSetCursor, NSIndexSet;



@interface _PASSqliteNSIndexSetCursor : PASSqliteRowIdIndexSetCursor

@property (retain, nonatomic) NSIndexSet *collection;


+(BOOL)canOrderByValue:(BOOL)arg0 ;
+(CGFloat)baseEstimatedCost;
+(CGFloat)baseEstimatedRows;
+(char *)sqliteCreateTableStatement;
+(char *)sqliteMethodName;
+(id)planningInfoForValueConstraint:(int)arg0 ;
-(id)currentIndexedValue;
-(void)applyConstraint:(int)arg0 withArgument:(id)arg1 ;
-(void)applyValueSort:(BOOL)arg0 ;


@end


#endif