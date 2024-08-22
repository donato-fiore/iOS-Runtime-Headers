// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RTLOCATIONDOWNSAMPLERTREE_H
#define RTLOCATIONDOWNSAMPLERTREE_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "RTLocationDownsamplerTree.h"

@interface RTLocationDownsamplerTree : NSObject

@property (retain, nonatomic) RTLocationDownsamplerTree *left; // ivar: _left
@property (retain, nonatomic) NSArray *locations; // ivar: _locations
@property (nonatomic) CGFloat maximumError; // ivar: _maximumError
@property (nonatomic) NSUInteger maximumErrorIndex; // ivar: _maximumErrorIndex
@property (retain, nonatomic) RTLocationDownsamplerTree *right; // ivar: _right


-(CGFloat)evaluateLocationsWithErrorFunction:(id)arg0 ;
-(id)allLocations;
-(id)description;
-(id)init;
-(id)initWithLocations:(id)arg0 errorFunction:(id)arg1 ;
-(id)sampledLocations;
-(void)splitLocationsWithErrorFunction:(id)arg0 ;


@end


#endif