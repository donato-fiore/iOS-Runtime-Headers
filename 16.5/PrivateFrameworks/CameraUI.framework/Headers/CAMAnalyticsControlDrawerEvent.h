// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMANALYTICSCONTROLDRAWEREVENT_H
#define CAMANALYTICSCONTROLDRAWEREVENT_H

@class NSMutableSet;


#import "CAMAnalyticsEvent.h"

@interface CAMAnalyticsControlDrawerEvent : CAMAnalyticsEvent

@property (readonly, nonatomic) NSInteger _captureMode; // ivar: __captureMode
@property (readonly, nonatomic) NSMutableSet *_changedControlTypes; // ivar: __changedControlTypes
@property (readonly, nonatomic) NSInteger _devicePosition; // ivar: __devicePosition
@property (nonatomic) NSInteger _dismissingControlType; // ivar: __dismissingControlType
@property (nonatomic) NSInteger _dismissingReason; // ivar: __dismissingReason
@property (nonatomic) CGFloat _duration; // ivar: __duration
@property (nonatomic) BOOL _hasDismissingControlType; // ivar: __hasDismissingControlType
@property (nonatomic) BOOL _hasOpeningControlType; // ivar: __hasOpeningControlType
@property (nonatomic) NSInteger _openingControlType; // ivar: __openingControlType
@property (readonly, nonatomic) NSInteger _openingReason; // ivar: __openingReason
@property (readonly, nonatomic) CGFloat _startTime; // ivar: __startTime


-(id)eventName;
-(id)initWithReason:(NSInteger)arg0 captureMode:(NSInteger)arg1 devicePosition:(NSInteger)arg2 ;
-(void)didChangeValueForControlType:(NSInteger)arg0 ;
-(void)dismissedControlDrawerWithReason:(NSInteger)arg0 ;
-(void)publish;
-(void)setDismissingControlType:(NSInteger)arg0 ;
-(void)setOpeningControlType:(NSInteger)arg0 ;


@end


#endif