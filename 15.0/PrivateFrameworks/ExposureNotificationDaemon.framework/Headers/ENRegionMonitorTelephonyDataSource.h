// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ENREGIONMONITORTELEPHONYDATASOURCE_H
#define ENREGIONMONITORTELEPHONYDATASOURCE_H

@class ENRegionVisit, NSString;
@protocol ENCoreTelephonyUtilityObserver, ENRegionMonitorDataSource, OS_dispatch_queue, ENRegionMonitorSourceDelegate;

#import <Foundation/Foundation.h>

#import "ENCoreTelephonyUtility.h"

@interface ENRegionMonitorTelephonyDataSource : NSObject <ENCoreTelephonyUtilityObserver, ENRegionMonitorDataSource>



@property (copy, nonatomic) ENRegionVisit *cachedRegionVisit; // ivar: _cachedRegionVisit
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataSourceQueue; // ivar: _dataSourceQueue
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ENRegionMonitorSourceDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) ENCoreTelephonyUtility *telephonyUtility; // ivar: _telephonyUtility


-(id)currentRegionVisit;
-(id)initWithDelegate:(id)arg0 ;
-(void)mobileCountryCodeChanged:(id)arg0 withISOString:(id)arg1 ;
-(void)startMonitoring;
-(void)stopMonitoring;
-(void)telephonyUtility:(id)arg0 mobileCountryCodeChanged:(id)arg1 andCountryCodeISO:(id)arg2 ;


@end


#endif