// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APODMLVECTORBUILDER_H
#define APODMLVECTORBUILDER_H

@class NSMutableDictionary, NSMutableArray, NSArray, _DKKnowledgeStore, NSString;

#import <Foundation/Foundation.h>

#import "APOdmlUnfairLock.h"
#import "APOdmlXpcLifecycleHandler.h"
#import "APOdmlVector.h"

@interface APOdmlVectorBuilder : NSObject

@property (retain, nonatomic) NSMutableDictionary *adamIDtoBundleID; // ivar: _adamIDtoBundleID
@property (retain, nonatomic) NSMutableArray *consumedEvents; // ivar: _consumedEvents
@property (retain, nonatomic) NSArray *events; // ivar: _events
@property (nonatomic) CGFloat exponentialDecayConstant; // ivar: _exponentialDecayConstant
@property (retain, nonatomic) _DKKnowledgeStore *knowledgeStore; // ivar: _knowledgeStore
@property (nonatomic) CGFloat lookbackPeriod; // ivar: _lookbackPeriod
@property (nonatomic) NSInteger maxQueryElements; // ivar: _maxQueryElements
@property (retain, nonatomic) APOdmlUnfairLock *setVectorAndWeightLock; // ivar: _setVectorAndWeightLock
@property (retain, nonatomic) APOdmlXpcLifecycleHandler *task; // ivar: _task
@property (retain, nonatomic) APOdmlVector *vector; // ivar: _vector
@property (nonatomic) CGFloat vectorWeightTotal; // ivar: _vectorWeightTotal
@property (retain, nonatomic) NSString *version; // ivar: _version
@property (nonatomic) BOOL weightByDuration; // ivar: _weightByDuration


-(CGFloat)weightForEvents:(id)arg0 ;
-(id)adamIDForBundleID:(id)arg0 ;
-(id)bundleIdForAdamId:(id)arg0 ;
-(id)descriptionForEvent:(id)arg0 ;
-(id)eventName;
-(id)eventsBetween:(id)arg0 and:(id)arg1 withLimit:(NSUInteger)arg2 ;
-(id)eventsForLookbackPeriod:(CGFloat)arg0 ;
-(id)initWithVersion:(id)arg0 lookbackPeriod:(id)arg1 maxQueryElements:(id)arg2 task:(id)arg3 exponentialDecayConstant:(id)arg4 weightByDuration:(id)arg5 ;
-(id)pullEvents;
-(id)retrieveFilteredEvents:(id)arg0 ;
-(id)retrieveVector:(*id)arg0 ;
-(id)updateVector:(id)arg0 withVector:(id)arg1 usingWeight:(CGFloat)arg2 ;
-(void)addAppVector:(id)arg0 ;
-(void)buildBundleIDtoAdamIDCache:(id)arg0 ;


@end


#endif