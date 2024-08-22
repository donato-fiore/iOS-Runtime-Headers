// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMSTRIDECALIBRATIONENTRYINTERNAL_H
#define CMSTRIDECALIBRATIONENTRYINTERNAL_H



#import "CMStrideCalibrationEntry.h"

@interface CMStrideCalibrationEntryInternal : CMStrideCalibrationEntry

@property (readonly, nonatomic) CGFloat kvalue;
@property (readonly, nonatomic) CGFloat kvalueTrack;
@property (readonly, nonatomic) unsigned int pacebin;
@property (readonly, nonatomic) CGFloat score;
@property (readonly, nonatomic) int session;


-(id)description;


@end


#endif