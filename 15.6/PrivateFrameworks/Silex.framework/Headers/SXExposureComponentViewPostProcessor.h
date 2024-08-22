// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXEXPOSURECOMPONENTVIEWPOSTPROCESSOR_H
#define SXEXPOSURECOMPONENTVIEWPOSTPROCESSOR_H

@class NSString, NSMapTable;
@protocol SXComponentViewPostProcessor, SXAnalyticsReportingProvider, SXComponentExposureMonitor;

#import <Foundation/Foundation.h>


@interface SXExposureComponentViewPostProcessor : NSObject <SXComponentViewPostProcessor>



@property (readonly, nonatomic) NSObject<SXAnalyticsReportingProvider> *analyticsReporterProvider; // ivar: _analyticsReporterProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMapTable *exposedEvents; // ivar: _exposedEvents
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXComponentExposureMonitor> *monitor; // ivar: _monitor
@property (readonly) Class superclass;


-(id)initWithExposureMonitor:(id)arg0 analyticsReportingProvider:(id)arg1 ;
-(void)processComponent:(id)arg0 view:(id)arg1 ;


@end


#endif