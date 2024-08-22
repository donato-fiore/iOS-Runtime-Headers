// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef __NSORDEREDSETSETPROXY_H
#define __NSORDEREDSETSETPROXY_H



#import "NSSet.h"

@interface __NSOrderedSetSetProxy : NSSet {
    id *_orderedSet;
}




-(NSUInteger)count;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithOrderedSet:(id)arg0 ;
-(id)member:(id)arg0 ;
-(id)objectEnumerator;
-(void)dealloc;


@end


#endif