// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACHTEMPLATEENTITY_H
#define ACHTEMPLATEENTITY_H

@class HDHealthEntity, NSString;
@protocol HDSyncEntity, HDNanoSyncEntity;



@interface ACHTemplateEntity : HDHealthEntity <HDSyncEntity, HDNanoSyncEntity>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_insertTemplates:(id)arg0 provenance:(NSInteger)arg1 profile:(id)arg2 databaseContext:(id)arg3 error:(*id)arg4 ;
+(BOOL)_removeTemplates:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(BOOL)generateSyncObjectsForSession:(id)arg0 syncAnchorRange:(struct HDSyncAnchorRange )arg1 profile:(id)arg2 messageHandler:(id)arg3 error:(*id)arg4 ;
+(BOOL)insertTemplates:(id)arg0 provenance:(NSInteger)arg1 profile:(id)arg2 databaseContext:(id)arg3 error:(*id)arg4 ;
+(BOOL)removeTemplates:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(BOOL)supportsSyncStore:(id)arg0 ;
+(NSInteger)nextSyncAnchorWithSession:(id)arg0 startSyncAnchor:(NSInteger)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(NSInteger)protectionClass;
+(NSInteger)receiveSyncObjects:(id)arg0 version:(struct ? )arg1 syncStore:(id)arg2 profile:(id)arg3 error:(*id)arg4 ;
+(NSUInteger)supportedNanoSyncDirectionsForProtocolVersion:(int)arg0 ;
+(id)_insertTemplate:(id)arg0 provenance:(NSInteger)arg1 database:(id)arg2 error:(*id)arg3 ;
+(id)_templatesWithPredicate:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)allTemplatesWithProfile:(id)arg0 error:(*id)arg1 ;
+(id)codableTemplateForTemplateInDatabase:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)createTableSQL;
+(id)databaseTable;
+(id)decodeSyncObjectWithData:(id)arg0 ;
+(id)entityEncoderForProfile:(id)arg0 transaction:(id)arg1 purpose:(NSInteger)arg2 encodingOptions:(id)arg3 authorizationFilter:(id)arg4 ;
+(id)propertyForSyncProvenance;
+(id)syncEntityDependenciesForSyncProtocolVersion:(int)arg0 ;
+(id)syncEntityIdentifier;
+(id)syncedTemplatesObserver;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
+(void)setSyncedTemplatesObserver:(id)arg0 ;


@end


#endif