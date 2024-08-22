// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDONTOLOGYCHRFEATUREEVALUATOR_H
#define HDONTOLOGYCHRFEATUREEVALUATOR_H

@class NSString;
@protocol HDHealthRecordsAccountExistenceObserver, HDOntologyFeatureEvaluator;

#import <Foundation/Foundation.h>

#import "HDOntologyUpdateCoordinator.h"

@interface HDOntologyCHRFeatureEvaluator : NSObject <HDHealthRecordsAccountExistenceObserver, HDOntologyFeatureEvaluator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) HDOntologyUpdateCoordinator *updateCoordinator; // ivar: _updateCoordinator


-(BOOL)canRequireShardWithError:(*id)arg0 ;
-(NSInteger)requiresFeatureShardForProfile:(id)arg0 ;
-(id)init;
-(id)initWithOntologyUpdateCoordinator:(id)arg0 ;
-(void)accountExistenceNotifier:(id)arg0 didChangeHealthRecordAccountExistence:(BOOL)arg1 ;
-(void)registerRequiredObserversForProfile:(id)arg0 queue:(id)arg1 ;


@end


#endif