// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSCYCLERTESTTARGETPROXYCONTROLLER_H
#define WBSCYCLERTESTTARGETPROXYCONTROLLER_H

@class NSXPCConnection;
@protocol WBSCyclerTestTarget;

#import <Foundation/Foundation.h>


@interface WBSCyclerTestTargetProxyController : NSObject {
    NSXPCConnection *_xpcConnection;
}


@property (copy, nonatomic) id *disconnectionHandler;
@property (readonly, nonatomic) NSObject<WBSCyclerTestTarget> *testTargetProxy;


-(id)init;
-(id)initWithEndpoint:(id)arg0 ;
-(void)dealloc;


@end


#endif