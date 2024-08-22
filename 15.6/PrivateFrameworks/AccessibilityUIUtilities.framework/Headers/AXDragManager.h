// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXDRAGMANAGER_H
#define AXDRAGMANAGER_H

@class NSXPCListener, NSMutableArray, NSString, AXDispatchTimer;
@protocol AXDragEndpointVendorDelegate, NSXPCListenerDelegate, AXDragSessionDragManager, AXDragSessionDelegate, OS_dispatch_queue, AXDragManagerDelegate;

#import <Foundation/Foundation.h>

#import "AXDragEndpointVendor.h"
#import "AXDragSession.h"

@interface AXDragManager : NSObject <AXDragEndpointVendorDelegate, NSXPCListenerDelegate, AXDragSessionDragManager, AXDragSessionDelegate>

 {
    AXDragEndpointVendor *_vendor;
    NSXPCListener *_endpointListener;
    NSMutableArray *_activeSessions;
    NSObject<OS_dispatch_queue> *_dragStateQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AXDragManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) AXDragSession *dragSession; // ivar: _dragSession
@property (copy, nonatomic) id *dragStartCompletionHandler; // ivar: _dragStartCompletionHandler
@property (retain, nonatomic) AXDispatchTimer *dragStartTimer; // ivar: _dragStartTimer
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isDragActive;
@property (readonly, nonatomic) NSString *machServiceName; // ivar: _machServiceName
@property (nonatomic) int pidForDrag; // ivar: _pidForDrag
@property (readonly) Class superclass;


-(BOOL)_shouldAllowEndpointVendForRequestingConnection:(id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)endpointForRequestingConnection:(id)arg0 fromEndpointVendor:(id)arg1 ;
-(id)initWithMachServiceName:(id)arg0 ;
-(void)cancelDrag;
-(void)dragSession:(id)arg0 movedToPoint:(struct CGPoint )arg1 byRequestor:(id)arg2 ;
-(void)dragSessionChanged:(id)arg0 toStatus:(id)arg1 ;
-(void)dragSessionEnded:(id)arg0 withOperation:(NSUInteger)arg1 ;
-(void)dragSessionWasTerminated:(id)arg0 ;
-(void)drop;
-(void)moveToAndDropAtPoint:(struct CGPoint )arg0 ;
-(void)moveToPoint:(struct CGPoint )arg0 ;
-(void)sessionWasTerminated:(id)arg0 ;
-(void)waitForDragStartFromPid:(int)arg0 completionHandler:(id)arg1 ;


@end


#endif