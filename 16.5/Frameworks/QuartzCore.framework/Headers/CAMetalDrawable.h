// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMETALDRAWABLE_H
#define CAMETALDRAWABLE_H

@class NSMutableArray, NSString, IOSurfaceSharedEvent;
@protocol CAMetalDrawable, CAMetalDrawableSPI, MTLDrawableSPI, MTLTexture;

#import <Foundation/Foundation.h>

#import "CAMetalLayer.h"

@interface CAMetalDrawable : NSObject <CAMetalDrawable, CAMetalDrawableSPI, MTLDrawableSPI>

 {
    ? _priv;
    id<MTLTexture> *_cachedTexture;
    CAMetalLayer *_layer;
    NSMutableArray *_presentedHandlers;
    NSMutableArray *_presentScheduledHandlers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didComposite; // ivar: _didComposite
@property (nonatomic) CGRect dirtyRect; // ivar: _dirtyRect
@property (nonatomic) NSUInteger drawableID; // ivar: _drawableID
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned int insertSeed; // ivar: _insertSeed
@property (readonly) CAMetalLayer *layer;
@property (nonatomic) unsigned int presentScheduledInsertSeed; // ivar: _presentScheduledInsertSeed
@property (nonatomic) BOOL presentScheduledInsertSeedValid; // ivar: _presentScheduledInsertSeedValid
@property (nonatomic) CGFloat presentedTime; // ivar: _presentedTime
@property (retain, nonatomic) IOSurfaceSharedEvent *sharedEvent; // ivar: _sharedEvent
@property (nonatomic) NSUInteger status; // ivar: _status
@property (readonly) Class superclass;
@property (readonly) NSObject<MTLTexture> *texture;
@property (nonatomic) unsigned int updateSeed; // ivar: _updateSeed


-(?)priv;
-(BOOL)hasPresentedHandlers;
-(id)cachedTexture;
-(id)initWithDrawablePrivate:(struct _CAMetalDrawablePrivate *)arg0 layer:(id)arg1 ;
-(id)newTextureWithResourceIndex:(NSUInteger)arg0 ;
-(void)addPresentScheduledHandler:(id)arg0 ;
-(void)addPresentedHandler:(id)arg0 ;
-(void)dealloc;
-(void)didPresentAtTime:(CGFloat)arg0 ;
-(void)didScheduledPresent;
-(void)present;
-(void)presentAfterMinimumDuration:(CGFloat)arg0 ;
-(void)presentAtTime:(CGFloat)arg0 ;
-(void)presentWithOptions:(id)arg0 ;
-(void)releasePrivateReferences:(*void)arg0 ;


@end


#endif