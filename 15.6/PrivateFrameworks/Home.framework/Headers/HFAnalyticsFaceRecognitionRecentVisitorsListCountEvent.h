// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFANALYTICSFACERECOGNITIONRECENTVISITORSLISTCOUNTEVENT_H
#define HFANALYTICSFACERECOGNITIONRECENTVISITORSLISTCOUNTEVENT_H

@class NSNumber;


#import "HFAnalyticsEvent.h"

@interface HFAnalyticsFaceRecognitionRecentVisitorsListCountEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *clusteredNoNamePersonCount; // ivar: _clusteredNoNamePersonCount
@property (retain, nonatomic) NSNumber *faceCropCount; // ivar: _faceCropCount
@property (retain, nonatomic) NSNumber *unknownFaceCropCount; // ivar: _unknownFaceCropCount
@property (retain, nonatomic) NSNumber *unknownPersonCountTotal; // ivar: _unknownPersonCountTotal


-(id)initWithData:(id)arg0 ;
-(id)payload;


@end


#endif