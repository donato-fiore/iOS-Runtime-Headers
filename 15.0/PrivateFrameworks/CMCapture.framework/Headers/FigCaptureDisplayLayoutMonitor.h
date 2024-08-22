// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGCAPTUREDISPLAYLAYOUTMONITOR_H
#define FIGCAPTUREDISPLAYLAYOUTMONITOR_H

@class NSMutableArray, FBSDisplayLayoutMonitor;

#import <Foundation/Foundation.h>


@interface FigCaptureDisplayLayoutMonitor : NSObject {
    *OpaqueFigSimpleMutex _layoutObserversLock;
    NSMutableArray *_layoutObservers;
    *OpaqueFigSimpleMutex _appsLock;
    NSMutableArray *_fullScreenApps;
    NSMutableArray *_nonFullScreenApps;
    NSMutableArray *_obscuredApps;
    NSMutableArray *_transitioningApps;
    NSMutableArray *_pipApps;
    FBSDisplayLayoutMonitor *_layoutMonitor;
}


@property (readonly, nonatomic, getter=isOnHomeScreen) BOOL onHomeScreen;
@property (readonly, nonatomic, getter=isOnLockScreen) BOOL onLockScreen;


+(id)sharedDisplayLayoutMonitor;
+(void)initialize;
-(id)initWithFBSDisplayLayoutMonitorCreateFunction:(*unk)arg0 ;
-(void)addLayoutObserver:(id)arg0 ;
-(void)dealloc;
-(void)removeLayoutObserver:(id)arg0 ;


@end


#endif