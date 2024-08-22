// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBSKEYBOARDPROXYLAYER_H
#define FBSKEYBOARDPROXYLAYER_H



#import "FBSSceneLayer.h"
#import "FBSSceneIdentityToken.h"

@interface FBSKeyboardProxyLayer : FBSSceneLayer

@property (readonly, nonatomic) FBSSceneIdentityToken *keyboardOwner; // ivar: _keyboardOwner


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isKeyboardProxyLayer;
-(NSInteger)alignment;
-(NSUInteger)hash;
-(id)_succinctDescription;
-(id)description;
-(id)initWithLevel:(CGFloat)arg0 keyboardOwner:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif