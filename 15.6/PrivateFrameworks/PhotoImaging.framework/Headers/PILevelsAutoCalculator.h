// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PILEVELSAUTOCALCULATOR_H
#define PILEVELSAUTOCALCULATOR_H

@class NUAutoCalculator, NSString;
@protocol NUTimeBased;



@interface PILevelsAutoCalculator : NUAutoCalculator <NUTimeBased>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) ? time;


-(id)calculateSettingsForImageHistogram:(id)arg0 ;
-(id)calculateSettingsForSingleChannelHistogram:(id)arg0 suffix:(id)arg1 ;
-(void)submit:(id)arg0 ;


@end


#endif