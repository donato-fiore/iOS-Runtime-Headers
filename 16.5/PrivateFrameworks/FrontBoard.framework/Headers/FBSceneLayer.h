// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBSCENELAYER_H
#define FBSCENELAYER_H

@class NSString, FBSSceneIdentityToken;
@protocol BSDescriptionProviding, NSCopying;

#import <Foundation/Foundation.h>


@interface FBSceneLayer : NSObject <BSDescriptionProviding, NSCopying>



@property (nonatomic) NSInteger alignment; // ivar: _alignment
@property (readonly, nonatomic) unsigned int contextID; // ivar: _contextID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *externalSceneID; // ivar: _externalSceneID
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isKeyboardLayer;
@property (readonly, nonatomic) BOOL isKeyboardProxyLayer;
@property (nonatomic) CGFloat level; // ivar: _level
@property (readonly, copy, nonatomic) FBSSceneIdentityToken *proxiedKeyboardOwner; // ivar: _proxiedKeyboardOwner
@property (nonatomic) unsigned int sceneID; // ivar: _sceneID
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)layerWithFBSSceneLayer:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initAsKeyboard;
-(id)initAsKeyboardProxyWithOwner:(id)arg0 ;
-(id)initWithContextID:(unsigned int)arg0 ;
-(id)initWithExternalSceneID:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif