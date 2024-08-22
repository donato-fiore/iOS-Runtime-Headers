// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCMEDIASTREAMRATECONTROLCONFIG_H
#define VCMEDIASTREAMRATECONTROLCONFIG_H


#import <Foundation/Foundation.h>

#import "AVCBasebandCongestionDetector.h"
#import "AVCRateControlFeedbackController.h"
#import "VCRateControlMediaController.h"
#import "AVCStatisticsCollector.h"

@interface VCMediaStreamRateControlConfig : NSObject

@property (retain, nonatomic) AVCBasebandCongestionDetector *basebandCongestionDetector; // ivar: _basebandCongestionDetector
@property (retain, nonatomic) AVCRateControlFeedbackController *feedbackController; // ivar: _feedbackController
@property (nonatomic) *void mediaControlInfoGenerator; // ivar: _mediaControlInfoGenerator
@property (nonatomic) unsigned int mediaControlInfoGeneratorOptions; // ivar: _mediaControlInfoGeneratorOptions
@property (nonatomic) unsigned int mediaControlInfoGeneratorType; // ivar: _mediaControlInfoGeneratorType
@property (nonatomic) unsigned char mediaControlInfoVersion; // ivar: _mediaControlInfoVersion
@property (retain, nonatomic) VCRateControlMediaController *mediaController; // ivar: _mediaController
@property (nonatomic) *tagHANDLE mediaQueue; // ivar: _mediaQueue
@property (nonatomic) CGFloat mediaQueueThrottlingInterval; // ivar: _mediaQueueThrottlingInterval
@property (nonatomic) BOOL shouldCreateMediaControlInfoGenerator; // ivar: _shouldCreateMediaControlInfoGenerator
@property (nonatomic) BOOL shouldRegisterMediaControlInfoGeneratorCallbacks; // ivar: _shouldRegisterMediaControlInfoGeneratorCallbacks
@property (retain, nonatomic) AVCStatisticsCollector *statisticsCollector; // ivar: _statisticsCollector
@property (nonatomic) *tagVCMediaQueue vcMediaQueue; // ivar: _vcMediaQueue


-(id)init;
-(void)dealloc;


@end


#endif