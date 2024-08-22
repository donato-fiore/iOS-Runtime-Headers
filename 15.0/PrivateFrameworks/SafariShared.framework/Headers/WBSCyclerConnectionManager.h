// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSCYCLERCONNECTIONMANAGER_H
#define WBSCYCLERCONNECTIONMANAGER_H

@class NSXPCListener, NSString;
@protocol NSXPCListenerDelegate, WBSCyclerTestTarget;

#import <Foundation/Foundation.h>

#import "WBSCyclerServiceProxy.h"

@interface WBSCyclerConnectionManager : NSObject <NSXPCListenerDelegate>

 {
    NSXPCListener *_xpcListener;
    WBSCyclerServiceProxy *_cyclerProxy;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<WBSCyclerTestTarget> *testTarget; // ivar: _testTarget


+(BOOL)isCyclerEnabled;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(id)initWithTestTarget:(id)arg0 ;
-(void)connect;


@end


#endif