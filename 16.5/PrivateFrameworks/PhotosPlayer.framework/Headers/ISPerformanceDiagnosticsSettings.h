// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISPERFORMANCEDIAGNOSTICSSETTINGS_H
#define ISPERFORMANCEDIAGNOSTICSSETTINGS_H



#import "ISSettings.h"

@interface ISPerformanceDiagnosticsSettings : ISSettings

@property (nonatomic) BOOL shouldTracePerformance; // ivar: _shouldTracePerformance


+(id)settingsControllerModule;
+(id)sharedInstance;
-(void)setDefaultValues;


@end


#endif