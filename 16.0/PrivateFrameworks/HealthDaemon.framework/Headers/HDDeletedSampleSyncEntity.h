// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDDELETEDSAMPLESYNCENTITY_H
#define HDDELETEDSAMPLESYNCENTITY_H

@class NSString;
@protocol HDNanoSyncEntity;


#import "HDSampleSyncEntity.h"

@interface HDDeletedSampleSyncEntity : HDSampleSyncEntity <HDNanoSyncEntity>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_insertObjectsFromCodableObjectCollection:(id)arg0 syncStore:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(Class)_syncedSampleTypeClass;
+(Class)healthEntityClass;
+(NSUInteger)supportedNanoSyncDirectionsForProtocolVersion:(int)arg0 ;
+(id)_basePruningPredicateForDate:(id)arg0 profile:(id)arg1 ;
+(id)_predicateForSyncSession:(id)arg0 ;
+(id)syncEntityIdentifier;
+(int)nanoSyncObjectType;


@end


#endif