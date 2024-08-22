// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DKKEYVALUESTORE_H
#define _DKKEYVALUESTORE_H

@protocol _DKKeyValueStore, _DKSimpleKeyValueStore;

#import <Foundation/Foundation.h>


@interface _DKKeyValueStore : NSObject <_DKKeyValueStore>

 {
    id<_DKSimpleKeyValueStore> *_store;
}




+(id)standardUserDefaultsKeyValueStore;
-(BOOL)boolForKey:(id)arg0 ;
-(id)arrayForKey:(id)arg0 ;
-(id)dataForKey:(id)arg0 ;
-(id)dateForKey:(id)arg0 ;
-(id)dictionaryForKey:(id)arg0 ;
-(id)initWithSimpleKeyValueStore:(id)arg0 ;
-(id)numberForKey:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKey:(id)arg0 havingClass:(Class)arg1 ;
-(id)stringForKey:(id)arg0 ;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setArray:(id)arg0 forKey:(id)arg1 ;
-(void)setBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)setData:(id)arg0 forKey:(id)arg1 ;
-(void)setDate:(id)arg0 forKey:(id)arg1 ;
-(void)setDictionary:(id)arg0 forKey:(id)arg1 ;
-(void)setNumber:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setString:(id)arg0 forKey:(id)arg1 ;


@end


#endif