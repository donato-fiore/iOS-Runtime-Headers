// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC19PREVIEWSOSSUPPORTUI19PREVIEWDEBUGOVERLAY_H
#define _TTC19PREVIEWSOSSUPPORTUI19PREVIEWDEBUGOVERLAY_H

@protocol PTSettingsKeyObserver;

#import <Foundation/Foundation.h>


@interface _TtC19PreviewsOSSupportUI19PreviewDebugOverlay : NSObject <PTSettingsKeyObserver>

 {
    ? messageCount;
    ? secondsSinceShown;
    ? secondsTimer;
    ? identifier;
    ? size;
    ? settingsEnabled;
    ? forceEnabled;
    ? edge;
    ? parent;
    ? $__lazy_storage_$_view;
}




-(id)init;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif