// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PSKNNMODELCONFIGURATION_H
#define _PSKNNMODELCONFIGURATION_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface _PSKNNModelConfiguration : NSObject

@property (retain, nonatomic) NSArray *bundleIds; // ivar: _bundleIds
@property (readonly, nonatomic) NSUInteger clusterPruneThreshold; // ivar: _clusterPruneThreshold
@property (retain, nonatomic) NSArray *interactionCountMaxDepths; // ivar: _interactionCountMaxDepths
@property (retain, nonatomic) NSArray *interactionHistoryRelativeStartDates; // ivar: _interactionHistoryRelativeStartDates
@property (retain, nonatomic) NSArray *interactionMechanisms; // ivar: _interactionMechanisms
@property (retain, nonatomic) NSString *modelName; // ivar: _modelName
@property (nonatomic) NSInteger modelType; // ivar: _modelType
@property (copy, nonatomic) id *shouldExcludeInteractionBlock; // ivar: _shouldExcludeInteractionBlock


-(id)initWithInteractionMechanisms:(id)arg0 interactionCountMaxDepths:(id)arg1 interactionHistoryRelativeStartDates:(id)arg2 bundleIds:(id)arg3 modelType:(NSInteger)arg4 clusterPruneThreshold:(NSUInteger)arg5 modelName:(id)arg6 ;
-(id)initWithInteractionMechanisms:(id)arg0 interactionCountMaxDepths:(id)arg1 interactionHistoryRelativeStartDates:(id)arg2 bundleIds:(id)arg3 modelType:(NSInteger)arg4 clusterPruneThreshold:(NSUInteger)arg5 modelName:(id)arg6 shouldExcludeInteractionBlock:(id)arg7 ;


@end


#endif