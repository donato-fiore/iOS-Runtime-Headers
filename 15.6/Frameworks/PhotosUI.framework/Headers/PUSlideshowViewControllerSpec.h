// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUSLIDESHOWVIEWCONTROLLERSPEC_H
#define PUSLIDESHOWVIEWCONTROLLERSPEC_H



#import "PUViewControllerSpec.h"
#import "PUSlideshowViewControllerSpecChange.h"

@interface PUSlideshowViewControllerSpec : PUViewControllerSpec

@property (readonly, nonatomic) PUSlideshowViewControllerSpecChange *currentChange;
@property (nonatomic, setter=setAirplayRouteAvailable:) BOOL isAirplayRouteAvailable; // ivar: _isAirplayRouteAvailable
@property (nonatomic, setter=setAirplayScreenAvailable:) BOOL isAirplayScreenAvailable; // ivar: _isAirplayScreenAvailable
@property (nonatomic, setter=setChromeVisible:) BOOL isChromeVisible; // ivar: _isChromeVisible
@property (readonly, nonatomic) NSUInteger mode; // ivar: _mode
@property (nonatomic, setter=_setShouldObserveAirplayRoute:) BOOL shouldObserveAirplayRoute; // ivar: _shouldObserveAirplayRoute
@property (readonly, nonatomic) BOOL shouldPauseWhenAppResignsActive;
@property (readonly, nonatomic) BOOL shouldRegisterToAirplay;
@property (nonatomic, setter=_setShouldShowAirplayButton:) BOOL shouldShowAirplayButton; // ivar: _shouldShowAirplayButton
@property (nonatomic, setter=_setShouldShowChromeBars:) BOOL shouldShowChromeBars; // ivar: _shouldShowChromeBars
@property (nonatomic, setter=_setShouldShowPlaceholder:) BOOL shouldShowPlaceholder; // ivar: _shouldShowPlaceholder
@property (readonly, nonatomic) BOOL shouldUseChromeBars;
@property (readonly, nonatomic) BOOL shouldUseTapGesture;


-(id)init;
-(id)initWithMode:(NSUInteger)arg0 ;
-(id)newSpecChange;
-(void)updateIfNeeded;


@end


#endif