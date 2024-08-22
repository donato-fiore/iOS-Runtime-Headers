// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSINCREMENTALSTORENODE_H
#define NSINCREMENTALSTORENODE_H


#import <Foundation/Foundation.h>

#import "NSManagedObjectID.h"

@interface NSIncrementalStoreNode : NSObject {
    NSManagedObjectID *_objectID;
    NSUInteger _versionNumber;
    id *_propertyCache;
    *void _reserved1;
}


@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic) NSUInteger version;


+(void)initialize;
-(*id)knownKeyValuesPointer;
-(id)_propertyCache;
-(id)_snapshot_;
-(id)description;
-(id)initWithObjectID:(id)arg0 fromSQLRow:(id)arg1 ;
-(id)initWithObjectID:(id)arg0 withValues:(id)arg1 version:(NSUInteger)arg2 ;
-(id)valueForPropertyDescription:(id)arg0 ;
-(void)dealloc;
-(void)updateWithValues:(id)arg0 version:(NSUInteger)arg1 ;


@end


#endif