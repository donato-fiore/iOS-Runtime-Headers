// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKGLOBALSHAREDCONTEXTREGISTRY_H
#define SKGLOBALSHAREDCONTEXTREGISTRY_H


#import <Foundation/Foundation.h>


@interface SKGlobalSharedContextRegistry : NSObject



+(BOOL)getPrefersOpenGL;
+(id)globalGLSharedContext;
+(id)globalMetalDevice;
+(void)setGlobalGLSharedContext:(id)arg0 ;
+(void)setGlobalMetalDevice:(id)arg0 ;
+(void)setPrefersOpenGL:(BOOL)arg0 ;


@end


#endif