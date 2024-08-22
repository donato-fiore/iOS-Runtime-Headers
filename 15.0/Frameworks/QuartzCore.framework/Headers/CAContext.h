// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CACONTEXT_H
#define CACONTEXT_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "CALayer.h"

@interface CAContext : NSObject {
    *void _impl;
}


@property (copy) NSString *annotation;
@property BOOL colorMatchUntaggedContent;
@property *CGColorSpace colorSpace;
@property unsigned int commitPriority;
@property (copy) NSString *contentsFormat;
@property (readonly) unsigned int contextId;
@property float desiredDynamicRange;
@property (readonly) unsigned int displayId;
@property (retain) CALayer *layer;
@property float level;
@property (readonly) NSDictionary *options;
@property (copy) NSDictionary *payload;
@property (getter=isSecure) BOOL secure;
@property (readonly) BOOL valid;


+(id)allContexts;
+(id)currentContext;
+(id)localContext;
+(id)localContextWithOptions:(id)arg0 ;
+(id)objectForSlot:(unsigned int)arg0 ;
+(id)remoteContext;
+(id)remoteContextWithOptions:(id)arg0 ;
+(void)setClientPort:(unsigned int)arg0 ;
-(*void)contextImpl;
-(*void)renderContext;
-(*void)retainRenderContext;
-(BOOL)addFence:(id)arg0 ;
-(BOOL)addFence:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)waitForRenderingWithTimeout:(CGFloat)arg0 ;
-(id)debugDescription;
-(id)initRemoteWithOptions:(id)arg0 ;
-(id)initWithOptions:(id)arg0 localContext:(BOOL)arg1 ;
-(unsigned int)createFencePort;
-(unsigned int)createImageSlot:(struct CGSize )arg0 hasAlpha:(BOOL)arg1 ;
-(unsigned int)createImageSlot:(struct CGSize )arg0 hasAlpha:(BOOL)arg1 extendedColors:(BOOL)arg2 ;
-(unsigned int)createSlot;
-(unsigned int)hitTestContext:(struct CGPoint )arg0 ;
-(void)dealloc;
-(void)deleteSlot:(unsigned int)arg0 ;
-(void)orderAbove:(unsigned int)arg0 ;
-(void)orderBelow:(unsigned int)arg0 ;
-(void)requestClientGlitch:(CGFloat)arg0 ;
-(void)requestServerGlitch:(CGFloat)arg0 ;
-(void)setFence:(unsigned int)arg0 count:(unsigned int)arg1 ;
-(void)setFencePort:(unsigned int)arg0 ;
-(void)setFencePort:(unsigned int)arg0 commitHandler:(id)arg1 ;
-(void)setObject:(id)arg0 forSlot:(unsigned int)arg1 ;
-(void)transferSlot:(unsigned int)arg0 toContextWithId:(unsigned int)arg1 ;


@end


#endif