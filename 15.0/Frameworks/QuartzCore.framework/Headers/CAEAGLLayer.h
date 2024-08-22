// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAEAGLLAYER_H
#define CAEAGLLAYER_H

@class NSDictionary;
@protocol EAGLDrawable;


#import "CALayer.h"

@interface CAEAGLLayer : CALayer <EAGLDrawable>

 {
    *_CAEAGLNativeWindow _win;
}


@property (getter=isAsynchronous) BOOL asynchronous;
@property (copy) NSDictionary *drawableProperties;
@property CGFloat drawableTimeoutSeconds;
@property CGFloat inputTime;
@property BOOL lowLatency;
@property NSUInteger maximumDrawableCount;
@property (readonly) *_EAGLNativeWindowObject nativeWindow;
@property BOOL presentsWithTransaction;


+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg0 ;
+(id)defaultValueForKey:(id)arg0 ;
-(BOOL)_defersDidBecomeVisiblePostCommit;
-(BOOL)isDrawableAvailable;
-(BOOL)isDrawableAvailableInternal;
-(BOOL)shouldArchiveValueForKey:(id)arg0 ;
-(void)_didCommitLayer:(*void)arg0 ;
-(void)_display;
-(void)dealloc;
-(void)didChangeValueForKey:(id)arg0 ;
-(void)discardContents;
-(void)layerDidBecomeVisible:(BOOL)arg0 ;


@end


#endif