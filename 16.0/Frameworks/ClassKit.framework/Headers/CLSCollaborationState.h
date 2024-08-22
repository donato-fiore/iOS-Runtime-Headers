// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSCOLLABORATIONSTATE_H
#define CLSCOLLABORATIONSTATE_H

@class NSURL, NSArray, NSMutableArray, NSString, NSDictionary;
@protocol CLSRelationable, CLSAssetAdopter;


#import "CLSObject.h"

@interface CLSCollaborationState : CLSObject <CLSRelationable, CLSAssetAdopter>



@property (copy, nonatomic) NSURL *assetURL; // ivar: _assetURL
@property (readonly, nonatomic) NSArray *assets; // ivar: assets
@property (retain, nonatomic) NSMutableArray *assetsToAddOrUpdate; // ivar: _assetsToAddOrUpdate
@property (copy, nonatomic) NSString *classID; // ivar: _classID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger domain; // ivar: _domain
@property (nonatomic) NSInteger domainVersion; // ivar: _domainVersion
@property (nonatomic) NSUInteger flags; // ivar: _flags
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *info; // ivar: _info
@property (copy, nonatomic) NSString *note; // ivar: _note
@property (copy, nonatomic) NSString *ownerPersonID; // ivar: _ownerPersonID
@property (copy, nonatomic) NSString *parentEntityName; // ivar: _parentEntityName
@property (copy, nonatomic) NSString *recipientPersonID; // ivar: _recipientPersonID
@property (copy, nonatomic) NSString *senderPersonID; // ivar: _senderPersonID
@property (copy, nonatomic) NSString *serverETag; // ivar: _serverETag
@property (copy, nonatomic) NSString *serverExecutionID; // ivar: _serverExecutionID
@property (nonatomic) NSInteger serverStatus; // ivar: _serverStatus
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)identifierForTargetObjectID:(id)arg0 ownerPersonID:(id)arg1 domain:(NSInteger)arg2 ;
+(id)relations;
+(id)supportedInfoDictionaryClasses;
-(BOOL)hasServerMetadata;
-(BOOL)validateObject:(*id)arg0 ;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)friendlyDomainRepresentation;
-(id)friendlyFlagsRepresentation;
-(id)friendlyStateRepresentation;
-(id)initForObject:(id)arg0 ownerPersonID:(id)arg1 domain:(NSInteger)arg2 state:(NSInteger)arg3 flags:(NSUInteger)arg4 ;
-(id)initForObjectWithID:(id)arg0 targetClass:(Class)arg1 ownerPersonID:(id)arg2 domain:(NSInteger)arg3 state:(NSInteger)arg4 flags:(NSUInteger)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeWithObject:(id)arg0 ;


@end


#endif