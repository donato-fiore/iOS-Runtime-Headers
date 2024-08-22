// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKWEBPROCESSPLUGINSCRIPTWORLD_H
#define WKWEBPROCESSPLUGINSCRIPTWORLD_H

@class NSString;
@protocol WKObject;

#import <Foundation/Foundation.h>


@interface WKWebProcessPlugInScriptWorld : NSObject <WKObject>

 {
    ObjectStorage<WebKit::InjectedBundleScriptWorld> _world;
}


@property (readonly) *Object _apiObject;
@property (readonly) *void _scriptWorld;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) Class superclass;


+(id)normalWorld;
+(id)world;
-(void)clearWrappers;
-(void)dealloc;
-(void)disableOverrideBuiltinsBehavior;
-(void)makeAllShadowRootsOpen;


@end


#endif