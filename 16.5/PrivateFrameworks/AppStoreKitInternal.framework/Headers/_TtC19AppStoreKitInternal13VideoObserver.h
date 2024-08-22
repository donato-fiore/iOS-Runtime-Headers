// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC19APPSTOREKITINTERNAL13VIDEOOBSERVER_H
#define _TTC19APPSTOREKITINTERNAL13VIDEOOBSERVER_H


#import <Foundation/Foundation.h>


@interface _TtC19AppStoreKitInternal13VideoObserver : NSObject {
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