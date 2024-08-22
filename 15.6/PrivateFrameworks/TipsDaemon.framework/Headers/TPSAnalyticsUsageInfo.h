// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSANALYTICSUSAGEINFO_H
#define TPSANALYTICSUSAGEINFO_H

@class NSDate, NSString, TPSContextualDuetEvent, NSPredicate;

#import <Foundation/Foundation.h>


@interface TPSAnalyticsUsageInfo : NSObject

@property (nonatomic) NSUInteger desiredOutcomeCount; // ivar: _desiredOutcomeCount
@property (retain, nonatomic) NSDate *firstShownDate; // ivar: _firstShownDate
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL overrideHoldout; // ivar: _overrideHoldout
@property (copy, nonatomic) TPSContextualDuetEvent *usageEvent; // ivar: _usageEvent
@property (retain, nonatomic) NSPredicate *usagePredicate; // ivar: _usagePredicate




@end


#endif