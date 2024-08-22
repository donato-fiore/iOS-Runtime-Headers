// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TDRADIOSITYIMAGERENDITIONSPEC_H
#define TDRADIOSITYIMAGERENDITIONSPEC_H



#import "TDSimpleArtworkRenditionSpec.h"
#import "TDFlattenedImageRenditionSpec.h"

@interface TDRadiosityImageRenditionSpec : TDSimpleArtworkRenditionSpec

@property (retain, nonatomic) TDFlattenedImageRenditionSpec *flattenedImage;


-(BOOL)updatePackingPropertiesWithDocument:(id)arg0 ;
-(id)createCSIRepresentationWithCompression:(BOOL)arg0 colorSpaceID:(NSUInteger)arg1 document:(id)arg2 ;


@end


#endif