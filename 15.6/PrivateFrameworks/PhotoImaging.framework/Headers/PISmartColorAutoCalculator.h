// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PISMARTCOLORAUTOCALCULATOR_H
#define PISMARTCOLORAUTOCALCULATOR_H

@class NUAutoCalculator, NSString;
@protocol NUTimeBased;



@interface PISmartColorAutoCalculator : NUAutoCalculator <NUTimeBased>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) ? time;


-(id)submitSynchronous:(*id)arg0 ;
-(void)submit:(id)arg0 ;


@end


#endif