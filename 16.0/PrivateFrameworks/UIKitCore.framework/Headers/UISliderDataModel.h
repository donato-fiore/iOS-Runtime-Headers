// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISLIDERDATAMODEL_H
#define UISLIDERDATAMODEL_H


#import <Foundation/Foundation.h>

#import "_UIEdgeFeedbackGenerator.h"
#import "_UIModulationFeedbackGenerator.h"
#import "UIColor.h"
#import "UIImage.h"

@interface UISliderDataModel : NSObject {
    *__CFDictionary _contentLookup;
    _UIEdgeFeedbackGenerator *_edgeFeedbackGenerator;
    _UIModulationFeedbackGenerator *_modulationFeedbackGenerator;
}


@property (nonatomic, getter=isContinuous) BOOL continuous; // ivar: _continuous
@property (retain, nonatomic) _UIEdgeFeedbackGenerator *edgeFeedbackGenerator;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (retain, nonatomic) UIColor *maximumTrackTintColor; // ivar: _maxTintColor
@property (readonly, nonatomic) float maximumValue; // ivar: _maxValue
@property (retain, nonatomic) UIImage *maximumValueImage; // ivar: _maximumValueImage
@property (retain, nonatomic) UIColor *minimumTrackTintColor; // ivar: _minTintColor
@property (nonatomic, getter=isMinimumTrackVisible) BOOL minimumTrackVisible; // ivar: _minimumTrackVisible
@property (readonly, nonatomic) float minimumValue; // ivar: _minValue
@property (retain, nonatomic) UIImage *minimumValueImage; // ivar: _minimumValueImage
@property (retain, nonatomic) _UIModulationFeedbackGenerator *modulationFeedbackGenerator;
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (nonatomic) BOOL showValue; // ivar: _showValue
@property (nonatomic, getter=isThumbEnabled) BOOL thumbEnabled; // ivar: _thumbEnabled
@property (retain, nonatomic) UIColor *thumbTintColor; // ivar: _thumbTintColor
@property (nonatomic, getter=isTrackEnabled) BOOL trackEnabled; // ivar: _trackEnabled
@property (nonatomic, getter=isTracking) BOOL tracking; // ivar: _tracking
@property (readonly, nonatomic) float value; // ivar: _value


-(id)_contentForState:(NSUInteger)arg0 ;
-(id)init;
-(id)maximumTrackImageForState:(NSUInteger)arg0 ;
-(id)minimumTrackImageForState:(NSUInteger)arg0 ;
-(id)thumbImageForState:(NSUInteger)arg0 ;
-(void)_setContent:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)setMaximumTrackImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setMaximumTrackImage:(id)arg0 forStates:(NSUInteger)arg1 ;
-(void)setMinimumTrackImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setMinimumTrackImage:(id)arg0 forStates:(NSUInteger)arg1 ;
-(void)setThumbImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setThumbImage:(id)arg0 forStates:(NSUInteger)arg1 ;


@end


#endif