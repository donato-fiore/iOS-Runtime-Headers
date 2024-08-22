// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMMETADATAMINIMAL_H
#define MCMMETADATAMINIMAL_H

@class NSString, NSNumber, NSUUID;
@protocol MCMMetadataMinimal;

#import <Foundation/Foundation.h>

#import "MCMConcreteContainerIdentityForLibsystem.h"
#import "MCMContainerPath.h"
#import "MCMUserIdentity.h"
#import "MCMUserIdentityCache.h"

@interface MCMMetadataMinimal : NSObject <MCMMetadataMinimal>



@property (readonly, nonatomic) NSUInteger containerClass;
@property (readonly, nonatomic) MCMConcreteContainerIdentityForLibsystem *containerIdentity; // ivar: _containerIdentity
@property (readonly, nonatomic) MCMContainerPath *containerPath; // ivar: _containerPath
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL existed;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned int platform;
@property (readonly, nonatomic) NSNumber *schemaVersion; // ivar: _schemaVersion
@property (readonly, nonatomic) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL transient;
@property (readonly, nonatomic) MCMUserIdentity *userIdentity;
@property (readonly, nonatomic) MCMUserIdentityCache *userIdentityCache; // ivar: _userIdentityCache
@property (readonly, nonatomic) NSUUID *uuid;


-(BOOL)_initFromMetadataInDictionary:(id)arg0 containerPath:(id)arg1 userIdentity:(id)arg2 containerClass:(NSUInteger)arg3 fsNode:(id)arg4 fileURL:(id)arg5 userIdentityCache:(id)arg6 error:(*id)arg7 ;
-(BOOL)_persisted;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initByReadingAndValidatingMetadataAtContainerPath:(id)arg0 userIdentity:(id)arg1 containerClass:(NSUInteger)arg2 userIdentityCache:(id)arg3 error:(*id)arg4 ;
-(id)initByReadingAndValidatingMetadataAtFileURL:(id)arg0 containerPath:(id)arg1 userIdentity:(id)arg2 containerClass:(NSUInteger)arg3 userIdentityCache:(id)arg4 error:(*id)arg5 ;
-(id)initWithContainerIdentity:(id)arg0 containerPath:(id)arg1 schemaVersion:(id)arg2 userIdentityCache:(id)arg3 ;
-(id)metadataByChangingContainerPath:(id)arg0 ;
-(id)metadataByChangingSchemaVersion:(id)arg0 ;
-(id)metadataByChangingUUID:(id)arg0 ;
-(id)metadataBySettingTransient:(BOOL)arg0 ;
-(struct container_object_s *)createLibsystemContainerWithError:(*id)arg0 ;
-(void)_clearPersistedStatus;


@end


#endif