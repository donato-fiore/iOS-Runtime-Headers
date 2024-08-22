// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFANALYTICSCAMERADIDFAILTOLOADPOSTERFRAMEEVENT_H
#define HFANALYTICSCAMERADIDFAILTOLOADPOSTERFRAMEEVENT_H

@class NSUUID, NSDate, NSString;


#import "HFAnalyticsEvent.h"

@interface HFAnalyticsCameraDidFailToLoadPosterFrameEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSUUID *cameraID; // ivar: _cameraID
@property (retain, nonatomic) NSUUID *clipID; // ivar: _clipID
@property (retain, nonatomic) NSDate *clipStartDate; // ivar: _clipStartDate
@property (nonatomic) NSInteger errorCode; // ivar: _errorCode
@property (retain, nonatomic) NSString *errorDomain; // ivar: _errorDomain
@property (nonatomic) CGFloat posterFrameTimeOffset; // ivar: _posterFrameTimeOffset


-(id)initWithData:(id)arg0 ;
-(id)payload;


@end


#endif