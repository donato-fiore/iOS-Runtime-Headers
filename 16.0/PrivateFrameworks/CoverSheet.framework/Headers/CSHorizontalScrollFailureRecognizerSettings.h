// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSHORIZONTALSCROLLFAILURERECOGNIZERSETTINGS_H
#define CSHORIZONTALSCROLLFAILURERECOGNIZERSETTINGS_H

@class PTSettings;



@interface CSHorizontalScrollFailureRecognizerSettings : PTSettings

@property (nonatomic) CGFloat bottomAngle; // ivar: _bottomAngle
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (nonatomic) NSUInteger maxAllowableVerticalOffset; // ivar: _maxAllowableVerticalOffset
@property (nonatomic) CGFloat topAngle; // ivar: _topAngle
@property (nonatomic) BOOL viewDebugArea; // ivar: _viewDebugArea


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif