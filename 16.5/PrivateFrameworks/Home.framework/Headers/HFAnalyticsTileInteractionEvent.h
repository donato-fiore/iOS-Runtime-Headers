// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFANALYTICSTILEINTERACTIONEVENT_H
#define HFANALYTICSTILEINTERACTIONEVENT_H

@class NSString, NSNumber;


#import "HFAnalyticsEvent.h"

@interface HFAnalyticsTileInteractionEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSString *contextType; // ivar: _contextType
@property (nonatomic) NSUInteger interactionType; // ivar: _interactionType
@property (nonatomic) BOOL isActionSetItem; // ivar: _isActionSetItem
@property (nonatomic) BOOL isCameraItem; // ivar: _isCameraItem
@property (nonatomic) BOOL isRoomDashboard; // ivar: _isRoomDashboard
@property (nonatomic) BOOL isServiceLikeItem; // ivar: _isServiceLikeItem
@property (nonatomic) BOOL isStatusItem; // ivar: _isStatusItem
@property (retain, nonatomic) NSString *itemClassName; // ivar: _itemClassName
@property (nonatomic) NSInteger itemPrimaryState; // ivar: _itemPrimaryState
@property (nonatomic) NSInteger itemPriority; // ivar: _itemPriority
@property (nonatomic) NSUInteger numberOfRepresentedHomeKitObjects; // ivar: _numberOfRepresentedHomeKitObjects
@property (retain, nonatomic) NSString *processName; // ivar: _processName
@property (retain, nonatomic) NSString *sourceViewControllerClassName; // ivar: _sourceViewControllerClassName
@property (retain, nonatomic) NSString *tileInteractionArea; // ivar: _tileInteractionArea
@property (nonatomic) NSNumber *tileIsEditing; // ivar: _tileIsEditing


+(NSUInteger)_numberOfRepresentedHomeKitObjectsForItem:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)payload;


@end


#endif