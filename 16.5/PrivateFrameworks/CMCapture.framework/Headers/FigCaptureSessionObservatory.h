// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGCAPTURESESSIONOBSERVATORY_H
#define FIGCAPTURESESSIONOBSERVATORY_H

@class NSMapTable, NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FigCaptureSessionObservatory : NSObject {
    NSMapTable *_captureSessionsStorage;
    NSHashTable *_registeredObservers;
    NSObject<OS_dispatch_queue> *_queue;
    NSInteger _lastRunningIdentifier;
}




+(id)sharedObservatory;
+(void)initialize;
-(id)init;
-(void)captureSessionWasCreated:(struct OpaqueFigCaptureSession *)arg0 ;
-(void)dealloc;
-(void)registerObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif