// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PASSQLITENSORDEREDSETCURSOR_H
#define _PASSQLITENSORDEREDSETCURSOR_H

@class PASSqliteRowIdIndexSetCursor, NSOrderedSet;



@interface _PASSqliteNSOrderedSetCursor : PASSqliteRowIdIndexSetCursor

@property (retain, nonatomic) NSOrderedSet *collection;


+(char *)sqliteCreateTableStatement;
+(char *)sqliteMethodName;
+(id)planningInfoForValueConstraint:(int)arg0 ;
-(id)currentIndexedValue;
-(void)applyConstraint:(int)arg0 withArgument:(id)arg1 ;


@end


#endif