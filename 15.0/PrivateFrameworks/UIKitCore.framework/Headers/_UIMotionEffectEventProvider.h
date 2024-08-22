// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIMOTIONEFFECTEVENTPROVIDER_H
#define _UIMOTIONEFFECTEVENTPROVIDER_H

@protocol _UIMotionEffectEventConsumer;

#import <Foundation/Foundation.h>


@interface _UIMotionEffectEventProvider : NSObject

@property NSObject<_UIMotionEffectEventConsumer> *consumer; // ivar: _consumer


-(BOOL)shouldLogEvents;
-(BOOL)wantsSynchronizedUpdates;
-(CGFloat)fastUpdateIntervalForLogs;
-(CGFloat)slowUpdateIntervalForLogs;
-(id)currentEvent;
-(void)setSlowUpdatesEnabled:(BOOL)arg0 ;
-(void)startGeneratingEvents;
-(void)stopGeneratingEvents;


@end


#endif