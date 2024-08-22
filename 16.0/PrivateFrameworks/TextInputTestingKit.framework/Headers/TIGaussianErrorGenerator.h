// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIGAUSSIANERRORGENERATOR_H
#define TIGAUSSIANERRORGENERATOR_H



#import "TIErrorGenerator.h"

@interface TIGaussianErrorGenerator : TIErrorGenerator {
    float _globalStdevX;
    float _globalStdevY;
    float _perTouchStdevX;
    float _perTouchStdevY;
    CGPoint _globalBias;
}




-(id)initWithAttributes:(id)arg0 ;
-(struct CGPoint )globalBias;
-(struct CGPoint )persistentBiasForKeyString:(id)arg0 rect:(struct CGRect )arg1 ;
-(struct CGPoint )randomErrorForKeyString:(id)arg0 rect:(struct CGRect )arg1 ;
-(struct CGPoint )randomPointInDistribution;
-(struct CGPoint )randomPointWithStandardDeviationX:(float)arg0 Y:(float)arg1 ;
-(struct CGPoint )randomTargetForSpaceBarRect:(struct CGRect )arg0 ;
-(void)reset;
-(void)updateGlobalBias;


@end


#endif