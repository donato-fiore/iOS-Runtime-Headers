// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPHOTOBROWSERTITLEVIEWCONTROLLER_H
#define PUPHOTOBROWSERTITLEVIEWCONTROLLER_H

@class NSString, PLDateRangeFormatter, NSDateComponentsFormatter, UITapGestureRecognizer, NSDate, UIColor, UIView;
@protocol PUPhotoBrowserTitleViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface PUPhotoBrowserTitleViewController : NSObject {
    ? _delegateFlags;
}


@property (retain, nonatomic, setter=_setDayDescription:) NSString *_dayDescription; // ivar: __dayDescription
@property (readonly, nonatomic) PLDateRangeFormatter *_dayFormatter; // ivar: __dayFormatter
@property (nonatomic, setter=_setPerformingChanges:) BOOL _isPerformingChanges; // ivar: __isPerformingChanges
@property (nonatomic, setter=_setUpdating:) BOOL _isUpdating; // ivar: __isUpdating
@property (nonatomic, setter=_setNeedsUpdateDayAndTimeDescriptions:) BOOL _needsUpdateDayAndTimeDescriptions; // ivar: __needsUpdateDayAndTimeDescriptions
@property (nonatomic, setter=_setNeedsUpdateGestureRecognizers:) BOOL _needsUpdateGestureRecognizers; // ivar: __needsUpdateGestureRecognizers
@property (nonatomic, setter=_setNeedsUpdateLabels:) BOOL _needsUpdateLabels; // ivar: __needsUpdateLabels
@property (nonatomic, setter=_setNeedsUpdatePlayClockDescription:) BOOL _needsUpdatePlayClockDescription; // ivar: __needsUpdatePlayClockDescription
@property (retain, nonatomic, setter=_setPlayClockDescription:) NSString *_playClockDescription; // ivar: __playClockDescription
@property (readonly, nonatomic) NSDateComponentsFormatter *_playClockFormatter; // ivar: __playClockFormatter
@property (retain, nonatomic, setter=_setTapGestureRecognizer:) UITapGestureRecognizer *_tapGestureRecognizer; // ivar: __tapGestureRecognizer
@property (retain, nonatomic, setter=_setTimeDescription:) NSString *_timeDescription; // ivar: __timeDescription
@property (readonly, nonatomic) PLDateRangeFormatter *_timeFormatter; // ivar: __timeFormatter
@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (nonatomic) ? currentPlaybackTime; // ivar: _currentPlaybackTime
@property (weak, nonatomic) NSObject<PUPhotoBrowserTitleViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSString *geoDescription; // ivar: _geoDescription
@property (nonatomic) ? playbackDuration; // ivar: _playbackDuration
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (nonatomic, getter=isTappable) BOOL tappable; // ivar: _tappable
@property (retain, nonatomic) UIColor *textColor;
@property (readonly, copy, nonatomic) NSString *title;
@property (nonatomic, getter=isUsingCompactTitleView) BOOL usingCompactTitleView; // ivar: _usingCompactTitleView
@property (readonly, nonatomic) UIView *view; // ivar: _view


-(BOOL)_needsUpdate;
-(id)init;
-(void)_assertInsideChangeBlock;
-(void)_assertInsideUpdate;
-(void)_dateFormatterChanged:(id)arg0 ;
-(void)_handleTapGestureRecognizer:(id)arg0 ;
-(void)_invalidateDayAndTimeDescriptions;
-(void)_invalidateGestureRecognizers;
-(void)_invalidateLabels;
-(void)_invalidatePlayClockDescription;
-(void)_setNeedsUpdate;
-(void)_updateDayAndTimeDescriptionsIfNeeded;
-(void)_updateGestureRecognizersIfNeeded;
-(void)_updateIfNeeded;
-(void)_updateLabelsIfNeeded;
-(void)_updatePlayClockDescriptionIfNeeded;
-(void)performChanges:(id)arg0 ;


@end


#endif