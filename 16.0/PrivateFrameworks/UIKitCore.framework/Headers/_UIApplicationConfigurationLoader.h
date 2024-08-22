// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIAPPLICATIONCONFIGURATIONLOADER_H
#define _UIAPPLICATIONCONFIGURATIONLOADER_H

@class UISApplicationInitializationContext;

#import <Foundation/Foundation.h>


@interface _UIApplicationConfigurationLoader : NSObject {
    UISApplicationInitializationContext *_applicationInitializationContext;
    uint8_t _hasRequestedPreload;
}


@property (readonly, nonatomic) UISApplicationInitializationContext *applicationInitializationContext;
@property (readonly, nonatomic) BOOL isFrontBoard;
@property (readonly, nonatomic) BOOL usesLocalInitializationContext;


+(id)sharedLoader;
-(id)_appInitializationContextFactoryClass;
-(id)_init;
-(id)_loadInitializationContext;
-(void)dealloc;
-(void)startPreloadInitializationContext;


@end


#endif