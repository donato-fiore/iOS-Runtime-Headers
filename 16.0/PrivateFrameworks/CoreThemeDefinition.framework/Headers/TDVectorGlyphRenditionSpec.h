// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TDVECTORGLYPHRENDITIONSPEC_H
#define TDVECTORGLYPHRENDITIONSPEC_H

@class NSSet;


#import "TDSimpleArtworkRenditionSpec.h"

@interface TDVectorGlyphRenditionSpec : TDSimpleArtworkRenditionSpec

@property (retain, nonatomic) NSSet *avaliablePointSizes;


+(id)fetchRequest;
-(BOOL)canBePackedWithDocument:(id)arg0 ;
-(id)createCSIRepresentationWithCompression:(BOOL)arg0 colorSpaceID:(NSUInteger)arg1 document:(id)arg2 ;


@end


#endif