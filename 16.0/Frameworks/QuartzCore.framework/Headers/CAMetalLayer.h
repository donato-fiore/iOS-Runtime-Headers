// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMETALLAYER_H
#define CAMETALLAYER_H

@class NSDictionary;
@protocol MTLDevice;


#import "CALayer.h"
#import "CAEDRMetadata.h"

@interface CAMetalLayer : CALayer {
    *void _priv;
}


@property (retain) CAEDRMetadata *EDRMetadata;
@property BOOL allowsNextDrawableTimeout;
@property *CGColorSpace colorspace;
@property (copy) NSDictionary *developerHUDProperties;
@property (retain) NSObject<MTLDevice> *device;
@property (readonly, nonatomic) NSUInteger displayCompositingInternalStatus;
@property CGSize drawableSize;
@property (nonatomic) CGFloat drawableTimeoutSeconds;
@property (nonatomic) BOOL exclusiveMode;
@property (nonatomic) BOOL fenceEnabled;
@property BOOL framebufferOnly;
@property (nonatomic) CGFloat inputTime;
@property (nonatomic) BOOL lowLatency;
@property NSUInteger maximumDrawableCount;
@property (nonatomic) BOOL nonDefaultColorspace;
@property NSUInteger pixelFormat;
@property (readonly) NSObject<MTLDevice> *preferredDevice;
@property BOOL presentsWithTransaction;
@property (nonatomic) NSUInteger protectionOptions;
@property (nonatomic) BOOL serverSyncEnabled;
@property BOOL wantsExtendedDynamicRangeContent;


+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg0 ;
+(id)defaultValueForKey:(id)arg0 ;
-(BOOL)displaySyncEnabled;
-(BOOL)isDrawableAvailable;
-(BOOL)shouldArchiveValueForKey:(id)arg0 ;
-(id)init;
-(id)newDrawable;
-(id)nextDrawable;
-(void)_didCommitLayer:(*void)arg0 ;
-(void)_display;
-(void)dealloc;
-(void)didChangeValueForKey:(id)arg0 ;
-(void)discardContents;
-(void)layerDidBecomeVisible:(BOOL)arg0 ;
-(void)removeBackBuffers;
-(void)setContents:(id)arg0 ;
-(void)setDisplaySyncEnabled:(BOOL)arg0 ;


@end


#endif