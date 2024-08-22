// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKJSLEGACYPLAYER_H
#define IKJSLEGACYPLAYER_H

@class NSString;
@protocol NSObject, IKJSLegacyPlayer, _IKJSLegacyPlayerProxy, _IKJSLegacyPlayer, IKJSPlayerAppBridge;


#import "IKJSObject.h"
#import "IKDOMElement.h"

@interface IKJSLegacyPlayer : IKJSObject <NSObject, IKJSLegacyPlayer, _IKJSLegacyPlayerProxy, _IKJSLegacyPlayer>



@property (weak, nonatomic) NSObject<IKJSPlayerAppBridge> *appBridge; // ivar: _appBridge
@property (readonly, weak, nonatomic) IKDOMElement *currentAVMediaElement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)asPrivateIKJSLegacyPlayer;


@end


#endif