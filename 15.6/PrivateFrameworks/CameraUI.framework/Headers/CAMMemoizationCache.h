// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMMEMOIZATIONCACHE_H
#define CAMMEMOIZATIONCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CAMMemoizationCache : NSObject

@property (readonly, nonatomic) NSMutableDictionary *_dictionary; // ivar: __dictionary
@property (readonly, nonatomic) BOOL memoizesNil; // ivar: _memoizesNil


-(id)init;
-(id)initWithMemoizesNil:(BOOL)arg0 ;
-(id)objectForKey:(id)arg0 memoizationBlock:(id)arg1 ;
-(void)enumerateKeysAndObjectsUsingBlock:(id)arg0 ;


@end


#endif