// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXVIDEOCOMPONENTANALYTICSREPORTING_H
#define SXVIDEOCOMPONENTANALYTICSREPORTING_H

@class NSString;
@protocol SXAnalyticsReporting;

#import <Foundation/Foundation.h>

#import "SXVideoComponent.h"

@interface SXVideoComponentAnalyticsReporting : NSObject <SXAnalyticsReporting>



@property (readonly, weak, nonatomic) NSObject<SXAnalyticsReporting> *analyticsReporting; // ivar: _analyticsReporting
@property (readonly, nonatomic) SXVideoComponent *component; // ivar: _component
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithComponent:(id)arg0 analyticsProviding:(id)arg1 ;
-(void)reportEvent:(id)arg0 ;


@end


#endif