// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTFOCUSBLURMAP_H
#define PTFOCUSBLURMAP_H

@class NSIndexSet;

#import <Foundation/Foundation.h>


@interface PTFocusBlurMap : NSObject {
    *PTFigCaptureStreamFocusBlurMap _map;
}


@property CGRect autoFocusRect; // ivar: _autoFocusRect
@property (readonly) CGRect focusValidNormalizedRect;
@property (readonly) NSIndexSet *inFocusRegion;
@property (readonly) NSUInteger inputHeight;
@property (readonly) CGRect inputValidNormalizedRect;
@property (readonly) NSUInteger inputWidth;
@property (readonly) NSUInteger inputX;
@property (readonly) NSUInteger inputY;
@property (readonly) NSIndexSet *largestFocusRegion;
@property (readonly) NSUInteger sensorHeight; // ivar: _sensorHeight
@property (readonly) NSUInteger sensorWidth; // ivar: _sensorWidth
@property (readonly) NSUInteger tileCountX;
@property (readonly) NSUInteger tileCountY;
@property (readonly) NSUInteger tileHeight;
@property (readonly) NSUInteger tileWidth;
@property (readonly) NSUInteger validHeight; // ivar: _validHeight
@property (readonly) NSUInteger validWidth; // ivar: _validWidth
@property (readonly) NSUInteger validX; // ivar: _validX
@property (readonly) NSUInteger validY; // ivar: _validY


-(NSUInteger)tileXForTile:(NSUInteger)arg0 ;
-(NSUInteger)tileYForTile:(NSUInteger)arg0 ;
-(id)_blurExtendedNodes:(id)arg0 blurMin:(int)arg1 blurMax:(int)arg2 ;
-(id)_blurExtendedNodes:(id)arg0 options:(NSUInteger)arg1 ;
-(id)_connectedComponentWithNode:(NSUInteger)arg0 unvisited:(id)arg1 ;
-(id)_connectedComponents:(id)arg0 ;
-(id)_inFocusNodes;
-(id)_largestOfComponents:(id)arg0 ;
-(id)_nodesBetweenBlurMin:(int)arg0 blurMax:(int)arg1 ;
-(id)_nodesForNormalizedRect:(struct CGRect )arg0 ;
-(id)_nodesFromTileRect:(struct CGRect )arg0 ;
-(id)init;
-(id)initWithFocusBlurMapData:(id)arg0 sensorSize:(struct CGSize )arg1 validSensorRect:(struct CGRect )arg2 ;
-(id)initWithFocusBlurMapDictionary:(id)arg0 ;
-(struct CGRect )_boxFromComponent:(id)arg0 ;
-(struct CGRect )_inputSensorPixelRect;
-(struct CGRect )_normalRectFromPixelRect:(struct CGRect )arg0 ;
-(struct CGRect )_pixelRectFromNormalRect:(struct CGRect )arg0 ;
-(struct CGRect )_sensorPixelRectFromRegion:(id)arg0 ;
-(struct CGRect )_sensorPixelRectFromTileRect:(struct CGRect )arg0 ;
-(struct CGRect )_tileRectFromNodes:(id)arg0 ;
-(struct CGRect )_tileRectFromSensorPixelRect:(struct CGRect )arg0 ;
-(struct CGRect )_validNormalizedRectFromSensorPixelRect:(struct CGRect )arg0 ;
-(struct CGRect )validNormalizedRectFromRegion:(id)arg0 ;
-(void)_getBlurRangeOfNodes:(id)arg0 blurMin:(*int)arg1 blurMax:(*int)arg2 ;
-(void)_initValidRectFromSensorWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif