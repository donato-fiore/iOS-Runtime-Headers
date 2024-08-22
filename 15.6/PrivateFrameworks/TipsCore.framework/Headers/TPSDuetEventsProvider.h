// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSDUETEVENTSPROVIDER_H
#define TPSDUETEVENTSPROVIDER_H



#import "TPSEventsProvider.h"
#import "TPSDuetDataProvider.h"

@interface TPSDuetEventsProvider : TPSEventsProvider {
    TPSDuetDataProvider *_duetDataProvider;
}




+(BOOL)_shouldQueryRemoteDevicesForEvent:(id)arg0 ;
+(NSUInteger)_limitForDeliveryDuetEvent:(id)arg0 ;
+(id)_eventSinceDateForContextualEvent:(id)arg0 ;
+(id)_predicateForDeliveryDuetEvent:(id)arg0 stateResults:(id)arg1 ;
+(id)_predicateForDeliveryDuetEventUserInfo:(id)arg0 ;
-(id)_duetRegistrationIDForEvent:(id)arg0 ;
-(id)_duetWakingRegistrationIDForEvent:(id)arg0 ;
-(id)_resolveGroupByKeyPathsForEvent:(id)arg0 ;
-(id)init;
-(id)initWithDuetDataProvider:(id)arg0 ;
-(void)_deregisterToGetNotifiedWithEvents:(id)arg0 ;
-(void)_processProviderResults:(id)arg0 forEvent:(id)arg1 ;
-(void)_queryDuetWithEvent:(id)arg0 limit:(NSUInteger)arg1 stateResults:(id)arg2 completion:(id)arg3 ;
-(void)_queryDuetWithEvents:(id)arg0 ;
-(void)_registerToGetNotifiedWithEvents:(id)arg0 clientIdentifier:(id)arg1 ;
-(void)deregisterAllEventsForCallback;
-(void)deregisterEventsForCallback:(id)arg0 ;
-(void)queryEvents:(id)arg0 ;
-(void)registerEventsForCallback:(id)arg0 ;
-(void)registerEventsForWakingCallback:(id)arg0 clientIdentifier:(id)arg1 ;


@end


#endif