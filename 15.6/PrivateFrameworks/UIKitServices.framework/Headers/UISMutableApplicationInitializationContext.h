// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISMUTABLEAPPLICATIONINITIALIZATIONCONTEXT_H
#define UISMUTABLEAPPLICATIONINITIALIZATIONCONTEXT_H

@class FBSSceneIdentityToken, NSSet;


#import "UISApplicationInitializationContext.h"
#import "UISCompatibilityContext.h"
#import "UISDeviceContext.h"
#import "UISDisplayContext.h"

@interface UISMutableApplicationInitializationContext : UISApplicationInitializationContext

@property (retain, nonatomic) UISCompatibilityContext *compatibilityContext;
@property (retain, nonatomic) FBSSceneIdentityToken *defaultSceneToken;
@property (retain, nonatomic) UISDeviceContext *deviceContext;
@property (retain, nonatomic) UISDisplayContext *displayContext;
@property (retain, nonatomic) NSSet *persistedSceneIdentifiers;
@property (nonatomic) BOOL supportAppSceneRequests;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif