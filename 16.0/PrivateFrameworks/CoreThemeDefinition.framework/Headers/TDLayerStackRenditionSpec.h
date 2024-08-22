// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TDLAYERSTACKRENDITIONSPEC_H
#define TDLAYERSTACKRENDITIONSPEC_H

@class NSString, NSOrderedSet;


#import "TDRenditionSpec.h"
#import "TDImageStackAsset.h"
#import "TDThemeCompressionType.h"

@interface TDLayerStackRenditionSpec : TDRenditionSpec

@property (retain, nonatomic) TDImageStackAsset *asset;
@property (nonatomic) CGSize canvasSize;
@property (retain, nonatomic) NSString *canvasSizeString;
@property (retain, nonatomic) TDThemeCompressionType *compressionType;
@property (retain, nonatomic) NSOrderedSet *layerReferences;
@property (nonatomic) CGSize primitiveCanvasSize; // ivar: primitiveCanvasSize


-(BOOL)canBePackedWithDocument:(id)arg0 ;
-(id)createCSIRepresentationWithCompression:(BOOL)arg0 colorSpaceID:(NSUInteger)arg1 document:(id)arg2 ;
-(void)awakeFromFetch;
-(void)prepareForDeletion;


@end


#endif