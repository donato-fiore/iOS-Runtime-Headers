// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKFORMFEATURESEGMENTED_H
#define AKFORMFEATURESEGMENTED_H

@class NSArray;


#import "AKFormFeature.h"
#import "AKFormFeatureLine.h"

@interface AKFormFeatureSegmented : AKFormFeature

@property (retain, nonatomic) AKFormFeatureLine *baseline; // ivar: _baseline
@property (retain, nonatomic) NSArray *characterSegmentRects; // ivar: _characterSegmentRects
@property (nonatomic) CGRect enclosingRegionRect; // ivar: _enclosingRegionRect


+(id)segments:(id)arg0 withEnclosingRect:(struct CGRect )arg1 baseline:(id)arg2 onPage:(id)arg3 ;
-(id)initWithCharacterSegments:(id)arg0 enclosingRect:(struct CGRect )arg1 baseline:(id)arg2 onPage:(id)arg3 ;


@end


#endif