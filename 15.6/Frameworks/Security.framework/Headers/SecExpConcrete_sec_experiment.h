// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SECEXPCONCRETE_SEC_EXPERIMENT_H
#define SECEXPCONCRETE_SEC_EXPERIMENT_H

@class NSString;
@protocol OS_sec_experiment;

#import <Foundation/Foundation.h>

#import "SecExperiment.h"

@interface SecExpConcrete_sec_experiment : NSObject <OS_sec_experiment>

 {
    SecExperiment *innerExperiment;
    NSUInteger numRuns;
    NSUInteger successRuns;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)experimentIsAllowedForProcess;
-(BOOL)isSamplingDisabled;
-(BOOL)isSamplingDisabledWithDefault:(BOOL)arg0 ;
-(char *)identifier;
-(char *)name;
-(id)copyExperimentConfiguration;
-(id)initWithInnerExperiment:(id)arg0 ;
-(id)initWithName:(char *)arg0 ;


@end


#endif