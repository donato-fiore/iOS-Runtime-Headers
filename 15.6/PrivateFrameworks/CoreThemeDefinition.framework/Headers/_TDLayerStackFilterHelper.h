// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TDLAYERSTACKFILTERHELPER_H
#define _TDLAYERSTACKFILTERHELPER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "TDLayerStackRenditionSpec.h"

@interface _TDLayerStackFilterHelper : NSObject

@property (retain, nonatomic) NSMutableArray *excludedDirections; // ivar: _excludedDirections
@property (retain, nonatomic) NSMutableArray *excludedHorizontalSizeClasses; // ivar: _excludedHorizontalSizeClasses
@property (retain, nonatomic) NSMutableArray *excludedIdioms; // ivar: _excludedIdioms
@property (retain, nonatomic) NSMutableArray *excludedLayers; // ivar: _excludedLayers
@property (retain, nonatomic) NSMutableArray *excludedPresentationStates; // ivar: _excludedPresentationStates
@property (retain, nonatomic) NSMutableArray *excludedScaleFactors; // ivar: _excludedScaleFactors
@property (retain, nonatomic) NSMutableArray *excludedSizes; // ivar: _excludedSizes
@property (retain, nonatomic) NSMutableArray *excludedStates; // ivar: _excludedStates
@property (retain, nonatomic) NSMutableArray *excludedSubtypes; // ivar: _excludedSubtypes
@property (retain, nonatomic) NSMutableArray *excludedValues; // ivar: _excludedValues
@property (retain, nonatomic) NSMutableArray *excludedVerticalSizeClasses; // ivar: _excludedVerticalSizeClasses
@property (retain, nonatomic) TDLayerStackRenditionSpec *layerStackRendition; // ivar: _layerStackRendition


-(BOOL)allowKey:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)establishExclusionsWithHelper:(id)arg0 idioms:(id)arg1 sizeClasses:(id)arg2 ;


@end


#endif