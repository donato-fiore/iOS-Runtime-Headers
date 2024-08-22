// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __NSPLACEHOLDERDICTIONARY_H
#define __NSPLACEHOLDERDICTIONARY_H



#import "NSMutableDictionary.h"

@interface __NSPlaceholderDictionary : NSMutableDictionary



+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(NSUInteger)count;
-(NSUInteger)retainCount;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithContentsOfFile:(id)arg0 ;
-(id)initWithContentsOfURL:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 copyItems:(BOOL)arg1 ;
-(id)initWithObjects:(*id)arg0 forKeys:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)keyEnumerator;
-(id)objectForKey:(id)arg0 ;
-(id)retain;
-(void)dealloc;
-(void)release;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif