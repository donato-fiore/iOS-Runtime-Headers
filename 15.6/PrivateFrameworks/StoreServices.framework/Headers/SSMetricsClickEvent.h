// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSMETRICSCLICKEVENT_H
#define SSMETRICSCLICKEVENT_H

@class NSString, NSNumber;


#import "SSMetricsBaseEvent.h"

@interface SSMetricsClickEvent : SSMetricsBaseEvent

@property (retain, nonatomic) id *actionDetails;
@property (retain, nonatomic) NSString *actionType;
@property (retain, nonatomic) id *impressions;
@property (retain, nonatomic) NSString *locationDescription;
@property (retain, nonatomic) NSNumber *positionX;
@property (retain, nonatomic) NSNumber *positionY;
@property (retain, nonatomic) NSString *targetIdentifier;
@property (retain, nonatomic) NSString *targetType;
@property (retain, nonatomic) NSString *targetURL;


-(id)description;
-(id)init;
-(void)setLocationWithEventLocations:(id)arg0 ;


@end


#endif