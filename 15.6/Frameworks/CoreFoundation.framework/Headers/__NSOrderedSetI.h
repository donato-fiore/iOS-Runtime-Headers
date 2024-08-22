// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef __NSORDEREDSETI_H
#define __NSORDEREDSETI_H



#import "NSOrderedSet.h"

@interface __NSOrderedSetI : NSOrderedSet {
    BOOL _used;
    BOOL _stride;
    BOOL _szidx;
    id _list;
}




+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)indexOfObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)enumerateObjectsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)getObjects:(*id)arg0 range:(struct _NSRange )arg1 ;


@end


#endif