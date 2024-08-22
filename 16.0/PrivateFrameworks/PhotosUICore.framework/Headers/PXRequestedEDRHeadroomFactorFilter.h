// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXREQUESTEDEDRHEADROOMFACTORFILTER_H
#define PXREQUESTEDEDRHEADROOMFACTORFILTER_H



#import "PXNumberFilter.h"

@interface PXRequestedEDRHeadroomFactorFilter : PXNumberFilter

@property (nonatomic) CGFloat highValue; // ivar: _highValue
@property (nonatomic) CGFloat lastDecreaseTime; // ivar: _lastDecreaseTime
@property (readonly, nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) CGFloat sustainDuration; // ivar: _sustainDuration


-(CGFloat)updatedOutput;
-(id)initWithInput:(CGFloat)arg0 ;
-(void)setInput:(CGFloat)arg0 ;


@end


#endif