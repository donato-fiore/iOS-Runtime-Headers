// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSBIOMEEVENTSPROVIDER_H
#define TPSBIOMEEVENTSPROVIDER_H



#import "TPSEventsProvider.h"

@interface TPSBiomeEventsProvider : TPSEventsProvider



+(NSUInteger)_limitForContextualBiomeEvent:(id)arg0 ;
+(id)_eventSinceDateForContextualEvent:(id)arg0 ;
-(void)_processProviderResults:(id)arg0 bookmark:(id)arg1 forEvent:(id)arg2 ;
-(void)deregisterEventsForCallback:(id)arg0 ;
-(void)queryEvents:(id)arg0 ;
-(void)registerEventsForCallback:(id)arg0 ;
-(void)registerEventsForWakingCallback:(id)arg0 clientIdentifier:(id)arg1 ;


@end


#endif