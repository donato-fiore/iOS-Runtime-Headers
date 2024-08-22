// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNVIDEOPROCESSORTIMEINTERVALCADENCE_H
#define VNVIDEOPROCESSORTIMEINTERVALCADENCE_H



#import "VNVideoProcessorCadence.h"

@interface VNVideoProcessorTimeIntervalCadence : VNVideoProcessorCadence

@property (readonly) CGFloat timeInterval; // ivar: _timeInterval


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithTimeInterval:(CGFloat)arg0 ;
-(void)populateVCPVideoProcessorRequestConfiguration:(id)arg0 ;


@end


#endif