// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PASSQLITENSSETCURSOR_H
#define _PASSQLITENSSETCURSOR_H

@class PASSqliteCollectionsCursor, NSSet, NSEnumerator;



@interface _PASSqliteNSSetCursor : PASSqliteCollectionsCursor {
    NSSet *_set;
    id *_currentValue;
    NSEnumerator *_valuesEnumerator;
}


@property (retain, nonatomic) NSSet *collection;


+(char *)sqliteCreateTableStatement;
+(char *)sqliteMethodName;
+(id)planningInfoForValueConstraint:(int)arg0 ;
-(BOOL)currentIndexEof;
-(BOOL)currentIndexedRowSatisfiesConstraints;
-(id)currentIndexedValue;
-(void)applyConstraint:(int)arg0 withArgument:(id)arg1 ;
-(void)finalizeConstraints;
-(void)stepIndexedRow;


@end


#endif