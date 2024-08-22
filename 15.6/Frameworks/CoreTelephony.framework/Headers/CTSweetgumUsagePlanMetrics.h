// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CTSWEETGUMUSAGEPLANMETRICS_H
#define CTSWEETGUMUSAGEPLANMETRICS_H

@class NSDate, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CTSweetgumUsagePlanItemData.h"
#import "CTSweetgumUsagePlanItemMessages.h"
#import "CTSweetgumUsagePlanItemVoice.h"

@interface CTSweetgumUsagePlanMetrics : NSObject <NSSecureCoding>



@property (nonatomic) BOOL currentUsedPlan; // ivar: _currentUsedPlan
@property (retain, nonatomic) CTSweetgumUsagePlanItemData *dataUsage; // ivar: _dataUsage
@property (retain, nonatomic) NSDate *lastUpdatedAt; // ivar: _lastUpdatedAt
@property (retain, nonatomic) CTSweetgumUsagePlanItemMessages *messages; // ivar: _messages
@property (nonatomic) NSInteger planCategory; // ivar: _planCategory
@property (retain, nonatomic) NSString *planLabel; // ivar: _planLabel
@property (retain, nonatomic) NSString *remainingBalance; // ivar: _remainingBalance
@property (nonatomic) BOOL throttled; // ivar: _throttled
@property (retain, nonatomic) CTSweetgumUsagePlanItemVoice *voice; // ivar: _voice


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif