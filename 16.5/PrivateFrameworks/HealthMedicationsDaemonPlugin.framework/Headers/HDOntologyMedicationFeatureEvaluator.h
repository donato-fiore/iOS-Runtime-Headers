// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDONTOLOGYMEDICATIONFEATUREEVALUATOR_H
#define HDONTOLOGYMEDICATIONFEATUREEVALUATOR_H

@class HDDaemon, NSString;

#import <Foundation/Foundation.h>


@interface HDOntologyMedicationFeatureEvaluator : NSObject

@property (readonly, weak, nonatomic) HDDaemon *daemon; // ivar: _daemon
@property (readonly, copy, nonatomic) NSString *featureIdentifier;


-(BOOL)canRequireShardWithError:(*id)arg0 ;
-(id)init;
-(id)initWithDaemon:(id)arg0 ;
-(void)triggerShardEvaluatorWithReason:(id)arg0 ;


@end


#endif