// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSPANALYTICSMANAGER_H
#define HKSPANALYTICSMANAGER_H


#import <Foundation/Foundation.h>

#import "HKSPAnalyticsStore.h"

@interface HKSPAnalyticsManager : NSObject

@property (retain, nonatomic) HKSPAnalyticsStore *analyticsStore; // ivar: _analyticsStore


+(BOOL)isDiagnosticDataSubmissionAllowed;
+(BOOL)isImproveHealthAndActivitySubmissionAllowed;
+(id)activePairedWatchProductType;
+(id)currentDeviceType;
-(id)initWithUserDefaults:(id)arg0 ;
-(void)trackEvent:(id)arg0 ;
-(void)trackEvents:(id)arg0 ;


@end


#endif