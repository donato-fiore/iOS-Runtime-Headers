// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIUPDATEPERSONSMODELTASK_H
#define HMIUPDATEPERSONSMODELTASK_H

@class NSUUID;
@protocol HMIPersonManagerDataSource;


#import "HMIHomeTask.h"

@interface HMIUpdatePersonsModelTask : HMIHomeTask

@property (readonly) NSObject<HMIPersonManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, getter=isExternalLibrary) BOOL externalLibrary; // ivar: _externalLibrary
@property (readonly, getter=shouldRemoveExcessFaceCrops) BOOL removeExcessFaceCrops; // ivar: _removeExcessFaceCrops
@property (readonly) NSUUID *sourceUUID; // ivar: _sourceUUID


+(id)logCategory;
-(id)initWithTaskID:(int)arg0 homeUUID:(id)arg1 sourceUUID:(id)arg2 dataSource:(id)arg3 externalLibrary:(BOOL)arg4 removeExcessFaceCrops:(BOOL)arg5 ;
-(id)limitEnforcedSubsetFromPersons:(id)arg0 ;
-(id)logIdentifier;
-(void)mainInsideAutoreleasePool;
-(void)subsampleFacesForPersons:(id)arg0 withFaceObservationsMap:(id)arg1 dataSource:(id)arg2 vnUUIDToFaceCropUUIDMap:(id)arg3 ;


@end


#endif