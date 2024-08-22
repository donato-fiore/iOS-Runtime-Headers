// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXVIEWCONTROLLERZOOMTRANSITIONSETTINGS_H
#define PXVIEWCONTROLLERZOOMTRANSITIONSETTINGS_H



#import "PXSettings.h"

@interface PXViewControllerZoomTransitionSettings : PXSettings

@property (nonatomic) BOOL animateEndPointsContents; // ivar: _animateEndPointsContents
@property (nonatomic) BOOL animateViewControllersViews; // ivar: _animateViewControllersViews
@property (nonatomic) NSInteger animationType; // ivar: _animationType
@property (nonatomic) NSInteger crossfadeType; // ivar: _crossfadeType
@property (nonatomic) CGFloat maximumZoomScale; // ivar: _maximumZoomScale
@property (nonatomic) CGFloat minimumZoomScale; // ivar: _minimumZoomScale
@property (nonatomic) BOOL showRectsOfInterest; // ivar: _showRectsOfInterest
@property (nonatomic) CGFloat titleCrossfadeAmount; // ivar: _titleCrossfadeAmount
@property (nonatomic) CGFloat transitionDuration; // ivar: _transitionDuration


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif