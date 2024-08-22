// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCRATECONTROLFEEDBACKCONTROLLER_H
#define AVCRATECONTROLFEEDBACKCONTROLLER_H


#import <Foundation/Foundation.h>

#import "AVCStatisticsCollector.h"
#import "VCConnectionHealthMonitor.h"

@interface AVCRateControlFeedbackController : NSObject {
    AVCStatisticsCollector *_statisticsCollector;
    unsigned int _feedbackMessageCount;
    unsigned int _currentMediaTimestamp;
    BOOL _isFeedbackReceived;
    BOOL _didRegisterPacketReceivedHandler;
}


@property (retain, nonatomic) VCConnectionHealthMonitor *connectionHealthMonitor; // ivar: _connectionHealthMonitor
@property (nonatomic) unsigned int mode; // ivar: _mode


-(BOOL)detectOutOfOrderFeedbackMessage:(struct ? )arg0 ;
-(BOOL)getFeedbackMessage:(*id)arg0 type:(unsigned int)arg1 metaData:(*id)arg2 error:(*id)arg3 ;
-(BOOL)getRateControlFeedbackMessage:(*id)arg0 type:(unsigned int)arg1 metaData:(*id)arg2 error:(*id)arg3 ;
-(BOOL)getVCStatisticsFeedbackMessage:(struct ? *)arg0 time:(CGFloat)arg1 ;
-(BOOL)processFeedbackMessage:(id)arg0 type:(unsigned int)arg1 metaData:(id)arg2 error:(*id)arg3 ;
-(BOOL)processRateControlFeedbackMessage:(struct ? )arg0 type:(unsigned int)arg1 error:(*id)arg2 time:(CGFloat)arg3 ;
-(BOOL)processRateControlProbingMessage:(struct ? )arg0 type:(unsigned int)arg1 error:(*id)arg2 ;
-(BOOL)translateMediaControlInfo:(*void)arg0 feedbackMessage:(struct ? *)arg1 ;
-(id)initWithStatisticsCollector:(id)arg0 ;
-(id)translateRateControlDataWithFeedbackMessage:(struct ? )arg0 ;
-(struct ? )translateAFRCFeedbackMessage:(struct tagAFRCFB )arg0 ;
-(struct ? )translateRateControlFeedbackMessageFromData:(id)arg0 ;
-(unsigned int)getConnectionStatsBlob;
-(void)dealloc;
-(void)resetBurstyLossStatistics;


@end


#endif