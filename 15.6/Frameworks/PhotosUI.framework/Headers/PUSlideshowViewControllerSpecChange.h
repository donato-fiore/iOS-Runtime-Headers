// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUSLIDESHOWVIEWCONTROLLERSPECCHANGE_H
#define PUSLIDESHOWVIEWCONTROLLERSPECCHANGE_H



#import "PUViewControllerSpecChange.h"

@interface PUSlideshowViewControllerSpecChange : PUViewControllerSpecChange

@property (readonly, nonatomic) BOOL chromeVisibilityChanged; // ivar: _chromeVisibilityChanged
@property (nonatomic, setter=_setShouldObserveAirplayRouteChanged:) BOOL shouldObserveAirplayRouteChanged; // ivar: _shouldObserveAirplayRouteChanged
@property (nonatomic, setter=_setShouldShowAirplayButtonChanged:) BOOL shouldShowAirplayButtonChanged; // ivar: _shouldShowAirplayButtonChanged
@property (nonatomic, setter=_setShouldShowChromeBarsChanged:) BOOL shouldShowChromeBarsChanged; // ivar: _shouldShowChromeBarsChanged
@property (nonatomic, setter=_setShouldShowPlaceholderChanged:) BOOL shouldShowPlaceholderChanged; // ivar: _shouldShowPlaceholderChanged


-(BOOL)changed;


@end


#endif