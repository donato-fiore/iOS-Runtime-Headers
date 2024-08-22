// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXSHOTFLOWCONFIGURATION_H
#define AXSHOTFLOWCONFIGURATION_H

@class NSArray, NSNumber;

#import <Foundation/Foundation.h>


@interface AXShotflowConfiguration : NSObject

@property (readonly, nonatomic) NSArray *defaultBoxesSidesNormalized; // ivar: _defaultBoxesSidesNormalized
@property (readonly, nonatomic) NSArray *filterThresholds; // ivar: _filterThresholds
@property (readonly, nonatomic) NSNumber *networkThreshold; // ivar: _networkThreshold
@property (readonly, nonatomic) NSNumber *nmsThreshold; // ivar: _nmsThreshold
@property (readonly, nonatomic) NSArray *ratios; // ivar: _ratios


-(id)description;
-(id)initWithURL:(id)arg0 ;


@end


#endif