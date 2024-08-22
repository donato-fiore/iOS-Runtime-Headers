// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHADJUSTMENTDATARESULT_H
#define PHADJUSTMENTDATARESULT_H



#import "PHCompositeMediaResult.h"

@interface PHAdjustmentDataResult : PHCompositeMediaResult



-(BOOL)containsValidData;
-(id)adjustmentData;
-(id)allowedInfoKeys;
-(void)setAdjustmentData:(id)arg0 ;


@end


#endif