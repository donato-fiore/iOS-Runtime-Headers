// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCREDUNDANCYCONTROLLERVIDEO_H
#define VCREDUNDANCYCONTROLLERVIDEO_H

@class NSString, NSArray;
@protocol VCRedundancyControllerProtocol, VCRedundancyControlAlgorithm;

#import <Foundation/Foundation.h>

#import "AVCStatisticsCollector.h"

@interface VCRedundancyControllerVideo : NSObject <VCRedundancyControllerProtocol>

 {
    id *_redundancyControllerDelegate;
    AVCStatisticsCollector *_statisticsCollector;
    unsigned int _mode;
    id<VCRedundancyControlAlgorithm> *_algorithm;
    unsigned int _currentRedundancyPercentage;
    BOOL _isRSUOptimizationEnabled;
    int _forceRedundancyPercentage;
    CGFloat _lastDefaultSettingLoadingTime;
    unsigned char _mediaControlInfoFECFeedbackVersion;
    int _type;
    BOOL _isNWConnectionEnabled;
    int _btNotificationHandlerIndex;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *fecLevelPerFrameSizeVector; // ivar: _fecLevelPerFrameSizeVector
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger statisticsID; // ivar: _statisticsID
@property (readonly) Class superclass;


+(CGFloat)convertRedundancyPercentageToRatio:(unsigned int)arg0 ;
-(id)initWithDelegate:(id)arg0 mode:(unsigned int)arg1 parameters:(struct VCRedundancyControllerVideoParameters_t )arg2 ;
-(void)dealloc;
-(void)loadDefaultSettings;
-(void)reportRedundancyPercentage:(unsigned int)arg0 redundancyInterval:(CGFloat)arg1 ;
-(void)resetRedundancyStrategy:(struct ? *)arg0 ;
-(void)setBtNotificationMonitor;
-(void)updateRedundancyStrategyWithNetworkStatistics:(struct ? )arg0 ;


@end


#endif