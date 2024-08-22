// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSSTOREMAPNODE_H
#define NSSTOREMAPNODE_H

@class NSMutableDictionary, NSString;
@protocol NSCoding;

#import <Foundation/Foundation.h>

#import "NSPersistentStoreMap.h"
#import "NSManagedObjectID.h"

@interface NSStoreMapNode : NSObject <NSCoding>

 {
    NSPersistentStoreMap *_map;
    NSManagedObjectID *_objectID;
    NSMutableDictionary *_relatedNodes;
    NSString *_entityName;
    unsigned int _version;
}




+(void)initialize;
-(*id)knownKeyValuesPointer;
-(BOOL)isEqual:(id)arg0 ;
-(id)_snapshot_;
-(id)configurationName;
-(id)destinationsForRelationship:(id)arg0 ;
-(id)entity;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjectID:(id)arg0 ;
-(id)key;
-(id)objectID;
-(unsigned int)_versionNumber;
-(void)_setVersionNumber:(unsigned int)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif