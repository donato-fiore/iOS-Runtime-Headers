// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWREDEYEREDUCTIONREQUEST_H
#define BWREDEYEREDUCTIONREQUEST_H

@protocol BWStillImageProcessorControllerDelegate;

#import <Foundation/Foundation.h>

#import "BWRedEyeReductionControllerInput.h"

@interface BWRedEyeReductionRequest : NSObject

@property (readonly, nonatomic) NSObject<BWStillImageProcessorControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BWRedEyeReductionControllerInput *input; // ivar: _input
@property (nonatomic) int mode; // ivar: _mode


-(id)description;
-(id)initWithInput:(id)arg0 delegate:(id)arg1 ;
-(void)dealloc;


@end


#endif