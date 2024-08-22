// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCSETVALUEMAPTABLE_H
#define FCSETVALUEMAPTABLE_H

@class NSMapTable;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface FCSetValueMapTable : NSObject <NSCopying, NSMutableCopying>



@property (retain, nonatomic) NSMapTable *backingMapTable; // ivar: _backingMapTable


-(id)_setForKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectEnumerator;
-(id)objectsForKey:(id)arg0 ;
-(void)addObject:(id)arg0 forKey:(id)arg1 ;
-(void)addObjects:(id)arg0 forKey:(id)arg1 ;
-(void)removeObject:(id)arg0 forKey:(id)arg1 ;
-(void)removeObjectsForKey:(id)arg0 ;


@end


#endif