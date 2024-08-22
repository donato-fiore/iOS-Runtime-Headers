// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCAPTUREPROPRIETARYDEFAULTSSINGLETON_H
#define AVCAPTUREPROPRIETARYDEFAULTSSINGLETON_H

@class AVWeakReference, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AVCaptureProprietaryDefaultsSingleton : NSObject {
    char * _proprietaryDefaultsSourceQueueLabel;
    NSUInteger _proprietaryDefaultsSourceQueueLabelLength;
    NSObject<OS_dispatch_queue> *_proprietaryDefaultsSourceQueue;
    NSObject<OS_dispatch_queue> *_proprietaryDefaultChangeNotificationCallbackQueue;
    *OpaqueFigCaptureSource _proprietaryDefaultsSource;
    AVWeakReference *_weakReference;
    NSMutableDictionary *_defaultChangedHandlersForObserversForKeys;
}




+(id)objectForKey:(id)arg0 ;
+(id)proprietaryDefaultsSingleton;
+(void)addObserver:(id)arg0 forKey:(id)arg1 defaultChangedHandler:(id)arg2 ;
+(void)initialize;
+(void)removeObserver:(id)arg0 forKey:(id)arg1 ;
+(void)setObject:(id)arg0 forKey:(id)arg1 ;
+(void)updateProprietaryDefaultsSource;
-(id)init;
-(id)objectForKey:(id)arg0 ;
-(void)_handleDefaultChangedNotificationForKey:(id)arg0 newValue:(id)arg1 callHandlersAsync:(BOOL)arg2 ;
-(void)_handleNotification:(id)arg0 payload:(id)arg1 ;
-(void)_runBlockOnProprietaryDefaultsSourceQueue:(id)arg0 ;
-(void)_updateProprietaryDefaultsSource;
-(void)addObserver:(id)arg0 forKey:(id)arg1 defaultChangedHandler:(id)arg2 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif