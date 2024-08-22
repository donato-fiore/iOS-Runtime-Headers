// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PISMARTBLACKANDWHITEAUTOCALCULATOR_H
#define PISMARTBLACKANDWHITEAUTOCALCULATOR_H

@class NUAutoCalculator, NSString;
@protocol NUTimeBased;



@interface PISmartBlackAndWhiteAutoCalculator : NUAutoCalculator <NUTimeBased>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) ? time;


-(id)_calculateBlackAndWhiteSettingsFromBufferImage:(id)arg0 ;
-(void)submit:(id)arg0 ;


@end


#endif