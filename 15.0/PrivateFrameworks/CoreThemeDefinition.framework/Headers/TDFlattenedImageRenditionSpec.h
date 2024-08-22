// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TDFLATTENEDIMAGERENDITIONSPEC_H
#define TDFLATTENEDIMAGERENDITIONSPEC_H

@class NSOrderedSet;


#import "TDSimpleArtworkRenditionSpec.h"
#import "TDRadiosityImageRenditionSpec.h"

@interface TDFlattenedImageRenditionSpec : TDSimpleArtworkRenditionSpec

@property (retain, nonatomic) NSOrderedSet *layerReferences;
@property (retain, nonatomic) TDRadiosityImageRenditionSpec *radiosityImage;


-(BOOL)updatePackingPropertiesWithDocument:(id)arg0 ;
-(id)createCSIRepresentationWithCompression:(BOOL)arg0 colorSpaceID:(NSUInteger)arg1 document:(id)arg2 ;
-(void)addLayerReferencesObject:(id)arg0 ;
-(void)drawFlattenedImageIntoContext:(struct CGContext *)arg0 document:(id)arg1 ;


@end


#endif