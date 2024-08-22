// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCUSERNOTIFICATIONPERSONALIZERRESULT_H
#define FCUSERNOTIFICATIONPERSONALIZERRESULT_H

@protocol FCTodayPrivateData;

#import <Foundation/Foundation.h>

#import "FCFeedPersonalizedItems.h"

@interface FCUserNotificationPersonalizerResult : NSObject

@property (readonly, nonatomic) CGFloat baselineClickThroughRate; // ivar: _baselineClickThroughRate
@property (readonly, nonatomic) FCFeedPersonalizedItems *items; // ivar: _items
@property (readonly, nonatomic) NSObject<FCTodayPrivateData> *todayData; // ivar: _todayData


-(id)initWithItems:(id)arg0 baselineClickThroughRate:(CGFloat)arg1 todayData:(id)arg2 ;


@end


#endif