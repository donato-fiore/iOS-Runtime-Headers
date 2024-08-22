// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKOVERLAY_H
#define VKOVERLAY_H

@class NSString;
@protocol VKVectorOverlayDelegate, VKRasterTileOverlayProviderDelegate, VKOverlayDelegate;

#import <Foundation/Foundation.h>

#import "VKVectorOverlayData.h"
#import "VKRasterTileOverlayProviderData.h"

@interface VKOverlay : NSObject <VKVectorOverlayDelegate, VKRasterTileOverlayProviderDelegate>

 {
    BOOL _canProvideVectorGeometry;
    id<VKOverlayDelegate> *_delegate;
    unsigned int identifier;
    ? _flyoverContainer;
    ? _standardContainer;
    VKVectorOverlayData *_vectorData;
    unfair_lock _vectorDataLock;
    VKRasterTileOverlayProviderData *_rasterTileProvider;
    unfair_lock _rasterTileProviderLock;
}


@property (nonatomic) NSInteger blendMode; // ivar: _blendMode
@property (readonly) BOOL canProvideVectorData; // ivar: _canProvideVectorData
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VKOverlayDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) weak_ptr<md::GlobeOverlayContainer> flyoverContainer;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int identifier; // ivar: _identifier
@property (nonatomic) NSUInteger level; // ivar: _level
@property (readonly, nonatomic) shared_ptr<md::RasterTileOverlayStyle> rasterStyle; // ivar: _rasterStyle
@property (nonatomic) ? replaceMapContentInRect; // ivar: _replaceMapContentInRect
@property (nonatomic) *RunLoopController runLoopController; // ivar: _runLoopController
@property (nonatomic) weak_ptr<md::OverlayContainer> standardContainer;
@property (readonly) Class superclass;


-(BOOL)canDrawKey:(struct ? *)arg0 ;
-(BOOL)canPossiblyDrawKey:(struct ? *)arg0 ;
-(id)init;
-(id)rasterTileProvider;
-(id)vectorData;
-(void)_updateRasterTileProvider;
-(void)_updateVectorData;
-(void)dealloc;
-(void)drawKey:(struct ? *)arg0 inContext:(struct CGContext *)arg1 ;
-(void)rasterTileOverlayDidChangeAlpha:(id)arg0 ;
-(void)rasterTileOverlayNeedsDisplay:(id)arg0 ;
-(void)rasterTileOverlayNeedsInvalidate:(id)arg0 ;
-(void)setNeedsDisplayForReason:(NSUInteger)arg0 ;
-(void)setNeedsDisplayInRect:(struct ? *)arg0 level:(NSInteger)arg1 reason:(NSUInteger)arg2 ;
-(void)vectorOverlayNeedsDisplay:(id)arg0 needsFullInvalidate:(BOOL)arg1 ;


@end


#endif