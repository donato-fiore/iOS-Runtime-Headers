// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEPROVIDER_H
#define NEPROVIDER_H

@class NWPathEvaluator, NSString, NWPath;
@protocol NSExtensionRequestHandling;

#import <Foundation/Foundation.h>

#import "NEExtensionProviderContext.h"

@interface NEProvider : NSObject <NSExtensionRequestHandling>

 {
    NWPathEvaluator *_defaultPathEvaluator;
}


@property (retain) NSString *appName; // ivar: _appName
@property (retain) NEExtensionProviderContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (retain) NWPath *defaultPath; // ivar: _defaultPath
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isNEProviderBundle:(id)arg0 forExtensionPoint:(id)arg1 ;
+(BOOL)isRunningInProvider;
+(void)startSystemExtensionMode;
-(id)createTCPConnectionToEndpoint:(id)arg0 enableTLS:(BOOL)arg1 TLSParameters:(id)arg2 delegate:(id)arg3 ;
-(id)createUDPSessionToEndpoint:(id)arg0 fromEndpoint:(id)arg1 ;
-(id)init;
-(id)initAllowUnentitled:(BOOL)arg0 ;
-(void)beginRequestWithExtensionContext:(id)arg0 ;
-(void)dealloc;
-(void)displayMessage:(id)arg0 completionHandler:(id)arg1 ;
-(void)observerHelperHandler:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setdefaultPathObserver:(id)arg0 ;
-(void)sleepWithCompletionHandler:(id)arg0 ;
-(void)wake;


@end


#endif