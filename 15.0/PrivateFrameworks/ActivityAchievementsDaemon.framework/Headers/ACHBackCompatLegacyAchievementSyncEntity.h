// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACHBACKCOMPATLEGACYACHIEVEMENTSYNCENTITY_H
#define ACHBACKCOMPATLEGACYACHIEVEMENTSYNCENTITY_H

@class NSString;
@protocol HDSyncEntity, HDNanoSyncEntity;

#import <Foundation/Foundation.h>


@interface ACHBackCompatLegacyAchievementSyncEntity : NSObject <HDSyncEntity, HDNanoSyncEntity>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)generateSyncObjectsForSession:(id)arg0 syncAnchorRange:(struct HDSyncAnchorRange )arg1 profile:(id)arg2 messageHandler:(id)arg3 error:(*id)arg4 ;
+(BOOL)supportsSyncStore:(id)arg0 ;
+(NSInteger)nextSyncAnchorWithSession:(id)arg0 predicate:(id)arg1 startSyncAnchor:(NSInteger)arg2 profile:(id)arg3 error:(*id)arg4 ;
+(NSInteger)receiveSyncObjects:(id)arg0 syncStore:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(NSUInteger)supportedNanoSyncDirectionsForProtocolVersion:(int)arg0 ;
+(id)decodeSyncObjectWithData:(id)arg0 ;
+(id)syncEntityDependenciesForSyncProtocolVersion:(int)arg0 ;
+(id)syncEntityIdentifier;
+(int)nanoSyncObjectType;
+(void)setEarnedInstanceStore:(id)arg0 ;


@end


#endif