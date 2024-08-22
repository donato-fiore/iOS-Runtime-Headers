// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSMETRICSMEDIAEVENT_H
#define SSMETRICSMEDIAEVENT_H

@class NSNumber, NSString;


#import "SSMetricsBaseEvent.h"

@interface SSMetricsMediaEvent : SSMetricsBaseEvent

@property (retain, nonatomic) NSNumber *itemIdentifier;
@property (retain, nonatomic) NSString *locationDescription;
@property (retain, nonatomic) NSString *mediaEventType;
@property (retain, nonatomic) NSString *mediaURL;


-(id)init;
-(void)setLocationWithEventLocations:(id)arg0 ;


@end


#endif