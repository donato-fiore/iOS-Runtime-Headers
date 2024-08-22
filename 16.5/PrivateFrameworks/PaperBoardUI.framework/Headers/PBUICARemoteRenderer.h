// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBUICAREMOTERENDERER_H
#define PBUICAREMOTERENDERER_H

@class NSString;
@protocol PBUIRenderer, PBUIRemoteRendererConnection;

#import <Foundation/Foundation.h>


@interface PBUICARemoteRenderer : NSObject <PBUIRenderer>



@property (readonly, nonatomic) *CGColorSpace colorSpace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<PBUIRemoteRendererConnection> *underlyingConnection; // ivar: _underlyingConnection


+(BOOL)shouldUseXPCServiceForRendering;
+(id)remoteRendererIfPossible;
+(id)secureCodableRequestClasses;
-(BOOL)supportsRequest:(id)arg0 orError:(*id)arg1 ;
-(id)init;
-(id)initWithUnderlyingConnection:(id)arg0 ;
-(id)renderRequest:(id)arg0 error:(*id)arg1 ;
-(void)renderRequest:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif