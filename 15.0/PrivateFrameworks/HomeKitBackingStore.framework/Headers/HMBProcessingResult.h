// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMBPROCESSINGRESULT_H
#define HMBPROCESSINGRESULT_H

@class HMFObject, NSArray, NAFuture;


#import "HMBProcessingOptions.h"

@interface HMBProcessingResult : HMFObject

@property (readonly, nonatomic) NSArray *actions; // ivar: _actions
@property (readonly, nonatomic) NAFuture *mirrorOutputResult; // ivar: _mirrorOutputResult
@property (readonly, nonatomic) HMBProcessingOptions *options; // ivar: _options


-(id)initWithOptions:(id)arg0 actions:(id)arg1 mirrorOutputResult:(id)arg2 ;


@end


#endif