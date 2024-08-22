// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHMULTIDATACHARTREPMULTIDATABUILDANIMATEDLAYERS_H
#define TSCHMULTIDATACHARTREPMULTIDATABUILDANIMATEDLAYERS_H

@class NSArray, CALayer;

#import <Foundation/Foundation.h>


@interface TSCHMultiDataChartRepMultiDataBuildAnimatedLayers : NSObject

@property (readonly, nonatomic) NSArray *allBackgroundFadingLayers;
@property (retain, nonatomic) CALayer *backgroundLayer; // ivar: _backgroundLayer
@property (retain, nonatomic) CALayer *dataSetNameLayer; // ivar: _dataSetNameLayer
@property (readonly, nonatomic) NSArray *elementFadingLayers;
@property (copy, nonatomic) NSArray *elementLayers; // ivar: _elementLayers
@property (readonly, nonatomic) NSArray *layersAlreadyHaveProperTransforms;
@property (retain, nonatomic) CALayer *legendLayer; // ivar: _legendLayer
@property (copy, nonatomic) NSArray *referenceLineLayers; // ivar: _referenceLineLayers


+(id)animatedLayers;
-(id)layersRequiringGeometryTransformsBackgroundOnly:(BOOL)arg0 ;


@end


#endif