// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSHAREREDEMPTIONANALYTICSREPORTER_H
#define PKSHAREREDEMPTIONANALYTICSREPORTER_H



#import "PKSharingAnalyticsReporter.h"

@interface PKShareRedemptionAnalyticsReporter : PKSharingAnalyticsReporter

@property (nonatomic) NSInteger accessPassType; // ivar: _accessPassType


-(id)init;
-(id)initWithSessionToken:(id)arg0 ;
-(void)_sendEventForPage:(NSUInteger)arg0 button:(NSUInteger)arg1 eventType:(id)arg2 specifics:(id)arg3 ;
-(void)sendAuthenticationEventForSuccess:(BOOL)arg0 specifics:(id)arg1 ;
-(void)sendEvent:(id)arg0 ;
-(void)sendEventForPage:(NSUInteger)arg0 button:(NSUInteger)arg1 specifics:(id)arg2 ;
-(void)sendEventForPage:(NSUInteger)arg0 error:(id)arg1 specifics:(id)arg2 ;
-(void)sendEventForPage:(NSUInteger)arg0 specifics:(id)arg1 ;


@end


#endif