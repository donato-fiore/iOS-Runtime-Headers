// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLRECORDTARGETMAPPING_H
#define CPLRECORDTARGETMAPPING_H

@class NSMutableDictionary, NSMutableSet, NSArray, NSString, NSSet;

#import <Foundation/Foundation.h>


@interface CPLRecordTargetMapping : NSObject {
    NSMutableDictionary *_targets;
    NSMutableDictionary *_targetsFromOtherScopedIdentifier;
    NSMutableSet *_updatedScopedIdentifiers;
    NSMutableSet *_scopedIdentifiersWithUnknownTargets;
}


@property (readonly, nonatomic) NSArray *allTargetScopedIdentifiers;
@property (readonly, nonatomic) BOOL hasUnknownTargets;
@property (readonly, nonatomic) BOOL hasUpdatedTargets;
@property (readonly, nonatomic) NSString *targetDescriptions;
@property (readonly, nonatomic) NSArray *unknownTargetScopedIdentifiers;
@property (readonly, nonatomic) NSSet *updatedTargetScopedIdentifiers;
@property (readonly, nonatomic) NSString *updatedTargetsDescription;


-(id)init;
-(id)targetForRecordWithOtherScopedIdentifier:(id)arg0 ;
-(id)targetForRecordWithScopedIdentifier:(id)arg0 ;
-(void)_setTarget:(id)arg0 forRecordWithScopedIdentifier:(id)arg1 isUpdate:(BOOL)arg2 ;
-(void)addKnownTarget:(id)arg0 forRecordWithScopedIdentifier:(id)arg1 ;
-(void)enumerateTargetsWithBlock:(id)arg0 ;
-(void)enumerateUnknownTargetsWithBlock:(id)arg0 ;
-(void)enumerateUpdatedTargetsWithBlock:(id)arg0 ;
-(void)setTarget:(id)arg0 forRecordWithScopedIdentifier:(id)arg1 ;
-(void)startTrackingUpdates;


@end


#endif