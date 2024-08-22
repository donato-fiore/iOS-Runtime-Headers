// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBSCACONTEXTSCENELAYER_H
#define FBSCACONTEXTSCENELAYER_H

@class CAContext;


#import "FBSSceneLayer.h"

@interface FBSCAContextSceneLayer : FBSSceneLayer

@property (readonly, nonatomic) CAContext *CAContext;
@property (readonly, nonatomic) unsigned int contextID; // ivar: _contextID


+(id)layerWithCAContext:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithCAContext:(id)arg0 contextID:(unsigned int)arg1 fallbackLevel:(CGFloat)arg2 ;
-(id)_succinctDescription;
-(id)description;
-(id)initWithCAContext:(id)arg0 ;
-(id)initWithCAContextID:(unsigned int)arg0 level:(CGFloat)arg1 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif