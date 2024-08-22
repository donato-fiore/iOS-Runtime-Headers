// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC17_STOREKIT_SWIFTUIP33_7A1CD05574219937BB53A614E2FE018426APPSTOREOVERLAYCOORDINATOR_H
#define _TTC17_STOREKIT_SWIFTUIP33_7A1CD05574219937BB53A614E2FE018426APPSTOREOVERLAYCOORDINATOR_H

@protocol SKOverlayDelegate;

#import <Foundation/Foundation.h>


@interface _TtC17_StoreKit_SwiftUIP33_7A1CD05574219937BB53A614E2FE018426AppStoreOverlayCoordinator : NSObject <SKOverlayDelegate>

 {
    ? isPresented;
    ? overlayState;
    ? overlay;
    ? scene;
}




-(id)init;
-(void)dealloc;
-(void)storeOverlay:(id)arg0 didFailToLoadWithError:(id)arg1 ;
-(void)storeOverlay:(id)arg0 didFinishDismissal:(id)arg1 ;
-(void)storeOverlay:(id)arg0 didFinishPresentation:(id)arg1 ;


@end


#endif