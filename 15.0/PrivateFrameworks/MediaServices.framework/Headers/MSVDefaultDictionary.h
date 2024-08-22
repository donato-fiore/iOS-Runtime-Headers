// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSVDEFAULTDICTIONARY_H
#define MSVDEFAULTDICTIONARY_H

@class NSMutableDictionary;



@interface MSVDefaultDictionary : NSMutableDictionary {
    NSMutableDictionary *_storage;
}


@property (copy, nonatomic) id *defaultValue; // ivar: _defaultValue


+(id)dictionaryWithCapacity:(NSUInteger)arg0 defaultValue:(id)arg1 ;
+(id)dictionaryWithDefaultValue:(id)arg0 ;
+(id)dictionaryWithDictionary:(id)arg0 defaultValue:(id)arg1 ;
-(NSUInteger)count;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 defaultValue:(id)arg1 ;
-(id)initWithDefaultValue:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 defaultValue:(id)arg1 ;
-(id)initWithObjects:(*id)arg0 forKeys:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif