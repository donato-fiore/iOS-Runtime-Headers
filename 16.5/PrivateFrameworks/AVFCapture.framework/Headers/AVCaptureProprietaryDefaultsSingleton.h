// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCAPTUREPROPRIETARYDEFAULTSSINGLETON_H
#define AVCAPTUREPROPRIETARYDEFAULTSSINGLETON_H

@class AVWeakReference, NSMutableDictionary, NSMutableArray;
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
    NSMutableArray *_keyObservationsThatFailedToRegisterWithServer;
}




+(id)objectForKey:(id)arg0 ;
+(id)proprietaryDefaultsSingleton;
+(int)retryPriorFailedKeyObservationRegistrations;
+(void)addObserver:(id)arg0 forKey:(id)arg1 callHandlerForInitialValue:(BOOL)arg2 defaultChangedHandler:(id)arg3 ;
+(void)initialize;
+(void)removeObserver:(id)arg0 forKey:(id)arg1 ;
+(void)setObject:(id)arg0 forKey:(id)arg1 ;
+(void)updateProprietaryDefaultsSource;
-(id)init;
-(id)objectForKey:(id)arg0 ;
-(int)_registerWithServerToObserveKey:(id)arg0 ;
-(int)retryPriorFailedKeyObservationRegistrations;
-(void)_handleDefaultChangedNotificationForKey:(id)arg0 newValue:(id)arg1 callHandlersAsync:(BOOL)arg2 ;
-(void)_handleNotification:(id)arg0 payload:(id)arg1 ;
-(void)_runBlockOnProprietaryDefaultsSourceQueue:(id)arg0 ;
-(void)_updateProprietaryDefaultsSource:(BOOL)arg0 ;
-(void)addObserver:(id)arg0 forKey:(id)arg1 callHandlerForInitialValue:(BOOL)arg2 defaultChangedHandler:(id)arg3 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif