// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COREMEDIADOWNLOAD_H
#define COREMEDIADOWNLOAD_H


#import <Foundation/Foundation.h>


@interface CoreMediaDownload : NSObject

@property (nonatomic) unsigned int downloadState; // ivar: _downloadState
@property (nonatomic) CGFloat estimatedDuration; // ivar: _estimatedDuration
@property (nonatomic) CGFloat prevRunBusyTime; // ivar: _prevRunBusyTime
@property (nonatomic) CGFloat prevRunIdleTime; // ivar: _prevRunIdleTime
@property (nonatomic) NSUInteger prevRunsCellRxBytes; // ivar: _prevRunsCellRxBytes
@property (nonatomic) NSUInteger prevRunsCellTxBytes; // ivar: _prevRunsCellTxBytes
@property (readonly, nonatomic) NSUInteger prevRunsRxBytes;
@property (readonly, nonatomic) NSUInteger prevRunsTxBytes;
@property (nonatomic) NSUInteger prevRunsWiFiRxBytes; // ivar: _prevRunsWiFiRxBytes
@property (nonatomic) NSUInteger prevRunsWiFiTxBytes; // ivar: _prevRunsWiFiTxBytes
@property (nonatomic) CGFloat quarantineStartTime; // ivar: _quarantineStartTime
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (nonatomic) NSUInteger thisRunStartCellRxBytes; // ivar: _thisRunStartCellRxBytes
@property (nonatomic) NSUInteger thisRunStartCellTxBytes; // ivar: _thisRunStartCellTxBytes
@property (readonly, nonatomic) NSUInteger thisRunStartRxBytes;
@property (nonatomic) CGFloat thisRunStartTime; // ivar: _thisRunStartTime
@property (readonly, nonatomic) NSUInteger thisRunStartTxBytes;
@property (nonatomic) NSUInteger thisRunStartWiFiRxBytes; // ivar: _thisRunStartWiFiRxBytes
@property (nonatomic) NSUInteger thisRunStartWiFiTxBytes; // ivar: _thisRunStartWiFiTxBytes


-(id)coreMediaDownloadStateToString:(unsigned int)arg0 ;
-(id)description;


@end


#endif