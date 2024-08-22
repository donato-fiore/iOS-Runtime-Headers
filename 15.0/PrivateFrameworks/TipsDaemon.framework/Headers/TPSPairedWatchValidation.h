// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSPAIREDWATCHVALIDATION_H
#define TPSPAIREDWATCHVALIDATION_H

@class NSUUID;


#import "TPSTargetingValidation.h"

@interface TPSPairedWatchValidation : TPSTargetingValidation

@property (copy, nonatomic) NSUUID *capability; // ivar: _capability


-(id)initWithCapability:(id)arg0 ;
-(void)validateWithCompletion:(id)arg0 ;


@end


#endif