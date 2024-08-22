// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18HEALTHEXPERIENCEUI29INTERACTIVEGENERATIONLISTENER_H
#define _TTC18HEALTHEXPERIENCEUI29INTERACTIVEGENERATIONLISTENER_H


#import <Foundation/Foundation.h>


@interface _TtC18HealthExperienceUI29InteractiveGenerationListener : NSObject {
    ? $__lazy_storage_$_queue;
}




-(id)init;
-(void)cancelInteractiveGenerationRequestNotificationWithNotification:(id)arg0 ;
-(void)dealloc;
-(void)didBecomeActiveWithNotification:(id)arg0 ;
-(void)didEnterBackgroundWithNotification:(id)arg0 ;
-(void)generationRequestNotificationWithNotification:(id)arg0 ;
-(void)majorInteractionNotificationReceivedWithNotification:(id)arg0 ;


@end


#endif