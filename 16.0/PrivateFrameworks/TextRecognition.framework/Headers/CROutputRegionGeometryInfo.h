// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CROUTPUTREGIONGEOMETRYINFO_H
#define CROUTPUTREGIONGEOMETRYINFO_H



#import "CRImageSpaceQuad.h"

@interface CROutputRegionGeometryInfo : CRImageSpaceQuad

@property (readonly) CGVector baselineVector; // ivar: _baselineVector
@property CGSize cachedSize; // ivar: cachedSize
@property (readonly) CGFloat estimatedLineHeight; // ivar: _estimatedLineHeight


-(id)initFromOutputRegion:(id)arg0 ;
-(id)mutualGeometryInfoWith:(id)arg0 ;
-(struct CGSize )size;


@end


#endif