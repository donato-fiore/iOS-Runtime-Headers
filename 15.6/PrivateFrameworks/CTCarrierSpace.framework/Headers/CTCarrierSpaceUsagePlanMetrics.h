// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CTCARRIERSPACEUSAGEPLANMETRICS_H
#define CTCARRIERSPACEUSAGEPLANMETRICS_H

@class NSDate, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CTCarrierSpaceUsagePlanItemData.h"
#import "CTCarrierSpaceUsagePlanItemMessages.h"
#import "CTCarrierSpaceUsagePlanItemVoice.h"

@interface CTCarrierSpaceUsagePlanMetrics : NSObject <NSSecureCoding>



@property (nonatomic) BOOL currentUsedPlan; // ivar: _currentUsedPlan
@property (retain, nonatomic) CTCarrierSpaceUsagePlanItemData *dataUsage; // ivar: _dataUsage
@property (retain, nonatomic) NSDate *lastUpdatedAt; // ivar: _lastUpdatedAt
@property (retain, nonatomic) CTCarrierSpaceUsagePlanItemMessages *messages; // ivar: _messages
@property (nonatomic) NSInteger planCategory; // ivar: _planCategory
@property (retain, nonatomic) NSString *planLabel; // ivar: _planLabel
@property (retain, nonatomic) NSString *remainingBalance; // ivar: _remainingBalance
@property (nonatomic) BOOL throttled; // ivar: _throttled
@property (retain, nonatomic) CTCarrierSpaceUsagePlanItemVoice *voice; // ivar: _voice


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif