// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUTILEDIMAGELAYER_H
#define NUTILEDIMAGELAYER_H

@class CALayer, NUImageGeometry, NSMutableArray, NSString;
@protocol CALayerDelegate, NUPurgeableTextureImage, NUTextureImage;



@interface NUTiledImageLayer : CALayer <CALayerDelegate>



@property (retain) NUImageGeometry *_geometry; // ivar: __geometry
@property (retain) NSObject<NUPurgeableTextureImage> *_image; // ivar: __image
@property (retain) NSMutableArray *_tileLayers; // ivar: __tileLayers
@property (retain) *CGColor debugColor; // ivar: _debugColor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NUImageGeometry *geometry;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<NUTextureImage> *image;
@property (readonly, nonatomic) BOOL nu_contentsAreFlipped;
@property (readonly) Class superclass;
@property (nonatomic) ? validRegionInsets; // ivar: _validRegionInsets


+(id)defaultActionForKey:(id)arg0 ;
-(id)actionForLayer:(id)arg0 forKey:(id)arg1 ;
-(id)init;
-(id)snapshotImage;
-(void)_updateSublayers;
-(void)dealloc;
-(void)layoutSublayers;


@end


#endif