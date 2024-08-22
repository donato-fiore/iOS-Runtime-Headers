// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKJSINSPECTORNETWORKAGENT_H
#define IKJSINSPECTORNETWORKAGENT_H

@class NSMutableDictionary, NSString;
@protocol RWIProtocolNetworkDomainHandler;

#import <Foundation/Foundation.h>

#import "IKJSInspectorController.h"

@interface IKJSInspectorNetworkAgent : NSObject <RWIProtocolNetworkDomainHandler>

 {
    NSMutableDictionary *_loaders;
}


@property (readonly, weak, nonatomic) IKJSInspectorController *controller; // ivar: _controller
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithInspectorController:(id)arg0 ;
-(id)registerLoaderWithIdentifier:(id)arg0 ;
// -(void)addInterceptionWithErrorCallback:(id)arg0 successCallback:(unk)arg1 url:(id)arg2 stage:(unk)arg3  ;
-(void)clearAllTrackedLoaders;
// -(void)disableWithErrorCallback:(id)arg0 successCallback:(unk)arg1  ;
// -(void)enableWithErrorCallback:(id)arg0 successCallback:(unk)arg1  ;
// -(void)getResponseBodyWithErrorCallback:(id)arg0 successCallback:(unk)arg1 requestId:(id)arg2  ;
// -(void)getSerializedCertificateWithErrorCallback:(id)arg0 successCallback:(unk)arg1 requestId:(id)arg2  ;
// -(void)interceptContinueWithErrorCallback:(id)arg0 successCallback:(unk)arg1 requestId:(id)arg2  ;
// -(void)interceptWithResponseWithErrorCallback:(id)arg0 successCallback:(unk)arg1 requestId:(id)arg2 content:(unk)arg3 base64Encoded:(id)arg4 mimeType:(id)arg5 status:(BOOL)arg6 statusText:(*id)arg7 headers:(*int)arg8  ;
// -(void)loadResourceWithErrorCallback:(id)arg0 successCallback:(unk)arg1 frameId:(id)arg2 url:(unk)arg3  ;
// -(void)removeInterceptionWithErrorCallback:(id)arg0 successCallback:(unk)arg1 url:(id)arg2 stage:(unk)arg3  ;
// -(void)resolveWebSocketWithErrorCallback:(id)arg0 successCallback:(unk)arg1 requestId:(id)arg2 objectGroup:(unk)arg3  ;
// -(void)setExtraHTTPHeadersWithErrorCallback:(id)arg0 successCallback:(unk)arg1 headers:(id)arg2  ;
// -(void)setInterceptionEnabledWithErrorCallback:(id)arg0 successCallback:(unk)arg1 enabled:(id)arg2  ;
// -(void)setResourceCachingDisabledWithErrorCallback:(id)arg0 successCallback:(unk)arg1 disabled:(id)arg2  ;
-(void)unregisterLoaderWithIdentifier:(id)arg0 ;


@end


#endif