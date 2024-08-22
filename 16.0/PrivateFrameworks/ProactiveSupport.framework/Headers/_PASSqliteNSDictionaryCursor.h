// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PASSQLITENSDICTIONARYCURSOR_H
#define _PASSQLITENSDICTIONARYCURSOR_H

@class PASSqliteKeyValueCursor, NSDictionary, NSEnumerator;



@interface _PASSqliteNSDictionaryCursor : PASSqliteKeyValueCursor {
    NSDictionary *_dictionary;
    NSEnumerator *_keysEnumerator;
    id *_currentKey;
    id *_currentValue;
    id *_valueEqualTo;
}


@property (retain, nonatomic) NSDictionary *collection;


+(char *)sqliteMethodName;
+(id)planningInfoForKeyConstraint:(int)arg0 ;
-(BOOL)currentIndexedRowSatisfiesConstraints;
-(id)currentIndexedKey;
-(id)currentIndexedValue;
-(void)applyKeyConstraint:(int)arg0 withArgument:(id)arg1 ;
-(void)finalizeConstraints;
-(void)stepIndexedRow;


@end


#endif