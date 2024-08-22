// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARQAHELPER_H
#define ARQAHELPER_H


#import <Foundation/Foundation.h>


@interface ARQAHelper : NSObject



+(float)_meanDepthValueOfDepthBuffer:(struct __CVBuffer *)arg0 consideringSegmentation:(BOOL)arg1 ofSegmentationBuffer:(struct __CVBuffer *)arg2 ;
+(id)arrayFromRaycastResults:(id)arg0 ;
+(id)arrayOf2dPoints:(*NSUInteger)arg0 count;
+(id)arrayOf3dPoints:(*NSUInteger)arg0 count;
+(id)arrayWithMatrix3x3:(struct ? )arg0 ;
+(id)arrayWithMatrix4x4:(struct ? )arg0 ;
+(id)arrayWithVector2;
+(id)arrayWithVector3;
+(id)arrayWithVector4;
+(id)dictionaryFromAnchor:(id)arg0 ;
+(id)dictionaryFromCLLocation:(id)arg0 ;
+(id)dictionaryFromMeshGeometry:(id)arg0 ;
+(id)dictionaryFromPatchGrid:(id)arg0 ;
+(id)dictionaryFromPlaneAnchor:(id)arg0 ;
+(id)dictionaryFromRawCLLocation:(id)arg0 ;
+(id)dictionaryFromRaycastQuery:(id)arg0 ;
+(id)dictionaryFromVertices:(*NSUInteger)arg0 vertexCount:(*NSUInteger)arg1 textureCoordinatestextureCoordinateCount;
+(id)extractAnchorDataForFrame:(id)arg0 ;
+(id)extractDetectedBodiesForFrame:(id)arg0 ;
+(id)formatDescriptionForAnchor;
+(id)formatDescriptionForPlaneAnchor;
+(id)generateTagsForConfiguration:(id)arg0 replaySensor:(id)arg1 technique:(id)arg2 ;
+(id)headerInformationWithConfiguration:(id)arg0 technique:(id)arg1 ;
+(id)traceFrameData:(id)arg0 withFrameIndex:(NSUInteger)arg1 ;
+(id)traceFrameData:(id)arg0 withFrameIndex:(NSUInteger)arg1 writeOBJ:(BOOL)arg2 ;
+(void)techniquesArray:(id)arg0 array:(id)arg1 ;
+(void)traverseTechniques:(id)arg0 withBlock:(id)arg1 ;


@end


#endif