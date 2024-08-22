// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGCAPTUREDISPLAYLAYOUTMONITOR_H
#define FIGCAPTUREDISPLAYLAYOUTMONITOR_H

@class NSMutableArray, NSArray, FBSDisplayLayoutMonitor, SBSExternalDisplayService;

#import <Foundation/Foundation.h>

#import "FigCaptureDisplayLayout.h"

@interface FigCaptureDisplayLayoutMonitor : NSObject {
    *OpaqueFigSimpleMutex _layoutObserversLock;
    NSMutableArray *_layoutObservers;
    *OpaqueFigSimpleMutex _layoutLock;
    FigCaptureDisplayLayout *_layout;
    NSArray *_elementIdentifiersToIgnore;
    FBSDisplayLayoutMonitor *_layoutMonitor;
    SBSExternalDisplayService *_externalDisplayService;
}


@property (readonly, nonatomic) NSInteger displayType; // ivar: _displayType
@property (readonly, nonatomic, getter=isOnHomeScreen) BOOL onHomeScreen;
@property (readonly, nonatomic, getter=isOnLockScreen) BOOL onLockScreen;


+(id)sharedDisplayLayoutMonitor;
+(id)sharedExternalDisplayLayoutMonitor;
+(void)initialize;
-(id)debugDescription;
-(id)description;
-(id)initWithFBSDisplayLayoutMonitorCreateFunction:(*unk)arg0 displayType:(NSInteger)arg1 ;
-(void)addLayoutObserver:(id)arg0 ;
-(void)dealloc;
-(void)externalDisplayDidConnect:(id)arg0 ;
-(void)externalDisplayWillDisconnect:(id)arg0 ;
-(void)removeLayoutObserver:(id)arg0 ;


@end


#endif