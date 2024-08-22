// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSNESTEDDICTIONARY_H
#define _NSNESTEDDICTIONARY_H

@class NSMutableDictionary;



@interface _NSNestedDictionary : NSMutableDictionary {
    id *_locals;
    id *_bindings;
}




-(NSUInteger)count;
-(id)keyEnumerator;
-(id)objectEnumerator;
-(id)objectForKey:(id)arg0 ;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif