// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFANALYTICSFACERECOGNITIONCORRECTIONFROMNOTIFICATIONEVENT_H
#define HFANALYTICSFACERECOGNITIONCORRECTIONFROMNOTIFICATIONEVENT_H

@class NSNumber, NSString;


#import "HFAnalyticsEvent.h"

@interface HFAnalyticsFaceRecognitionCorrectionFromNotificationEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *errorCode; // ivar: _errorCode
@property (retain, nonatomic) NSString *errorDomain; // ivar: _errorDomain


-(id)initWithData:(id)arg0 ;
-(id)payload;


@end


#endif