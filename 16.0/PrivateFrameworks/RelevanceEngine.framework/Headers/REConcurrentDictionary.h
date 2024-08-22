// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RECONCURRENTDICTIONARY_H
#define RECONCURRENTDICTIONARY_H

@class NSMapTable;
@protocol NSCopying, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface REConcurrentDictionary : NSObject <NSCopying>

 {
    NSMapTable *_table;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly) NSUInteger count;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initStrongToStrongDictionary;
-(id)initWeakToStrongDictionary;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif