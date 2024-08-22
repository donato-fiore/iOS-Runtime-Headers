// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FEATURESTORENLUREQUESTREADER_H
#define FEATURESTORENLUREQUESTREADER_H


#import <Foundation/Foundation.h>


@interface FeatureStoreNluRequestReader : NSObject



+(id)getEvents;
+(id)getEventsFromDate:(id)arg0 ;
+(id)getEventsWithInteractionIds:(id)arg0 ;
+(id)getEventsWithInteractionIdsFromDate:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;


@end


#endif