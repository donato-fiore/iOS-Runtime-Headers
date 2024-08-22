// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLSIMPLERECORDTARGETMAPPING_H
#define CPLSIMPLERECORDTARGETMAPPING_H



#import "CPLRecordTargetMapping.h"

@interface CPLSimpleRecordTargetMapping : CPLRecordTargetMapping



-(BOOL)hasUnknownTargets;
-(BOOL)hasUpdatedTargets;
-(id)targetForRecordWithScopedIdentifier:(id)arg0 ;
-(id)updatedTargetScopedIdentifiers;
-(id)updatedTargets;
-(void)enumerateTargetsWithBlock:(id)arg0 ;
-(void)enumerateUnknownTargetsWithBlock:(id)arg0 ;
-(void)enumerateUpdatedTargetsWithBlock:(id)arg0 ;
-(void)setTarget:(id)arg0 forRecordWithScopedIdentifier:(id)arg1 ;
-(void)startTrackingUpdates;


@end


#endif