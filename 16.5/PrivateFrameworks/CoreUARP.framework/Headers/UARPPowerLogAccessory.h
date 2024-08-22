// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UARPPOWERLOGACCESSORY_H
#define UARPPOWERLOGACCESSORY_H

@class NSString, NSUUID;
@protocol OS_dispatch_queue, OS_os_log, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface UARPPowerLogAccessory : NSObject {
    NSString *_modelNumber;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_os_log> *_log;
    NSObject<OS_dispatch_source> *_stagingWindowTimer;
    NSInteger _stagingWindowTimerIntervalNS;
    unsigned int _stagingWindowStartOffset;
    BOOL _stagingWindowStartOffsetInitialUpdateComplete;
    unsigned int _stagingWindowBytesTransferred;
    NSString *_stagingActiveFirmwareVersion;
    NSString *_stagingStagingFirmwareVersion;
}


@property (readonly) BOOL reachable; // ivar: _reachable
@property (readonly) BOOL stagingInProgress; // ivar: _stagingInProgress
@property (readonly) NSUUID *uuid; // ivar: _uuid


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithModelNumber:(id)arg0 uuid:(id)arg1 stagingWindowPeriodSeconds:(unsigned int)arg2 ;
-(void)dealloc;
-(void)resetStagingWindowStartOffset;
-(void)setAssetOfferedWithVersion:(id)arg0 activeFirmwareVersion:(id)arg1 ;
-(void)setStagingCompleteForStagedFirmareVersion:(id)arg0 activeFirmareVersion:(id)arg1 status:(NSUInteger)arg2 ;
-(void)setStagingWindowStartOffset:(unsigned int)arg0 ;
-(void)stagingStopped;
-(void)stagingWindowTimeFired;
-(void)startStagingWindowTimer;
-(void)updateStagingProgressWithRequestedOffset:(unsigned int)arg0 requestedLength:(unsigned int)arg1 ;


@end


#endif