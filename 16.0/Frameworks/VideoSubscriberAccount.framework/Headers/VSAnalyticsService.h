// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSANALYTICSSERVICE_H
#define VSANALYTICSSERVICE_H

@class NSString;
@protocol VSAnalyticsServiceProtocol;


#import "VSServiceListener.h"

@interface VSAnalyticsService : VSServiceListener <VSAnalyticsServiceProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)recordFederatedPunchoutEventWithError:(id)arg0 metadata:(id)arg1 ;
-(void)recordNowPlayingBrokenEventWithBundleID:(id)arg0 ;


@end


#endif