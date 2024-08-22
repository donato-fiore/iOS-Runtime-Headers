// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMANALYTICSVISIONSESSION_H
#define CAMANALYTICSVISIONSESSION_H

@class NSMutableSet;


#import "CAMAnalyticsEvent.h"

@interface CAMAnalyticsVisionSession : CAMAnalyticsEvent

@property (readonly, nonatomic, getter=_isMRCDetectionEnabled) BOOL _MRCDetectionEnabled; // ivar: __MRCDetectionEnabled
@property (nonatomic, setter=_setAppClipButtonPressCount:) NSUInteger _appClipButtonPressCount; // ivar: __appClipButtonPressCount
@property (nonatomic, setter=_setAppClipPillPressCount:) NSUInteger _appClipPillPressCount; // ivar: __appClipPillPressCount
@property (nonatomic, setter=_setMaxAppClipCodeCount:) NSUInteger _maxAppClipCodeCount; // ivar: __maxAppClipCodeCount
@property (nonatomic, setter=_setMaxQRCodeCount:) NSUInteger _maxQRCodeCount; // ivar: __maxQRCodeCount
@property (nonatomic, setter=_setMaxTextRegionCount:) NSUInteger _maxTextRegionCount; // ivar: __maxTextRegionCount
@property (retain, nonatomic, setter=_setPressedMRCTypes:) NSMutableSet *_pressedQRTypes; // ivar: __pressedQRTypes
@property (nonatomic, setter=_setQRButtonPressCount:) NSUInteger _qrButtonPressCount; // ivar: __qrButtonPressCount
@property (nonatomic, setter=_setQRPillPressCount:) NSUInteger _qrPillPressCount; // ivar: __qrPillPressCount
@property (nonatomic, setter=_setStartTime:) CGFloat _startTime; // ivar: __startTime
@property (nonatomic, setter=_setTextButtonPressCount:) NSUInteger _textButtonPressCount; // ivar: __textButtonPressCount
@property (readonly, nonatomic, getter=_isTextDetectionEnabled) BOOL _textDetectionEnabled; // ivar: __textDetectionEnabled
@property (readonly, nonatomic) NSUInteger totalMRCInteractions;
@property (readonly, nonatomic) NSUInteger totalTextInteractions;


-(NSInteger)_bucketedCount:(NSInteger)arg0 ;
-(id)_analyticsValueForQRType:(NSInteger)arg0 ;
-(id)_analyticsValueForQRTypes:(id)arg0 ;
-(id)eventName;
-(id)initWithTextDetectionEnabled:(BOOL)arg0 MRCDetectionEnabled:(BOOL)arg1 ;
-(void)_countMRCTypeForAction:(id)arg0 ;
-(void)countButtonPressForMRC:(id)arg0 action:(id)arg1 ;
-(void)countObservedSignficantMRCs:(id)arg0 ;
-(void)countObservedSignficantTextRegionCount:(NSUInteger)arg0 ;
-(void)countPillPressForMRC:(id)arg0 action:(id)arg1 ;
-(void)countTextButtonPress;
-(void)publish;


@end


#endif