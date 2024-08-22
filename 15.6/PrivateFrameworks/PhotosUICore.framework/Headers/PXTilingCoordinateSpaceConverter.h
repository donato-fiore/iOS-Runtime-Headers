// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXTILINGCOORDINATESPACECONVERTER_H
#define PXTILINGCOORDINATESPACECONVERTER_H


#import <Foundation/Foundation.h>


@interface PXTilingCoordinateSpaceConverter : NSObject

@property (nonatomic) BOOL shouldCache; // ivar: _shouldCache


+(BOOL)_canConvertBetweenCoordinateSpace:(id)arg0 andCoordinateSpace:(id)arg1 ;
+(BOOL)canConvertBetweenCoordinateSpaceIdentifier:(*void)arg0 andCoordinateSpaceIdentifier:(*void)arg1 ;
+(id)defaultConverter;
-(struct CGAffineTransform )_transformOfCoordinateSpace:(id)arg0 relativeToCoordinateSpace:(id)arg1 ;
-(struct CGAffineTransform )_transformOfCoordinateSpaceIdentifier:(*void)arg0 relativeToCoordinateSpaceIdentifier:(*void)arg1 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 fromCoordinateSpaceIdentifier:(*void)arg1 toCoordinateSpaceIdentifier:(*void)arg2 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 fromCoordinateSpaceIdentifier:(*void)arg1 toCoordinateSpaceIdentifier:(*void)arg2 ;
-(struct PXTileGeometry )convertTileGeometry:(struct PXTileGeometry )arg0 toCoordinateSpaceIdentifier:(*void)arg1 ;
-(void)invalidateCache;


@end


#endif