// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSKEYVALUEFASTMUTABLESET1_H
#define NSKEYVALUEFASTMUTABLESET1_H



#import "NSKeyValueFastMutableSet.h"
#import "NSKeyValueNonmutatingSetMethodSet.h"

@interface NSKeyValueFastMutableSet1 : NSKeyValueFastMutableSet {
    NSKeyValueNonmutatingSetMethodSet *_nonmutatingMethods;
}




-(NSUInteger)count;
-(id)_proxyInitWithContainer:(id)arg0 getter:(id)arg1 ;
-(id)member:(id)arg0 ;
-(id)objectEnumerator;
-(void)_proxyNonGCFinalize;


@end


#endif