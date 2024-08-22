// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASEABSORPTIONDATA_H
#define PHASEABSORPTIONDATA_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PHASEAbsorptionData : NSObject

@property (readonly, nonatomic) NSArray *absorptionCoefficients; // ivar: _absorptionCoefficients


+(id)new;
+(id)objectForDefault;
-(id)init;
-(id)initWithAbsorptionCoefficients:(id)arg0 ;
-(id)initWithAbsorptionCoefficients:(id)arg0 frequencyBands:(id)arg1 ;


@end


#endif