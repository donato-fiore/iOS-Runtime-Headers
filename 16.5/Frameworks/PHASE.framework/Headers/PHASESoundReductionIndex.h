// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHASESOUNDREDUCTIONINDEX_H
#define PHASESOUNDREDUCTIONINDEX_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PHASESoundReductionIndex : NSObject

@property (readonly, nonatomic) NSArray *attenuationCoefficients; // ivar: _attenuationCoefficients
@property (readonly, nonatomic) float measuredDepth; // ivar: _measuredDepth


+(id)new;
+(id)objectForDefault;
-(id)init;
-(id)initWithAttenuationCoefficients:(id)arg0 measuredDepth:(float)arg1 ;
-(id)initWithSoundReductionIndices:(id)arg0 frequencyBands:(id)arg1 measuredDepth:(float)arg2 ;


@end


#endif