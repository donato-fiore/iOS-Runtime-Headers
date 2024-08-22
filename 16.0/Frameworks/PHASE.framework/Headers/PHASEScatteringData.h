// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASESCATTERINGDATA_H
#define PHASESCATTERINGDATA_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PHASEScatteringData : NSObject

@property (readonly, nonatomic) NSArray *scatteringCoefficients; // ivar: _scatteringCoefficients


+(id)new;
+(id)objectForDefault;
-(id)init;
-(id)initWithScatteringCoefficients:(id)arg0 ;
-(id)initWithScatteringCoefficients:(id)arg0 frequencyBands:(id)arg1 ;


@end


#endif