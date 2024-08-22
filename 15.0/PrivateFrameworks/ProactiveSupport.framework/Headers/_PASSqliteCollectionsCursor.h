// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PASSQLITECOLLECTIONSCURSOR_H
#define _PASSQLITECOLLECTIONSCURSOR_H


#import <Foundation/Foundation.h>


@interface _PASSqliteCollectionsCursor : NSObject {
    BOOL _foundOutputRow;
    BOOL _eof;
}


@property (retain, nonatomic) id *collection; // ivar: _collection


+(BOOL)canOrderByKey:(BOOL)arg0 ;
+(BOOL)canOrderByRowId:(BOOL)arg0 ;
+(BOOL)canOrderByValue:(BOOL)arg0 ;
+(BOOL)hasKey;
+(BOOL)hasRowId;
+(CGFloat)baseEstimatedCost;
+(CGFloat)baseEstimatedRows;
+(char *)sqliteCreateTableStatement;
+(char *)sqliteMethodName;
+(id)planningInfoForKeyConstraint:(int)arg0 ;
+(id)planningInfoForRowIdConstraint:(int)arg0 ;
+(id)planningInfoForValueConstraint:(int)arg0 ;
-(BOOL)currentIndexEof;
-(BOOL)currentIndexedRowSatisfiesConstraints;
-(NSUInteger)outputRowId;
-(id)currentIndexedValue;
-(id)init;
-(id)outputKey;
-(void)applyConstraint:(int)arg0 withArgument:(id)arg1 ;
-(void)applyKeyConstraint:(int)arg0 withArgument:(id)arg1 ;
-(void)applyKeySort:(BOOL)arg0 ;
-(void)applyRowIdConstraint:(int)arg0 withArgument:(id)arg1 ;
-(void)applyRowIdSort:(BOOL)arg0 ;
-(void)applyValueSort:(BOOL)arg0 ;
-(void)finalizeConstraints;
-(void)stepIndexedRow;


@end


#endif