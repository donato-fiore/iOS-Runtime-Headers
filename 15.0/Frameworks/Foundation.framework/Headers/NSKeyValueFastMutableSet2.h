// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSKEYVALUEFASTMUTABLESET2_H
#define NSKEYVALUEFASTMUTABLESET2_H



#import "NSKeyValueFastMutableSet.h"
#import "NSKeyValueGetter.h"

@interface NSKeyValueFastMutableSet2 : NSKeyValueFastMutableSet {
    NSKeyValueGetter *_valueGetter;
}




-(NSUInteger)count;
-(id)_nonNilSetValueWithSelector:(SEL)arg0 ;
-(id)_proxyInitWithContainer:(id)arg0 getter:(id)arg1 ;
-(id)member:(id)arg0 ;
-(id)objectEnumerator;
-(void)_proxyNonGCFinalize;


@end


#endif