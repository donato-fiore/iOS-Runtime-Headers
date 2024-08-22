// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDMEDICALIDSYNCENTITY_H
#define HDMEDICALIDSYNCENTITY_H

@class NSString;
@protocol HDSyncEntity;

#import <Foundation/Foundation.h>


@interface HDMedicalIDSyncEntity : NSObject <HDSyncEntity>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)generateSyncObjectsForSession:(id)arg0 syncAnchorRange:(struct HDSyncAnchorRange )arg1 profile:(id)arg2 messageHandler:(id)arg3 error:(*id)arg4 ;
+(BOOL)incrementSyncAnchorWithProfile:(id)arg0 error:(*id)arg1 ;
+(BOOL)setSyncProvenance:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(BOOL)supportsSyncStore:(id)arg0 ;
+(BOOL)touchSyncAnchorIfNecessaryWithProfile:(id)arg0 error:(*id)arg1 ;
+(NSInteger)nextSyncAnchorWithSession:(id)arg0 startSyncAnchor:(NSInteger)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(NSInteger)receiveSyncObjects:(id)arg0 version:(struct ? )arg1 syncStore:(id)arg2 profile:(id)arg3 error:(*id)arg4 ;
+(id)_codableFromMedicalID:(id)arg0 ;
+(id)_medicalIDFromCodable:(id)arg0 ;
+(id)decodeSyncObjectWithData:(id)arg0 ;
+(id)getSyncProvencanceOfMedicalIDForProfile:(id)arg0 error:(*id)arg1 ;
+(id)syncEntityDependenciesForSyncProtocolVersion:(int)arg0 ;
+(id)syncEntityIdentifier;


@end


#endif