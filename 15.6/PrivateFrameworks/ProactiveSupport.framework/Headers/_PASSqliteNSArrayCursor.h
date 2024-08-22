// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PASSQLITENSARRAYCURSOR_H
#define _PASSQLITENSARRAYCURSOR_H

@class PASSqliteRowIdIndexSetCursor, NSArray;



@interface _PASSqliteNSArrayCursor : PASSqliteRowIdIndexSetCursor {
    id *_equalTo;
}


@property (retain, nonatomic) NSArray *collection;


+(char *)sqliteMethodName;
+(id)planningInfoForValueConstraint:(int)arg0 ;
-(BOOL)currentIndexedRowSatisfiesConstraints;
-(id)currentIndexedValue;
-(id)init;
-(void)applyConstraint:(int)arg0 withArgument:(id)arg1 ;


@end


#endif