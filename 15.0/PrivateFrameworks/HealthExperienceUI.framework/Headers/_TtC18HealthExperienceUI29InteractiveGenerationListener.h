// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC18HEALTHEXPERIENCEUI29INTERACTIVEGENERATIONLISTENER_H
#define _TTC18HEALTHEXPERIENCEUI29INTERACTIVEGENERATIONLISTENER_H


#import <Foundation/Foundation.h>


@interface _TtC18HealthExperienceUI29InteractiveGenerationListener : NSObject {
    ? $__lazy_storage_$_queue;
}




-(id)init;
-(void)cancelInteractiveGenerationRequestNotificationWithNote:(id)arg0 ;
-(void)dealloc;
-(void)didBecomeActiveWithNote:(id)arg0 ;
-(void)generationRequestNotificationWithNote:(id)arg0 ;
-(void)majorInteractionNotificationReceivedWithNote:(id)arg0 ;
-(void)willResignActiveWithNote:(id)arg0 ;


@end


#endif