// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSPANALYTICSMANAGER_H
#define HKSPANALYTICSMANAGER_H


#import <Foundation/Foundation.h>

#import "HKSPAnalyticsStore.h"

@interface HKSPAnalyticsManager : NSObject

@property (copy, nonatomic) id *analyticsEventConsumer; // ivar: _analyticsEventConsumer
@property (retain, nonatomic) HKSPAnalyticsStore *analyticsStore; // ivar: _analyticsStore
@property (copy, nonatomic) id *ihaOptInStatusProvider; // ivar: _ihaOptInStatusProvider


+(BOOL)isDiagnosticDataSubmissionAllowed;
+(id)activePairedWatchProductType;
+(id)currentDeviceType;
-(BOOL)isImproveHealthAndActivitySubmissionAllowed;
-(id)initWithUserDefaults:(id)arg0 ;
// -(id)initWithUserDefaults:(id)arg0 ihaOptInStatusProvider:(id)arg1 analyticsEventConsumer:(unk)arg2  ;
-(void)trackEvent:(id)arg0 ;
-(void)trackEvents:(id)arg0 ;


@end


#endif