// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSMETRICSAPPINSTALLEVENT_H
#define SSMETRICSAPPINSTALLEVENT_H

@class NSString;


#import "SSMetricsMutableEvent.h"

@interface SSMetricsAppInstallEvent : SSMetricsMutableEvent

@property (retain, nonatomic) NSString *buildVersion;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *hardwareType;
@property (retain, nonatomic) NSString *installError;
@property (nonatomic) NSUInteger installStatus;
@property (nonatomic) NSUInteger installType;
@property (nonatomic) NSInteger jobID;


+(NSUInteger)_installStatusForString:(id)arg0 ;
+(NSUInteger)_installTypeForString:(id)arg0 ;
+(id)_stringForInstallStatus:(NSUInteger)arg0 ;
+(id)_stringForInstallType:(NSUInteger)arg0 ;
-(BOOL)requiresDiagnosticSendingPermission;
-(id)description;
-(id)init;


@end


#endif