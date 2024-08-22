// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSKEYVALUEFASTMUTABLEORDEREDSET2_H
#define NSKEYVALUEFASTMUTABLEORDEREDSET2_H



#import "NSKeyValueFastMutableOrderedSet.h"
#import "NSKeyValueGetter.h"

@interface NSKeyValueFastMutableOrderedSet2 : NSKeyValueFastMutableOrderedSet {
    NSKeyValueGetter *_valueGetter;
}




-(NSUInteger)count;
-(NSUInteger)indexOfObject:(id)arg0 ;
-(id)_nonNilOrderedSetValueWithSelector:(SEL)arg0 ;
-(id)_proxyInitWithContainer:(id)arg0 getter:(id)arg1 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectsAtIndexes:(id)arg0 ;
-(void)_proxyNonGCFinalize;
-(void)getObjects:(*id)arg0 range:(struct _NSRange )arg1 ;


@end


#endif