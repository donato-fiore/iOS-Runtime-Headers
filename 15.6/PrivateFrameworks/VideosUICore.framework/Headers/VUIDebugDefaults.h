// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIDEBUGDEFAULTS_H
#define VUIDEBUGDEFAULTS_H


#import <Foundation/Foundation.h>


@interface VUIDebugDefaults : NSObject

@property (nonatomic) BOOL debugRefreshEventLogEnabled; // ivar: _debugRefreshEventLogEnabled
@property (nonatomic) BOOL debugUIEnabled; // ivar: _debugUIEnabled
@property (nonatomic) BOOL enableDemoMode; // ivar: _enableDemoMode
@property (nonatomic) BOOL gdprFirstTimeFlowEnabled; // ivar: _gdprFirstTimeFlowEnabled
@property (nonatomic) BOOL gdprWhatsNewFlowEnabled; // ivar: _gdprWhatsNewFlowEnabled
@property (nonatomic) BOOL metricsExpandedLoggingEnabled; // ivar: _metricsExpandedLoggingEnabled
@property (nonatomic) BOOL metricsLogLocationAndImpressions; // ivar: _metricsLogLocationAndImpressions
@property (nonatomic) BOOL metricsLoggingEnabled; // ivar: _metricsLoggingEnabled
@property (nonatomic) BOOL metricsPageRenderLoggingEnabled; // ivar: _metricsPageRenderLoggingEnabled


+(id)sharedInstance;
-(id)init;


@end


#endif