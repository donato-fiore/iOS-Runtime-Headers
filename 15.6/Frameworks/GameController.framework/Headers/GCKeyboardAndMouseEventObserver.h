// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GCKEYBOARDANDMOUSEEVENTOBSERVER_H
#define GCKEYBOARDANDMOUSEEVENTOBSERVER_H

@class NSString;
@protocol GCKeyboardEventObserverDelegate, GCMouseEventObserverDelegate, GCFrontmostApplicationObserverDelegate, GCAppConnectionsFilter;

#import <Foundation/Foundation.h>

#import "GCKeyboardEventObserver.h"
#import "GCMouseEventObserver.h"
#import "_GCIPCRemoteProcess.h"
#import "_GCAppClientConnection.h"
#import "GCFrontmostApplicationObserver.h"

@interface GCKeyboardAndMouseEventObserver : NSObject <GCKeyboardEventObserverDelegate, GCMouseEventObserverDelegate, GCFrontmostApplicationObserverDelegate>

 {
    id<GCAppConnectionsFilter> *_filter;
    GCKeyboardEventObserver *_keyboardEventObserver;
    GCMouseEventObserver *_mouseEventObserver;
    _GCIPCRemoteProcess *_frontMostClient;
    _GCAppClientConnection *_frontMostAppClientConnection;
    int _pid;
    BOOL _observingEvents;
    GCFrontmostApplicationObserver *_frontmostApplicationObserver;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)locateFrontMostAppClientConnection;
-(id)initWithFilter:(id)arg0 ;
-(void)beginObservingKeyboardAndMouseEvents;
-(void)clientAdded:(id)arg0 ;
-(void)clientRemoved:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)onFrontmostApplicationChanged:(int)arg0 ;
-(void)onKeyboardEvent:(id)arg0 ;
-(void)onMouseEvent:(id)arg0 ;
-(void)pidsWithKeyboardAndMouseSupportDidChange;
-(void)setFrontMostClient:(id)arg0 ;
-(void)stopObservingKeyboardAndMouseEvents;


@end


#endif