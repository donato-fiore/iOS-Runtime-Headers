// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PIWHITEBALANCEAUTOCALCULATOR_H
#define PIWHITEBALANCEAUTOCALCULATOR_H

@class NUAutoCalculator, NSString;
@protocol NUTimeBased;



@interface PIWhiteBalanceAutoCalculator : NUAutoCalculator <NUTimeBased>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) ? time;


-(BOOL)_useTempTint:(struct ? )arg0 ;
-(struct ? )_chooseNeutralGrayForNonSushi:(struct ? )arg0 ;
-(struct ? )_chooseTempTintForSushi:(struct ? )arg0 RAWProperties:(id)arg1 brightness:(CGFloat)arg2 ;
-(struct ? )_correctedRGBResultFromResult:(struct ? )arg0 ;
-(void)submit:(id)arg0 ;


@end


#endif