// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDUSERDOMAINCONCEPTSYNCENTITY_H
#define HDUSERDOMAINCONCEPTSYNCENTITY_H

@class NSString;
@protocol HDNanoSyncEntity, HDSyncEntity;

#import <Foundation/Foundation.h>


@interface HDUserDomainConceptSyncEntity : NSObject <HDNanoSyncEntity, HDSyncEntity>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)generateSyncObjectsForSession:(id)arg0 syncAnchorRange:(struct HDSyncAnchorRange )arg1 profile:(id)arg2 messageHandler:(id)arg3 error:(*id)arg4 ;
+(BOOL)supportsSyncStore:(id)arg0 ;
+(NSInteger)nextSyncAnchorWithSession:(id)arg0 startSyncAnchor:(NSInteger)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(NSInteger)receiveSyncObjects:(id)arg0 version:(struct ? )arg1 syncStore:(id)arg2 profile:(id)arg3 error:(*id)arg4 ;
+(NSUInteger)supportedNanoSyncDirectionsForProtocolVersion:(int)arg0 ;
+(id)decodeSyncObjectWithData:(id)arg0 ;
+(id)pruneSyncedObjectsThroughAnchor:(id)arg0 limit:(NSUInteger)arg1 nowDate:(id)arg2 profile:(id)arg3 error:(*id)arg4 ;
+(id)syncEntityDependenciesForSyncProtocolVersion:(int)arg0 ;
+(id)syncEntityIdentifier;


@end


#endif