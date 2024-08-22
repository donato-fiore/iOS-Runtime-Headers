// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSCONCRETEMAPTABLEVALUEENUMERATOR_H
#define NSCONCRETEMAPTABLEVALUEENUMERATOR_H

@class NSEnumerator;


#import "NSConcreteMapTable.h"

@interface NSConcreteMapTableValueEnumerator : NSEnumerator {
    NSConcreteMapTable *mapTable;
    NSUInteger counter;
}




+(id)enumeratorWithMapTable:(id)arg0 ;
-(id)nextObject;
-(void)dealloc;


@end


#endif