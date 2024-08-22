// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSKEYVALUEFASTMUTABLEARRAY1_H
#define NSKEYVALUEFASTMUTABLEARRAY1_H



#import "NSKeyValueFastMutableArray.h"
#import "NSKeyValueNonmutatingArrayMethodSet.h"

@interface NSKeyValueFastMutableArray1 : NSKeyValueFastMutableArray {
    NSKeyValueNonmutatingArrayMethodSet *_nonmutatingMethods;
}




-(NSUInteger)count;
-(id)_proxyInitWithContainer:(id)arg0 getter:(id)arg1 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectsAtIndexes:(id)arg0 ;
-(void)_proxyNonGCFinalize;
-(void)getObjects:(*id)arg0 range:(struct _NSRange )arg1 ;


@end


#endif