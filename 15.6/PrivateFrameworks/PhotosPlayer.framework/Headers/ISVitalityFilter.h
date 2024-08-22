// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISVITALITYFILTER_H
#define ISVITALITYFILTER_H

@class NSDate;
@protocol ISVitalitySettings;

#import <Foundation/Foundation.h>


@interface ISVitalityFilter : NSObject

@property (nonatomic, setter=_setPerformingInputChanges:) BOOL _isPerformingInputChanges; // ivar: __isPerformingInputChanges
@property (nonatomic, setter=_setPerformingOutputChanges:) BOOL _isPerformingOutputChanges; // ivar: __isPerformingOutputChanges
@property (nonatomic, setter=_setOutputDidChange:) BOOL _outputDidChange; // ivar: __outputDidChange
@property (retain, nonatomic) NSDate *estimatedScrollEndDate; // ivar: _estimatedScrollEndDate
@property (nonatomic) BOOL hasTargetVisibilityOffset; // ivar: _hasTargetVisibilityOffset
@property (nonatomic, setter=setDecelerating:) BOOL isDecelerating; // ivar: _isDecelerating
@property (nonatomic, setter=setScrolling:) BOOL isScrolling; // ivar: _isScrolling
@property (nonatomic, setter=setVisible:) BOOL isVisible; // ivar: _isVisible
@property (copy, nonatomic) id *outputChangeHandler; // ivar: _outputChangeHandler
@property (nonatomic) CGFloat playRate; // ivar: _playRate
@property (nonatomic) CGFloat scrubOffset; // ivar: _scrubOffset
@property (nonatomic, getter=isScrubbing) BOOL scrubbing; // ivar: _scrubbing
@property (readonly, nonatomic) NSObject<ISVitalitySettings> *settings; // ivar: _settings
@property (nonatomic) CGFloat targetVisibilityOffset; // ivar: _targetVisibilityOffset
@property (nonatomic) CGFloat visibilityOffset; // ivar: _visibilityOffset


-(id)init;
-(id)initWithSettings:(id)arg0 ;
-(void)_invalidateOutput;
-(void)inputDidChange;
-(void)performInputChanges:(id)arg0 ;
-(void)performOutputChanges:(id)arg0 ;


@end


#endif