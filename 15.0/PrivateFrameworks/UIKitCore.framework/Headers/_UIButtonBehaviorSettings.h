// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIBUTTONBEHAVIORSETTINGS_H
#define _UIBUTTONBEHAVIORSETTINGS_H

@class PTSettings;



@interface _UIButtonBehaviorSettings : PTSettings

@property (nonatomic) CGFloat closeButtonMinSize; // ivar: _closeButtonMinSize
@property (nonatomic) CGFloat closeButtonOutset; // ivar: _closeButtonOutset
@property (nonatomic) CGFloat imageButtonMinHeight; // ivar: _imageButtonMinHeight
@property (nonatomic) CGFloat imageButtonMinWidth; // ivar: _imageButtonMinWidth
@property (nonatomic) CGFloat imageButtonOutsetBottom; // ivar: _imageButtonOutsetBottom
@property (nonatomic) CGFloat imageButtonOutsetLeading; // ivar: _imageButtonOutsetLeading
@property (nonatomic) CGFloat imageButtonOutsetTop; // ivar: _imageButtonOutsetTop
@property (nonatomic) CGFloat imageButtonOutsetTrailing; // ivar: _imageButtonOutsetTrailing
@property (nonatomic) CGFloat mixedButtonMinHeight; // ivar: _mixedButtonMinHeight
@property (nonatomic) CGFloat mixedButtonMinWidth; // ivar: _mixedButtonMinWidth
@property (nonatomic) CGFloat mixedButtonOutsetBottom; // ivar: _mixedButtonOutsetBottom
@property (nonatomic) CGFloat mixedButtonOutsetLeading; // ivar: _mixedButtonOutsetLeading
@property (nonatomic) CGFloat mixedButtonOutsetTop; // ivar: _mixedButtonOutsetTop
@property (nonatomic) CGFloat mixedButtonOutsetTrailing; // ivar: _mixedButtonOutsetTrailing
@property (nonatomic) CGFloat roundButtonMinSize; // ivar: _roundButtonMinSize
@property (nonatomic) CGFloat roundButtonOutset; // ivar: _roundButtonOutset
@property (nonatomic) CGFloat textButtonMinHeight; // ivar: _textButtonMinHeight
@property (nonatomic) CGFloat textButtonMinWidth; // ivar: _textButtonMinWidth
@property (nonatomic) CGFloat textButtonOutsetBottom; // ivar: _textButtonOutsetBottom
@property (nonatomic) CGFloat textButtonOutsetLeading; // ivar: _textButtonOutsetLeading
@property (nonatomic) CGFloat textButtonOutsetTop; // ivar: _textButtonOutsetTop
@property (nonatomic) CGFloat textButtonOutsetTrailing; // ivar: _textButtonOutsetTrailing


+(id)settingsControllerModule;
-(BOOL)_useImageSettings;
-(BOOL)_useMixedSettings;
-(BOOL)_useTextSettings;
-(void)setDefaultValues;


@end


#endif