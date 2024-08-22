// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LSBUNDLEINFOCACHEDVALUES_H
#define LSBUNDLEINFOCACHEDVALUES_H

@class NSSet, NSDictionary;


#import "LSPropertyList.h"

@interface LSBundleInfoCachedValues : LSPropertyList

@property (readonly, nonatomic) NSSet *allKeys; // ivar: _keys
@property (readonly, nonatomic) NSDictionary *rawValues; // ivar: _values


-(BOOL)boolForKey:(id)arg0 ;
-(id)URLForKey:(id)arg0 ;
-(id)_expensiveDictionaryRepresentation;
-(id)_initWithKeys:(id)arg0 forDictionary:(id)arg1 ;
-(id)arrayForKey:(id)arg0 ;
-(id)arrayForKey:(id)arg0 withValuesOfClass:(Class)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryForKey:(id)arg0 ;
-(id)dictionaryForKey:(id)arg0 valuesOfClass:(Class)arg1 ;
-(id)init;
-(id)numberForKey:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKey:(id)arg0 ofClass:(Class)arg1 ;
-(id)objectForKey:(id)arg0 ofClass:(Class)arg1 valuesOfClass:(Class)arg2 ;
-(id)objectForKey:(id)arg0 ofType:(Class)arg1 ;
-(id)objectsForKeys:(id)arg0 ;
-(id)stringForKey:(id)arg0 ;


@end


#endif