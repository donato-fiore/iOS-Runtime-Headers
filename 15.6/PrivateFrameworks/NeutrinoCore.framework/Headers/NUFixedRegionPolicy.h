// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUFIXEDREGIONPOLICY_H
#define NUFIXEDREGIONPOLICY_H

@class NSString;
@protocol NURegionPolicy;

#import <Foundation/Foundation.h>

#import "NURegion.h"

@interface NUFixedRegionPolicy : NSObject <NURegionPolicy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NURegion *region; // ivar: _region
@property NSInteger roundingPolicy; // ivar: _roundingPolicy
@property ? scale; // ivar: _scale
@property (readonly) Class superclass;


-(id)init;
-(id)initWithRect:(struct ? )arg0 ;
-(id)initWithRegion:(id)arg0 ;
-(id)regionForGeometry:(id)arg0 ;


@end


#endif