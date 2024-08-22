// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMCONTAINERCACHEENTRY_H
#define MCMCONTAINERCACHEENTRY_H

@class NSString, NSNumber, NSUUID;
@protocol MCMContainerCacheEntry_Internal, MCMContainerCacheEntry, MCMContainerCacheUpdatable, MCMMetadata;

#import <Foundation/Foundation.h>

#import "MCMContainerPath.h"
#import "MCMFSNode.h"
#import "MCMUserIdentityCache.h"

@interface MCMContainerCacheEntry : NSObject <MCMContainerCacheEntry_Internal, MCMContainerCacheEntry>



@property (weak, nonatomic) NSObject<MCMContainerCacheUpdatable> *cache; // ivar: _cache
@property (retain, nonatomic) MCMContainerPath *containerPath; // ivar: _containerPath
@property (nonatomic) BOOL corrupt; // ivar: _corrupt
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MCMFSNode *fsNode; // ivar: _fsNode
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSObject<MCMMetadata> *metadata; // ivar: _metadata
@property (retain, nonatomic) NSNumber *schemaVersion; // ivar: _schemaVersion
@property (readonly) Class superclass;
@property (readonly, nonatomic) MCMUserIdentityCache *userIdentityCache; // ivar: _userIdentityCache
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


+(id)UUIDForFD:(int)arg0 ;
+(id)UUIDForURL:(id)arg0 ;
// +(id)_UUIDForGetter:(id)arg0 pathForErrorLog:(unk)arg1  ;
// +(id)_identifierWithGetter:(id)arg0 pathForErrorLog:(unk)arg1  ;
// +(id)_schemaVersionForGetter:(id)arg0 pathForErrorLog:(unk)arg1  ;
+(id)identifierForFD:(int)arg0 ;
+(id)identifierForURL:(id)arg0 ;
+(id)schemaVersionForFD:(int)arg0 ;
+(id)schemaVersionForURL:(id)arg0 ;
// +(void)_setUUID:(id)arg0 forSetter:(id)arg1 pathForErrorLog:(unk)arg2  ;
+(void)clearAttributesForFD:(int)arg0 ;
+(void)clearAttributesForURL:(id)arg0 ;
+(void)setUUID:(id)arg0 forFD:(int)arg1 ;
+(void)setUUID:(id)arg0 forURL:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToContainerCacheEntry:(id)arg0 ;
-(BOOL)verify;
-(id)_readMetadataForIdentifier:(id)arg0 containerPath:(id)arg1 error:(*id)arg2 ;
-(id)containerIdentity;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fullDescription;
-(id)initWithIdentifier:(id)arg0 containerPath:(id)arg1 schemaVersion:(id)arg2 uuid:(id)arg3 metadata:(id)arg4 userIdentityCache:(id)arg5 ;
-(id)initWithMetadata:(id)arg0 userIdentityCache:(id)arg1 ;
-(id)metadataWithError:(*id)arg0 ;


@end


#endif