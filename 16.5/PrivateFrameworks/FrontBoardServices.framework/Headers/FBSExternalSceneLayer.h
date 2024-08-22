// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBSEXTERNALSCENELAYER_H
#define FBSEXTERNALSCENELAYER_H

@class NSString;


#import "FBSSceneLayer.h"

@interface FBSExternalSceneLayer : FBSSceneLayer

@property (readonly, copy, nonatomic) NSString *sceneID; // ivar: _sceneID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isExternalSceneLayer;
-(NSInteger)alignment;
-(NSUInteger)hash;
-(id)_initWithCAContext:(id)arg0 fallbackLevel:(CGFloat)arg1 sceneID:(id)arg2 ;
-(id)_succinctDescription;
-(id)description;
-(id)initWithExternalSceneID:(id)arg0 level:(CGFloat)arg1 ;
-(id)initWithExternalSceneID:(id)arg0 trackingContext:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif