// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __NSORDEREDSETARRAYPROXY_H
#define __NSORDEREDSETARRAYPROXY_H



#import "NSArray.h"

@interface __NSOrderedSetArrayProxy : NSArray {
    id *_orderedSet;
}




-(NSUInteger)count;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithOrderedSet:(id)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif