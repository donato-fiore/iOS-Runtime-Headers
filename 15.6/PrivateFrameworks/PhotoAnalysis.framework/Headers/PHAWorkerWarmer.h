// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHAWORKERWARMER_H
#define PHAWORKERWARMER_H

@class NSMutableSet;

#import <Foundation/Foundation.h>

#import "PHAWorker.h"
#import "PHAJobConstraints.h"

@interface PHAWorkerWarmer : NSObject

@property (retain, nonatomic) PHAWorker *lastActiveWorker; // ivar: _lastActiveWorker
@property (retain, nonatomic) PHAJobConstraints *lastConstraints; // ivar: _lastConstraints
@property (readonly, nonatomic) NSMutableSet *workers; // ivar: _workers


+(NSUInteger)stateCode;
-(BOOL)_cooldownWorkerIfWarmed:(id)arg0 ;
-(id)init;
-(id)statusAsDictionary;
-(void)_warmupWorkerIfCooled:(id)arg0 withProgressBlock:(id)arg1 ;
-(void)recordConstraintChange:(id)arg0 ;
-(void)reportNoMoreJobsExpected;
-(void)setActiveWorker:(id)arg0 withJob:(id)arg1 ;


@end


#endif