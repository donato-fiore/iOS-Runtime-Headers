// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BPSNTKCUSTOMIZATION_H
#define BPSNTKCUSTOMIZATION_H


#import <Foundation/Foundation.h>


@interface BPSNTKCustomization : NSObject



-(BOOL)handlePresentationOfNotification:(id)arg0 fromNotificationCenter:(id)arg1 withCompletionHandler:(id)arg2 ;
-(BOOL)handleUserNotificationResponse:(id)arg0 fromNotificationCenter:(id)arg1 withCompletionHandler:(id)arg2 ;
-(id)facesViewController;
-(id)galleryViewController;
-(id)userNotificationCategories;


@end


#endif