// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCMAPTABLE_H
#define FCMAPTABLE_H

@class NSMapTable, NSString, NSPointerFunctions;
@protocol NSCopying, NSSecureCoding, NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface FCMapTable : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>

 {
    NSMapTable *_mapTable;
    NSString *_keyClassName;
    NSString *_valueClassName;
}


@property (readonly) NSUInteger count;
@property (readonly, copy) NSPointerFunctions *keyPointerFunctions;
@property (readonly, copy) NSPointerFunctions *valuePointerFunctions;


+(BOOL)supportsSecureCoding;
+(id)mapTableWithKeyOptions:(NSUInteger)arg0 valueOptions:(NSUInteger)arg1 ;
+(id)strongToStrongObjectsMapTable;
+(id)strongToWeakObjectsMapTable;
+(id)weakToStrongObjectsMapTable;
+(id)weakToWeakObjectsMapTable;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyOptions:(NSUInteger)arg0 valueOptions:(NSUInteger)arg1 capacity:(NSUInteger)arg2 ;
-(id)initWithKeyPointerFunctions:(id)arg0 valuePointerFunctions:(id)arg1 capacity:(NSUInteger)arg2 ;
-(id)initWithMapTable:(id)arg0 ;
-(id)keyEnumerator;
-(id)objectEnumerator;
-(id)objectForKey:(id)arg0 ;
-(void)addObjectsFromMapTable:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif