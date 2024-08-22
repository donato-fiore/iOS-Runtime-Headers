// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LBFEVENTMANAGER_H
#define LBFEVENTMANAGER_H


#import <Foundation/Foundation.h>

#import "LBFBiomeManager.h"

@interface LBFEventManager : NSObject

@property (retain, nonatomic) LBFBiomeManager *biomeManagerLighthouse; // ivar: _biomeManagerLighthouse
@property (retain, nonatomic) LBFBiomeManager *biomeManagerMLRuntimed; // ivar: _biomeManagerMLRuntimed
@property (retain, nonatomic) LBFBiomeManager *biomeManagerTrial; // ivar: _biomeManagerTrial


+(id)sharedInstance;
-(BOOL)addLighthousePluginEvent:(id)arg0 ;
-(BOOL)addLighthousePluginEvent:(id)arg0 identifiers:(id)arg1 error:(*id)arg2 ;
-(BOOL)addMLRuntimedEvent:(id)arg0 identifiers:(id)arg1 error:(*id)arg2 ;
-(BOOL)addTrialdEvent:(id)arg0 identifiers:(id)arg1 error:(*id)arg2 ;
-(BOOL)isEqualIdentifiers:(id)arg0 identifiers:(id)arg1 ;
-(id)convertToLBFTrialIdentifiers:(id)arg0 ;
-(id)ensureBiomeManagerLighthouse;
-(id)ensureBiomeManagerMLRuntimed;
-(id)ensureBiomeManagerTrial;
-(id)getLastLighthousePluginEvent:(id)arg0 ;
-(id)getLastMLRuntimeEvent:(id)arg0 ;
-(id)getLastTrialEvent:(id)arg0 ;
-(id)init;
-(void)enumerateLastLighthousePluginEvents:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 shouldContinue:(id)arg3 ;
-(void)enumerateLastMLRuntimeEvents:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 shouldContinue:(id)arg3 ;
-(void)enumerateLastTrialEvents:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 shouldContinue:(id)arg3 ;


@end


#endif