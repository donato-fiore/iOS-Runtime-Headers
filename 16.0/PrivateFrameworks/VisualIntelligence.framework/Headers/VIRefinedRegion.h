// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VIREFINEDREGION_H
#define VIREFINEDREGION_H


#import <Foundation/Foundation.h>


@interface VIRefinedRegion : NSObject

@property (readonly, nonatomic) float confidence; // ivar: _confidence
@property (readonly, nonatomic) CGRect regionOfInterest; // ivar: _regionOfInterest


-(id)initWithRegionOfInterest:(struct CGRect )arg0 confidence:(float)arg1 ;


@end


#endif