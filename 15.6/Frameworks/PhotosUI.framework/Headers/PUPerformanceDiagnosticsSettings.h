// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPERFORMANCEDIAGNOSTICSSETTINGS_H
#define PUPERFORMANCEDIAGNOSTICSSETTINGS_H

@class PXSettings;



@interface PUPerformanceDiagnosticsSettings : PXSettings

@property (nonatomic) CGFloat scrollTestCPUSustainDuration; // ivar: _scrollTestCPUSustainDuration
@property (nonatomic) CGFloat scrollTestCPUWarmupDuration; // ivar: _scrollTestCPUWarmupDuration
@property (nonatomic) CGFloat scrollTestRampUpDuration; // ivar: _scrollTestRampUpDuration
@property (nonatomic) BOOL shouldTracePerformance; // ivar: _shouldTracePerformance


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif