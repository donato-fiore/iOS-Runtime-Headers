// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCOREMOTIONDATACOLLECTOR_H
#define HDCOREMOTIONDATACOLLECTOR_H

@class NSSet, NSMutableDictionary, NSString;
@protocol HDDiagnosticObject, HDDataCollector, HDCoreMotionDataSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDDataCollectorMultiplexer.h"
#import "HDDataCollectorState.h"
#import "HDProfile.h"

@interface HDCoreMotionDataCollector : NSObject <HDDiagnosticObject, HDDataCollector>

 {
    NSSet *_quantityTypes;
    HDDataCollectorMultiplexer *_multiplexer;
    NSMutableDictionary *_lastCMDatumByType;
    id<HDCoreMotionDataSource> *_dataSource;
    HDDataCollectorState *_state;
    NSInteger _errorCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(CGFloat)queue_differenceFromDatum:(id)arg0 toDatum:(id)arg1 type:(id)arg2 ;
-(Class)coreMotionDatumClass;
-(Class)sensorDatumClassForAggregator:(id)arg0 ;
-(NSUInteger)queue_targetCollectionTypeForRequestedCollectionType:(NSUInteger)arg0 ;
-(id)collectedTypes;
-(id)diagnosticDescription;
-(id)identifierForDataAggregator:(id)arg0 ;
-(id)initWithProfile:(id)arg0 ;
-(id)persistentIdentifier;
-(id)sourceForDataAggregator:(id)arg0 ;
-(void)_accessToFitnessDataDidChange:(id)arg0 ;
-(void)beginCollectionForDataAggregator:(id)arg0 lastPersistedSensorDatum:(id)arg1 ;
-(void)dataAggregator:(id)arg0 wantsCollectionWithConfiguration:(id)arg1 ;
-(void)dealloc;
-(void)registerWithAggregators;


@end


#endif