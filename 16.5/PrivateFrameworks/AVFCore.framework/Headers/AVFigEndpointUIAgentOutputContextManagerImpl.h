// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVFIGENDPOINTUIAGENTOUTPUTCONTEXTMANAGERIMPL_H
#define AVFIGENDPOINTUIAGENTOUTPUTCONTEXTMANAGERIMPL_H

@class NSString;
@protocol AVOutputContextManagerImpl;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"
#import "AVOutputContextManager.h"

@interface AVFigEndpointUIAgentOutputContextManagerImpl : NSObject <AVOutputContextManagerImpl>

 {
    *OpaqueFigEndpointUIAgent _agent;
    AVWeakReference *_weakObserver;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) AVOutputContextManager *parentOutputContextManager; // ivar: _parentManager
@property (readonly) Class superclass;


+(struct OpaqueFigEndpointUIAgent *)copySharedEndpointUIAgent;
-(id)initWithEndpointUIAgent:(struct OpaqueFigEndpointUIAgent *)arg0 ;
-(void)_showErrorPromptForRouteDescriptor:(struct __CFDictionary *)arg0 reason:(struct __CFString *)arg1 ;
-(void)dealloc;


@end


#endif