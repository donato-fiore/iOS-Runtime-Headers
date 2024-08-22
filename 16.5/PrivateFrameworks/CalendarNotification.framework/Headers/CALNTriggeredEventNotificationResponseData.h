// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALNTRIGGEREDEVENTNOTIFICATIONRESPONSEDATA_H
#define CALNTRIGGEREDEVENTNOTIFICATIONRESPONSEDATA_H

@class EKTravelEngineHypothesis, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CALNTriggeredEventNotificationResponseData : NSObject <NSSecureCoding>



@property (readonly, nonatomic) EKTravelEngineHypothesis *hypothesis; // ivar: _hypothesis
@property (readonly, copy, nonatomic) NSDate *lastFireTimeOfAlertOffsetFromTravelTime; // ivar: _lastFireTimeOfAlertOffsetFromTravelTime


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHypothesis:(id)arg0 lastFireTimeOfAlertOffsetFromTravelTime:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif