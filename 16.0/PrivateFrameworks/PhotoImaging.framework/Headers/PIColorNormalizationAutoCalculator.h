// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PICOLORNORMALIZATIONAUTOCALCULATOR_H
#define PICOLORNORMALIZATIONAUTOCALCULATOR_H

@class NUAutoCalculator, NSString;
@protocol NUTimeBased;



@interface PIColorNormalizationAutoCalculator : NUAutoCalculator <NUTimeBased>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) ? time; // ivar: time


+(BOOL)isAvailable;
+(id)autoCalculatorWithImageData:(id)arg0 orientation:(NSInteger)arg1 ;
-(id)initWithComposition:(id)arg0 ;
-(void)submit:(id)arg0 ;


@end


#endif