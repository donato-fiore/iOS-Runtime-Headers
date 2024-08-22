// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFUBIQUITYGLOBALOBJECTID_H
#define PFUBIQUITYGLOBALOBJECTID_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "NSManagedObjectID.h"

@interface PFUbiquityGlobalObjectID : NSObject <NSCopying>

 {
    NSString *_storeName;
    NSString *_entityName;
    NSString *_primaryKey;
    NSString *_owningPeerID;
    NSManagedObjectID *_managedObjectID;
    NSUInteger _primaryKeyInteger;
}


@property (readonly, nonatomic) NSUInteger hash; // ivar: _hash


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCompressedString:(id)arg0 forStoreWithName:(id)arg1 andEntityNames:(id)arg2 primaryKeys:(id)arg3 peerIDs:(id)arg4 ;
-(id)initWithStoreName:(id)arg0 entityName:(id)arg1 primaryKey:(id)arg2 andPeerID:(id)arg3 ;
-(id)initWithStoreName:(id)arg0 entityName:(id)arg1 primaryKeyInteger:(NSUInteger)arg2 andPeerID:(id)arg3 ;
-(id)initWithString:(id)arg0 ;
-(void)dealloc;
-(void)updateHash;


@end


#endif