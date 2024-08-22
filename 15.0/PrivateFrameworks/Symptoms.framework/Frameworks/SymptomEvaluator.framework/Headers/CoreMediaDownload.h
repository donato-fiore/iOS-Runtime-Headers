// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COREMEDIADOWNLOAD_H
#define COREMEDIADOWNLOAD_H


#import <Foundation/Foundation.h>


@interface CoreMediaDownload : NSObject

@property (nonatomic) unsigned int downloadState; // ivar: _downloadState
@property (nonatomic) CGFloat estimatedDuration; // ivar: _estimatedDuration
@property (nonatomic) CGFloat prevRunBusyTime; // ivar: _prevRunBusyTime
@property (nonatomic) CGFloat prevRunIdleTime; // ivar: _prevRunIdleTime
@property (nonatomic) NSUInteger prevRunsIfTypeRxBytes; // ivar: _prevRunsIfTypeRxBytes
@property (nonatomic) NSUInteger prevRunsIfTypeTxBytes; // ivar: _prevRunsIfTypeTxBytes
@property (nonatomic) CGFloat quarantineStartTime; // ivar: _quarantineStartTime
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (nonatomic) CGFloat thisRunStartTime; // ivar: _thisRunStartTime
@property (nonatomic) NSUInteger thisRunStartfTypeRxBytes; // ivar: _thisRunStartfTypeRxBytes
@property (nonatomic) NSUInteger thisRunStartfTypeTxBytes; // ivar: _thisRunStartfTypeTxBytes


-(id)coreMediaDownloadStateToString:(unsigned int)arg0 ;
-(id)description;


@end


#endif