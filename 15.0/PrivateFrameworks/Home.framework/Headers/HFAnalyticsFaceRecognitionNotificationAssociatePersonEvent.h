// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFANALYTICSFACERECOGNITIONNOTIFICATIONASSOCIATEPERSONEVENT_H
#define HFANALYTICSFACERECOGNITIONNOTIFICATIONASSOCIATEPERSONEVENT_H

@class NSNumber;


#import "HFAnalyticsEvent.h"

@interface HFAnalyticsFaceRecognitionNotificationAssociatePersonEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *openURLSuccess; // ivar: _openURLSuccess
@property (retain, nonatomic) NSNumber *unknownPersonsTagCount; // ivar: _unknownPersonsTagCount


-(id)initWithData:(id)arg0 ;
-(id)payload;


@end


#endif