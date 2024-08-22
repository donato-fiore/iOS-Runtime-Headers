// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXSETALARMTIMEOFDAYDATASOURCE_H
#define ATXSETALARMTIMEOFDAYDATASOURCE_H

@protocol _DKKnowledgeQuerying;

#import <Foundation/Foundation.h>

#import "ATXHeuristicDevice.h"

@interface ATXSetAlarmTimeOfDayDataSource : NSObject {
    ATXHeuristicDevice *_device;
    id<_DKKnowledgeQuerying> *_duetStore;
}




+(id)medianFrom:(id)arg0 ;
+(id)timeOfDayFromDonations:(id)arg0 ;
-(id)_recentIntentDonationsForBundleId:(id)arg0 limit:(NSUInteger)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(void)alarmTimeOfDay:(id)arg0 ;


@end


#endif