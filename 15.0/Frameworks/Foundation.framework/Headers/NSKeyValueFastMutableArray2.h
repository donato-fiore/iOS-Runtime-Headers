// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSKEYVALUEFASTMUTABLEARRAY2_H
#define NSKEYVALUEFASTMUTABLEARRAY2_H



#import "NSKeyValueFastMutableArray.h"
#import "NSKeyValueGetter.h"

@interface NSKeyValueFastMutableArray2 : NSKeyValueFastMutableArray {
    NSKeyValueGetter *_valueGetter;
}




-(NSUInteger)count;
-(id)_nonNilArrayValueWithSelector:(SEL)arg0 ;
-(id)_proxyInitWithContainer:(id)arg0 getter:(id)arg1 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectsAtIndexes:(id)arg0 ;
-(void)_proxyNonGCFinalize;
-(void)getObjects:(*id)arg0 range:(struct _NSRange )arg1 ;


@end


#endif