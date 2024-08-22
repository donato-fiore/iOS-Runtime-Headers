// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OSACRACKSHOTREPORT_H
#define OSACRACKSHOTREPORT_H

@class NSString, NSDictionary;


#import "OSAStackShotReport.h"

@interface OSACrackShotReport : OSAStackShotReport {
    int _cpuType;
    NSString *_procPath;
    NSString *_bundleID;
    NSDictionary *_termination_info;
}


@property (readonly) BOOL isSnapshotDisabled; // ivar: _isSnapshotDisabled
@property (retain, nonatomic) NSDictionary *spindump; // ivar: _spindump


-(id)additionalIPSMetadata;
-(id)decode_cpuType;
-(id)decode_reason:(struct exit_reason_snapshot *)arg0 reason:(id)arg1 ;
-(id)initForPid:(int)arg0 exitSnapshot:(struct exit_reason_snapshot *)arg1 reason:(id)arg2 ;
-(id)initWithPid:(int)arg0 procName:(id)arg1 bundleID:(id)arg2 exitSnapshot:(struct exit_reason_snapshot *)arg3 reason:(id)arg4 ;
-(id)problemType;
-(id)reportNamePrefix;
-(void)generateLogAtLevel:(BOOL)arg0 withBlock:(id)arg1 ;


@end


#endif