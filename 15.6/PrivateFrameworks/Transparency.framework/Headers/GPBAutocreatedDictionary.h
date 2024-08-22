// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GPBAUTOCREATEDDICTIONARY_H
#define GPBAUTOCREATEDDICTIONARY_H

@class NSMutableDictionary;


#import "GPBMessage.h"

@interface GPBAutocreatedDictionary : NSMutableDictionary {
    GPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
}




-(NSUInteger)count;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithObjects:(*id)arg0 forKeys:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)dealloc;
-(void)enumerateKeysAndObjectsUsingBlock:(id)arg0 ;
-(void)enumerateKeysAndObjectsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif