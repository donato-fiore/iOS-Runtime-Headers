// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDRAGSNAPPINGFEEDBACKGENERATOR_H
#define _UIDRAGSNAPPINGFEEDBACKGENERATOR_H

@class UIDragFeedbackGenerator;


#import "_UIDragSnappingFeedbackGeneratorConfiguration.h"

@interface _UIDragSnappingFeedbackGenerator : UIDragFeedbackGenerator

@property (readonly, nonatomic, getter=_dragSnappingConfiguration) _UIDragSnappingFeedbackGeneratorConfiguration *dragSnappingConfiguration;


+(Class)_configurationClass;
-(void)_startLanding;
-(void)_stopLanding;
-(void)draggedObjectLanded;
-(void)draggedObjectLifted;
-(void)objectSnapped;
-(void)userInteractionEnded;
-(void)userInteractionStarted;


@end


#endif