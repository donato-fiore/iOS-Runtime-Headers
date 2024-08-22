// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VTUIANALYTICS_H
#define VTUIANALYTICS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VTUIAnalytics : NSObject

@property (nonatomic) int aboutViewShown; // ivar: _aboutViewShown
@property (nonatomic) int asrError; // ivar: _asrError
@property (nonatomic) int introViewShown; // ivar: _introViewShown
@property (retain, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (retain, nonatomic) NSString *setupMode; // ivar: _setupMode
@property (nonatomic) int skippedFromIntroAOP; // ivar: _skippedFromIntroAOP
@property (nonatomic) int skippedFromIntroNonAOP; // ivar: _skippedFromIntroNonAOP
@property (nonatomic) int turnOnSiriNonAOP; // ivar: _turnOnSiriNonAOP
@property (nonatomic) int voiceTrainingCancelled; // ivar: _voiceTrainingCancelled
@property (nonatomic) int voiceTrainingCancelledStep; // ivar: _voiceTrainingCancelledStep
@property (nonatomic) int voiceTrainingCompleted; // ivar: _voiceTrainingCompleted
@property (nonatomic) int voiceTrainingStarted; // ivar: _voiceTrainingStarted
@property (nonatomic) int vtError; // ivar: _vtError


-(void)logEvent;


@end


#endif