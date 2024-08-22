// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PASSQLITEROWIDCURSOR_H
#define _PASSQLITEROWIDCURSOR_H

@class PASSqliteCollectionsCursor;



@interface _PASSqliteRowIdCursor : PASSqliteCollectionsCursor



+(BOOL)hasRowId;
+(char *)sqliteCreateTableStatement;
-(BOOL)currentIndexEof;
-(NSUInteger)currentIndexedRowId;
-(NSUInteger)outputRowId;


@end


#endif