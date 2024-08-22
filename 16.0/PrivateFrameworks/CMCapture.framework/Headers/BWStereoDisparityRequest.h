// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWSTEREODISPARITYREQUEST_H
#define BWSTEREODISPARITYREQUEST_H

@protocol BWStillImageProcessorControllerDelegate;

#import <Foundation/Foundation.h>

#import "BWStereoDisparityProcessorInput.h"

@interface BWStereoDisparityRequest : NSObject

@property (readonly, nonatomic) NSObject<BWStillImageProcessorControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) int err; // ivar: _err
@property (readonly, nonatomic) BWStereoDisparityProcessorInput *input; // ivar: _input


-(id)description;
-(void)dealloc;


@end


#endif