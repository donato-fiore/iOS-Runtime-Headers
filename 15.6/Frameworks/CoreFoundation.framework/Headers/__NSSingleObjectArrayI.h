// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef __NSSINGLEOBJECTARRAYI_H
#define __NSSINGLEOBJECTARRAYI_H



#import "NSArray.h"

@interface __NSSingleObjectArrayI : NSArray {
    id *_object;
}




+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)isEqualToArray:(id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)firstObject;
-(id)lastObject;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectEnumerator;
-(void)dealloc;
-(void)enumerateObjectsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)getObjects:(*id)arg0 range:(struct _NSRange )arg1 ;


@end


#endif