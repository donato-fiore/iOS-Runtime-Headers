// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSATOMICSTORECACHENODE_H
#define NSATOMICSTORECACHENODE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "NSManagedObjectID.h"

@interface NSAtomicStoreCacheNode : NSObject {
    NSManagedObjectID *_objectID;
    NSUInteger __versionNumber;
    NSMutableDictionary *_propertyCache;
    *void _reserved1;
}


@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (retain, nonatomic) NSMutableDictionary *propertyCache;


+(BOOL)accessInstanceVariablesDirectly;
+(void)initialize;
-(*id)knownKeyValuesPointer;
-(BOOL)isEqual:(id)arg0 ;
-(id)_snapshot_;
-(id)init;
-(id)initWithObjectID:(id)arg0 ;
-(id)valueForKey:(id)arg0 ;
-(unsigned int)_versionNumber;
-(void)_setVersionNumber:(unsigned int)arg0 ;
-(void)dealloc;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif