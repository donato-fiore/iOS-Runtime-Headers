// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCRCINDEXMAP_H
#define SCRCINDEXMAP_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SCRCIndexMap : NSObject <NSCopying, NSSecureCoding>

 {
    *__CFDictionary _map;
}




+(BOOL)supportsSecureCoding;
-(*NSUInteger)_createIndexesWithSize:(*NSUInteger)arg0 ;
-(NSUInteger)count;
-(id)_initAndDeepCopyIndexMap:(id)arg0 ;
-(id)_initWithIndexMap:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deepCopyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)indexes;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjects:(*id)arg0 andIndexes:(*NSUInteger)arg1 count:(NSUInteger)arg2 ;
-(id)objectForIndex:(NSUInteger)arg0 ;
-(void)addObjectsFromIndexMap:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObjectForIndex:(NSUInteger)arg0 ;
-(void)setObject:(id)arg0 forIndex:(NSUInteger)arg1 ;


@end


#endif