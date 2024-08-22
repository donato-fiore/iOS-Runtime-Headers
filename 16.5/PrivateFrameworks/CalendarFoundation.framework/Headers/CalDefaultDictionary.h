// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALDEFAULTDICTIONARY_H
#define CALDEFAULTDICTIONARY_H

@class NSMutableDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CalDefaultDictionary : NSObject <NSCopying>

 {
    Class _defaultClass;
    NSMutableDictionary *_dict;
}




-(NSUInteger)count;
-(id)_copyWithZone:(struct _NSZone *)arg0 isDeepCopy:(BOOL)arg1 ;
-(id)_mutableCopyOfFinalDictionaryWithZone:(struct _NSZone *)arg0 isDeepCopy:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deepCopy;
-(id)existingObjectForKey:(id)arg0 ;
-(id)finalDictionary;
-(id)initWithDefaultClass:(Class)arg0 ;
-(id)keys;
-(id)objectForKey:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setDictionary:(id)arg0 ;


@end


#endif