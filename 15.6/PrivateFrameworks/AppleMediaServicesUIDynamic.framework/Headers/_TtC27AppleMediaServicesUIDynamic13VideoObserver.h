// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC27APPLEMEDIASERVICESUIDYNAMIC13VIDEOOBSERVER_H
#define _TTC27APPLEMEDIASERVICESUIDYNAMIC13VIDEOOBSERVER_H


#import <Foundation/Foundation.h>


@interface _TtC27AppleMediaServicesUIDynamic13VideoObserver : NSObject {
    ? delegate;
    ? playerItemObserversAdded;
    ? playerObserversAdded;
    ? timeBoundaryObserver;
}




-(id)init;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)playbackErrorOccurredWithNotification:(id)arg0 ;
-(void)videoDidPlayToEnd;
-(void)videoPlaybackDidStall;


@end


#endif