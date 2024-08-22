// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OZFXPLUGHOSTPRIVATEAPI_H
#define OZFXPLUGHOSTPRIVATEAPI_H

@class NSString;
@protocol PROAPIObject, FxHostPrivateAPI, FxRenderModelAPIPrivate;

#import <Foundation/Foundation.h>


@interface OZFxPlugHostPrivateAPI : NSObject <PROAPIObject, FxHostPrivateAPI, FxRenderModelAPIPrivate>

 {
    *void _plugin;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(?)navigateToTime;
-(BOOL)conformsToProtocol:(id)arg0 version:(unsigned int)arg1 ;
-(BOOL)giveEffectUIFocus;
-(float)blendingGamma;
-(id)URLForHostResource:(id)arg0 withExtension:(id)arg1 subDirectory:(id)arg2 inBundle:(id)arg3 ;
-(id)URLForHostResource:(id)arg0 withExtension:(id)arg1 subDirectory:(id)arg2 inBundleWithIdentifier:(id)arg3 ;
-(id)URLForHostResource:(id)arg0 withExtension:(id)arg1 subDirectory:(id)arg2 inBundleWithURL:(id)arg3 ;
-(id)initWithPlugin:(*void)arg0 ;
-(void)pluginXPCConnectionBroken:(id)arg0 ;


@end


#endif