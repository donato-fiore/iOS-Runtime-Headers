// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCSETVALUEDICTIONARY_H
#define FCSETVALUEDICTIONARY_H

@class NSMutableDictionary;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface FCSetValueDictionary : NSObject <NSCopying, NSMutableCopying>



@property (retain, nonatomic) NSMutableDictionary *backingDictionary; // ivar: _backingDictionary


-(id)_setForKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectsForKey:(id)arg0 ;
-(void)addObject:(id)arg0 forKey:(id)arg1 ;
-(void)addObjects:(id)arg0 forKey:(id)arg1 ;
-(void)removeObjectsForKey:(id)arg0 ;


@end


#endif