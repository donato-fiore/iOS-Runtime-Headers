// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXDIGESTSETUPFLOWPROVIDER_H
#define ATXDIGESTSETUPFLOWPROVIDER_H


#import <Foundation/Foundation.h>

#import "ATXNotificationAndSuggestionDatastore.h"

@interface ATXDigestSetupFlowProvider : NSObject {
    ATXNotificationAndSuggestionDatastore *_datastore;
}


@property (nonatomic) BOOL containsMessageAndTimeSensitiveData; // ivar: _containsMessageAndTimeSensitiveData
@property (nonatomic) NSUInteger numDaysOfData; // ivar: _numDaysOfData


-(NSUInteger)numDaysSinceTimestamp:(CGFloat)arg0 ;
-(id)appsSortedByNumOfNotificationsGivenNumOfDays:(NSUInteger)arg0 ;
-(id)appsSortedByNumOfNotificationsUsingNotificationUsageStreamGivenNumOfDays:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithDatastore:(id)arg0 ;
-(void)addRemainingAppsWithNoNotificationVolume:(id)arg0 ;
-(void)numberOfActiveNotificationsWithCompletionHandler:(id)arg0 ;


@end


#endif