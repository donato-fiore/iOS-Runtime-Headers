// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPOICATEGORYVISITDUETDATAPROVIDER_H
#define ATXPOICATEGORYVISITDUETDATAPROVIDER_H

@class ATXPOICategoryEventAggregator, ATXPOICategoryVisitDataProvider;


#import "ATXDuetDataProvider.h"

@interface ATXPOICategoryVisitDuetDataProvider : ATXDuetDataProvider {
    ATXPOICategoryEventAggregator *_streamAggregator;
    ATXPOICategoryVisitDataProvider *_dataProvider;
}




+(Class)supportedDuetEventClass;
+(NSInteger)supportedCoreDuetStream;
+(id)sharedInstance;
-(id)fetchEventsBetweenStartDate:(id)arg0 andEndDate:(id)arg1 withPredicates:(id)arg2 limit:(NSUInteger)arg3 ascending:(BOOL)arg4 ;
-(id)getCurrentVisit;
-(id)init;
-(void)subscribeToPOIChangesForCategory:(id)arg0 observer:(id)arg1 enterSelector:(SEL)arg2 exitSelector:(SEL)arg3 ;
-(void)unsubscribeToPOIChanges;


@end


#endif