// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCV11MEDIACOREUI21NOWPLAYINGROUTEBUTTON11COORDINATOR_H
#define _TTCV11MEDIACOREUI21NOWPLAYINGROUTEBUTTON11COORDINATOR_H


#import <Foundation/Foundation.h>


@interface _TtCV11MediaCoreUI21NowPlayingRouteButton11Coordinator : NSObject {
    ? routeButton;
    ? $__lazy_storage_$_mediaControls;
    ? $__lazy_storage_$_routingController;
    ? routeDidChangeObserver;
}




-(id)init;
-(void)onTouchDown:(id)arg0 ;
-(void)onTouchUpInside:(id)arg0 ;
-(void)onTouchUpOutside:(id)arg0 ;


@end


#endif