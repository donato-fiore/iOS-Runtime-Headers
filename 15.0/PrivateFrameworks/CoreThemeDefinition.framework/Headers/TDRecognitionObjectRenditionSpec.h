// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TDRECOGNITIONOBJECTRENDITIONSPEC_H
#define TDRECOGNITIONOBJECTRENDITIONSPEC_H



#import "TDSimpleArtworkRenditionSpec.h"

@interface TDRecognitionObjectRenditionSpec : TDSimpleArtworkRenditionSpec

@property (nonatomic) float a11;
@property (nonatomic) float a12;
@property (nonatomic) float a13;
@property (nonatomic) float a14;
@property (nonatomic) float a21;
@property (nonatomic) float a22;
@property (nonatomic) float a23;
@property (nonatomic) float a24;
@property (nonatomic) float a31;
@property (nonatomic) float a32;
@property (nonatomic) float a33;
@property (nonatomic) float a34;
@property (nonatomic) float a41;
@property (nonatomic) float a42;
@property (nonatomic) float a43;
@property (nonatomic) float a44;
@property ? referenceOriginTransform;
@property (nonatomic) int version;


+(id)fetchRequest;
-(id)createCSIRepresentationWithCompression:(BOOL)arg0 colorSpaceID:(NSUInteger)arg1 document:(id)arg2 ;


@end


#endif