// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDLAB_H
#define HDLAB_H

@class NSMutableDictionary, NSDictionary;

#import <Foundation/Foundation.h>


@interface HDLab : NSObject {
    NSMutableDictionary *_experiments;
    NSMutableDictionary *_analyses;
    NSMutableDictionary *_diagnostics;
}


@property (readonly, nonatomic) NSDictionary *availableAnalyses;
@property (readonly, nonatomic) NSDictionary *availableDiagnostics;
@property (readonly, nonatomic) NSDictionary *availableExperiments;


+(id)defaultLab;
-(id)analysisWithName:(id)arg0 ;
-(id)diagnosticWithName:(id)arg0 ;
-(id)experimentWithName:(id)arg0 ;
-(id)init;
-(void)addAnalysisWithName:(id)arg0 block:(id)arg1 ;
-(void)addDiagnosticWithName:(id)arg0 block:(id)arg1 ;
-(void)addDiagnosticWithName:(id)arg0 experimentName:(id)arg1 analysisName:(id)arg2 block:(id)arg3 ;
-(void)addDiagnosticWithName:(id)arg0 summary:(id)arg1 experimentName:(id)arg2 analysisName:(id)arg3 ;
-(void)addExperimentWithName:(id)arg0 block:(id)arg1 ;


@end


#endif