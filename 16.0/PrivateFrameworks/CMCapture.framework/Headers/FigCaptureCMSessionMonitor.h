// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGCAPTURECMSESSIONMONITOR_H
#define FIGCAPTURECMSESSIONMONITOR_H

@protocol FigCaptureCMSessionObserver;

#import <Foundation/Foundation.h>

#import "FigCaptureCMSession.h"

@interface FigCaptureCMSessionMonitor : NSObject {
    *OpaqueFigSimpleMutex _lock;
    FigCaptureCMSession *_session;
    int _clientPID;
    id<FigCaptureCMSessionObserver> *_observer;
    id *_applicationStateChangeNotificationToken;
    id *_interruptionStateChangeNotificationToken;
    BOOL _invalidated;
}




+(void)initialize;
-(id)_initWithFigCaptureCMSession:(id)arg0 clientPID:(int)arg1 observer:(id)arg2 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCMSession:(struct opaqueCMSession *)arg0 clientPID:(int)arg1 observer:(id)arg2 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif