// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXANALYTICSREPORTINGCONTAINER_H
#define SXANALYTICSREPORTINGCONTAINER_H

@class NSString;
@protocol SXAnalyticsReportingContainer, SXAnalyticsReporting;

#import <Foundation/Foundation.h>


@interface SXAnalyticsReportingContainer : NSObject <SXAnalyticsReportingContainer>



@property (readonly, nonatomic) NSObject<SXAnalyticsReporting> *analyticsReporting; // ivar: _analyticsReporting
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)registerAnalyticsReporting:(id)arg0 ;


@end


#endif