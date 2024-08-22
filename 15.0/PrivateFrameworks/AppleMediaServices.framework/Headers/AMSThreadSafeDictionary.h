// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSTHREADSAFEDICTIONARY_H
#define AMSTHREADSAFEDICTIONARY_H

@class NSArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AMSThreadSafeDictionary : NSObject

@property (readonly, copy) NSArray *allKeys;
@property (readonly, copy) NSArray *allValues;
@property (retain, nonatomic) NSMutableDictionary *backingDictionary; // ivar: _backingDictionary
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backingDictionaryAccessQueue; // ivar: _backingDictionaryAccessQueue


-(id)init;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif