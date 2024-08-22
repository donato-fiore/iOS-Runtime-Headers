// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKHEARTRATESIGNATURERECTANGULARMODEL_H
#define NTKHEARTRATESIGNATURERECTANGULARMODEL_H

@class HKHeartRateSummary;


#import "NTKHeartRateModel.h"

@interface NTKHeartRateSignatureRectangularModel : NTKHeartRateModel

@property (retain, nonatomic) HKHeartRateSummary *mostRecentHeartRateSummary; // ivar: _mostRecentHeartRateSummary


-(void)manager:(id)arg0 receivedLatestHeartRateSummary:(id)arg1 ;


@end


#endif