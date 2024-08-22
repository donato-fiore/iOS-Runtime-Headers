// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITEXTSELECTIONSETTINGS_H
#define _UITEXTSELECTIONSETTINGS_H

@class UISettings, NSNumber;



@interface _UITextSelectionSettings : UISettings

@property (retain, nonatomic) NSNumber *allowExtendingSelections; // ivar: _allowExtendingSelections
@property (nonatomic) CGFloat allowableForceMovement; // ivar: _allowableForceMovement
@property (nonatomic) CGFloat allowableSeparation; // ivar: _allowableSeparation
@property (retain, nonatomic) NSNumber *enableDeepPress; // ivar: _enableDeepPress
@property (nonatomic) CGFloat gain; // ivar: _gain
@property (nonatomic) CGFloat linear; // ivar: _linear
@property (nonatomic) CGFloat maxPinkWidth; // ivar: _maxPinkWidth
@property (nonatomic) CGFloat minPinkWidth; // ivar: _minPinkWidth
@property (nonatomic) CGFloat parabolic; // ivar: _parabolic
@property (nonatomic) CGFloat pinkWidthFactor; // ivar: _pinkWidthFactor
@property (retain, nonatomic) NSNumber *shouldPreferEndOfWord; // ivar: _shouldPreferEndOfWord
@property (retain, nonatomic) NSNumber *shouldUseAcceleration; // ivar: _shouldUseAcceleration


+(id)sharedInstance;
-(void)dealloc;
-(void)setDefaultValues;


@end


#endif