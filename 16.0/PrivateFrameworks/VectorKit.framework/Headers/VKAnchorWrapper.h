// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKANCHORWRAPPER_H
#define VKANCHORWRAPPER_H

@class NSString;
@protocol VKAnchorDelegate, MDRenderTarget;

#import <Foundation/Foundation.h>


@interface VKAnchorWrapper : NSObject <VKAnchorDelegate>

 {
    ? _anchor;
    CGPoint _screenPointInCanvas;
    CGSize _canvasSize;
    *void _cameraContext;
    *void _anchorManager;
    Coordinate3D<geo::Degrees, double> _lastCoordinate;
    BOOL _isUpdating;
    CGFloat _pointsPerMeter;
}


@property (readonly, nonatomic) ? coordinate;
@property (readonly, nonatomic) ? coordinate3D;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSObject<MDRenderTarget> *displayLayer; // ivar: _displayLayer
@property (readonly, nonatomic) CGFloat elevationOffset;
@property (nonatomic) BOOL followsTerrain; // ivar: _followsTerrain
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)pointOffsetForDistanceOffset:(CGFloat)arg0 ;
-(struct CGPoint )pointInLayer:(id)arg0 bound:(struct CGRect )arg1 ;
-(struct shared_ptr<md::Anchor> )_anchorWithContext:(*void)arg0 ;
-(void)_updateCachedPoint;
-(void)anchorWorldPointDidChange:(*void)arg0 ;
-(void)dealloc;
-(void)destroyAnchor;
-(void)layoutWithContext:(*void)arg0 ;
-(void)updateIfNeeded;


@end


#endif