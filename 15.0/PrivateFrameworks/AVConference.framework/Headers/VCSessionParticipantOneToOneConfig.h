// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCSESSIONPARTICIPANTONETOONECONFIG_H
#define VCSESSIONPARTICIPANTONETOONECONFIG_H



#import "VCObject.h"
#import "AVCBasebandCongestionDetector.h"
#import "AVCRateControlFeedbackController.h"
#import "VCRateControlMediaController.h"
#import "VCNetworkFeedbackController.h"
#import "AVCStatisticsCollector.h"

@interface VCSessionParticipantOneToOneConfig : VCObject

@property (nonatomic) *void audioMediaControlInfoGenerator; // ivar: _audioMediaControlInfoGenerator
@property (retain, nonatomic) AVCBasebandCongestionDetector *basebandCongestionDetector; // ivar: _basebandCongestionDetector
@property (nonatomic) int deviceRole; // ivar: _deviceRole
@property (retain, nonatomic) AVCRateControlFeedbackController *feedbackController; // ivar: _feedbackController
@property (nonatomic) NSUInteger idsParticipantID; // ivar: _idsParticipantID
@property (nonatomic) BOOL initUsingWifiTiers; // ivar: _initUsingWifiTiers
@property (retain, nonatomic) VCRateControlMediaController *mediaController; // ivar: _mediaController
@property (nonatomic) *tagHANDLE mediaQueue; // ivar: _mediaQueue
@property (nonatomic) BOOL negotiatedScreenEnabled; // ivar: _negotiatedScreenEnabled
@property (nonatomic) BOOL negotiatedVideoEnabled; // ivar: _negotiatedVideoEnabled
@property (retain, nonatomic) VCNetworkFeedbackController *networkFeedbackController; // ivar: _networkFeedbackController
@property (retain, nonatomic) AVCStatisticsCollector *statisticsCollector; // ivar: _statisticsCollector
@property (nonatomic) *tagVCMediaQueue vcMediaQueue; // ivar: _vcMediaQueue
@property (nonatomic) *void videoMediaControlInfoGenerator; // ivar: _videoMediaControlInfoGenerator


-(id)init;
-(void)dealloc;


@end


#endif