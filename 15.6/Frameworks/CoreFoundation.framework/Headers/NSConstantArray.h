// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSCONSTANTARRAY_H
#define NSCONSTANTARRAY_H



#import "NSArray.h"

@interface NSConstantArray : NSArray {
    NSUInteger _count;
    *id _objects;
}




+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)new;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(NSUInteger)count;
-(NSUInteger)retainCount;
-(id)autorelease;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithObjects:(*id)arg0 count:(NSUInteger)arg1 ;
-(id)mutableCopy;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)objectEnumerator;
-(id)retain;
-(void)dealloc;
-(void)getObjects:(*id)arg0 range:(struct _NSRange )arg1 ;
-(void)release;


@end


#endif