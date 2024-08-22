// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCNOTIFICATIONSUMMARYBUILDER_H
#define NCNOTIFICATIONSUMMARYBUILDER_H

@class NCNotificationRequest, NSMutableOrderedSet, NSMutableDictionary, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface NCNotificationSummaryBuilder : NSObject {
    NCNotificationRequest *_leadingNotificationRequest;
    NSMutableOrderedSet *_formatStrings;
    NSMutableDictionary *_formatStringsCounts;
    NSMutableOrderedSet *_arguments;
    NSMutableDictionary *_argumentsCounts;
    NSUInteger _defaultFormatsCount;
    NSUInteger _emptyArgumentsCount;
}


@property (readonly, nonatomic) NSArray *notificationRequests; // ivar: _notificationRequests
@property (readonly, copy, nonatomic) NSString *summaryText; // ivar: _summaryText


-(NSUInteger)_summaryNotificationsCount;
-(id)_buildSummaryText;
-(id)_defaultLocalizedSummaryWithNotificationsCount:(NSUInteger)arg0 ;
-(id)_defaultLocalizedSummaryWithNotificationsCount:(NSUInteger)arg0 arguments:(id)arg1 ;
-(id)_filteredArgumentsArrayWithArguments:(id)arg0 ;
-(id)_formatListWithArguments:(id)arg0 ;
-(id)_formatListWithArguments:(id)arg0 truncated:(BOOL)arg1 truncatedArgumentsCount:(*NSUInteger)arg2 ;
-(id)_localizedSummaryWithFormat:(id)arg0 notificationsCount:(NSUInteger)arg1 arguments:(id)arg2 ;
-(id)_localizedSummaryWithFormats:(id)arg0 andCounts:(id)arg1 ;
-(id)description;
-(void)_addNotificationRequest:(id)arg0 ;
-(void)_insertString:(id)arg0 intoSequence:(id)arg1 withCounters:(id)arg2 ;
-(void)_updateSummaryText;
-(void)updateWithNotificationRequests:(id)arg0 ;


@end


#endif