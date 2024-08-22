// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSTRIALMANAGER_H
#define WBSTRIALMANAGER_H

@class NSMutableDictionary, NSString, NSDictionary, TRIClient;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WBSTrialIdentifiers.h"

@interface WBSTrialManager : NSObject {
    NSMutableDictionary *_customFactorsDictionary;
}


@property (copy, nonatomic) NSString *experimentId; // ivar: _experimentId
@property (retain, nonatomic) NSDictionary *factors; // ivar: _factors
@property (readonly, nonatomic) WBSTrialIdentifiers *identifiers;
@property (nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) BOOL ready; // ivar: _ready
@property (copy, nonatomic) NSString *treatmentId; // ivar: _treatmentId
@property (retain, nonatomic) TRIClient *trialClient; // ivar: _trialClient


+(id)shared;
-(BOOL)getBoolFactor:(id)arg0 forCF:(BOOL)arg1 forDefault:(BOOL)arg2 ;
-(BOOL)inExperiment;
-(BOOL)isCFEnabled;
-(BOOL)isReady;
-(BOOL)runCFFlow;
-(CGFloat)CFSearchTimeoutForDefault:(CGFloat)arg0 ;
-(CGFloat)getFloatFactor:(id)arg0 forCF:(BOOL)arg1 forDefault:(CGFloat)arg2 ;
-(NSInteger)getIntFactor:(id)arg0 forCF:(BOOL)arg1 forDefault:(NSInteger)arg2 ;
-(id)factorWithName:(id)arg0 ;
-(id)getRetrievalFactorName:(id)arg0 forCF:(BOOL)arg1 ;
-(id)init;
-(id)numberFactorWithName:(id)arg0 ;
-(id)stringFactorWithName:(id)arg0 ;
-(void)fetchFactorsInNamespace:(id)arg0 ;
-(void)setFactorWithName:(id)arg0 value:(id)arg1 ;


@end


#endif