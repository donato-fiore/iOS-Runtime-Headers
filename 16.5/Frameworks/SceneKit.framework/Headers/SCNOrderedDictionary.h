// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNORDEREDDICTIONARY_H
#define SCNORDEREDDICTIONARY_H

@class NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface SCNOrderedDictionary : NSObject {
    NSMutableArray *_keys;
    NSMutableDictionary *_keyValues;
}




-(NSUInteger)count;
-(id)allKeys;
-(id)allValues;
-(id)copy;
-(id)description;
-(id)dictionary;
-(id)keys;
-(id)objectAtIndex:(NSInteger)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)valueForKey:(id)arg0 ;
-(void)_setupFrom:(id)arg0 ;
-(void)applyBlock:(id)arg0 ;
-(void)applyFunction:(*unk)arg0 withContext:(*void)arg1 ;
-(void)dealloc;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif