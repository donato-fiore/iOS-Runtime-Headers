// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCMNOTIFICATIONDISPATCHER_H
#define AVCMNOTIFICATIONDISPATCHER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AVCMNotificationDispatcher : NSObject {
    *opaqueCMNotificationCenter _cmNotificationCenter;
    NSObject<OS_dispatch_queue> *_listenerObjectsQueue;
    NSMutableDictionary *_observersForListenerKeys;
}


@property (readonly, nonatomic) *opaqueCMNotificationCenter CMNotificationCenter;


+(id)notificationDispatcherForCMNotificationCenter:(struct opaqueCMNotificationCenter *)arg0 ;
+(void)initialize;
-(id)_copyAndRemoveObserverForWeakReferenceToListener:(id)arg0 callback:(*unk)arg1 name:(struct __CFString *)arg2 object:(*void)arg3 ;
-(id)init;
-(id)initWithCMNotificationCenter:(struct opaqueCMNotificationCenter *)arg0 ;
-(void)addListenerWithWeakReference:(id)arg0 callback:(*unk)arg1 name:(struct __CFString *)arg2 object:(*void)arg3 flags:(unsigned int)arg4 ;
-(void)dealloc;
-(void)removeListenerWithWeakReference:(id)arg0 callback:(*unk)arg1 name:(struct __CFString *)arg2 object:(*void)arg3 ;


@end


#endif