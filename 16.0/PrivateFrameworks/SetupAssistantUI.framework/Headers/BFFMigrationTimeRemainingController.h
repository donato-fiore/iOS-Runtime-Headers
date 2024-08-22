// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BFFMIGRATIONTIMEREMAININGCONTROLLER_H
#define BFFMIGRATIONTIMEREMAININGCONTROLLER_H

@class MBDeviceTransferConnectionInfo, NSDateComponentsFormatter, NSString, MBDeviceTransferProgress;


#import "BFFTimeRemainingController.h"

@interface BFFMigrationTimeRemainingController : BFFTimeRemainingController

@property (retain, nonatomic) MBDeviceTransferConnectionInfo *connectionInfo; // ivar: _connectionInfo
@property (retain, nonatomic) NSDateComponentsFormatter *elapsedDurationFormatter; // ivar: _elapsedDurationFormatter
@property (retain) NSString *internalProgressText; // ivar: _internalProgressText
@property (retain, nonatomic) MBDeviceTransferProgress *migrationProgress; // ivar: _migrationProgress


-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 ;
-(id)timeRemainingString:(CGFloat)arg0 ;
-(void)setDeviceConnectionInformation:(id)arg0 ;
-(void)setDeviceTransferProgress:(id)arg0 ;
-(void)updateProgressSubtext;


@end


#endif