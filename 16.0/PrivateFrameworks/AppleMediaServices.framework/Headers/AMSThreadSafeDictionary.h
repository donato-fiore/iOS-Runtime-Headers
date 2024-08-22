// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSTHREADSAFEDICTIONARY_H
#define AMSTHREADSAFEDICTIONARY_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "AMSThreadSafeObject.h"

@interface AMSThreadSafeDictionary : NSObject

@property (readonly, copy) NSArray *allKeys;
@property (readonly, copy) NSArray *allValues;
@property (retain, nonatomic) AMSThreadSafeObject *backingDictionary; // ivar: _backingDictionary


-(id)init;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)readWrite:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif