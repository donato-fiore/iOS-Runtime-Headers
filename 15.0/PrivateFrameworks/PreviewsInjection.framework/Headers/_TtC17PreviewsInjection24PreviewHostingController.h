// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC17PREVIEWSINJECTION24PREVIEWHOSTINGCONTROLLER_H
#define _TTC17PREVIEWSINJECTION24PREVIEWHOSTINGCONTROLLER_H

@protocol PTSettingsKeyObserver;

#import <Foundation/Foundation.h>


@interface _TtC17PreviewsInjection24PreviewHostingController : NSObject <PTSettingsKeyObserver>

 {
    ? previewHost;
    ? displayContext;
    ? viewController;
    ? viewable;
    ? appearanceCollector;
    ? $__lazy_storage_$_debugOverlay;
}




-(id)init;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif