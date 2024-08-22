// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWSTILLIMAGEPROCESSORCONTROLLERREQUEST_H
#define BWSTILLIMAGEPROCESSORCONTROLLERREQUEST_H

@protocol BWStillImageProcessorControllerDelegate;

#import <Foundation/Foundation.h>

#import "BWStillImageProcessorControllerInput.h"

@interface BWStillImageProcessorControllerRequest : NSObject

@property (readonly, nonatomic) NSObject<BWStillImageProcessorControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) int err; // ivar: _err
@property (readonly, nonatomic) BWStillImageProcessorControllerInput *input; // ivar: _input


-(BOOL)readyForProcessing;
-(id)description;
-(id)initWithInput:(id)arg0 delegate:(id)arg1 ;
-(void)dealloc;


@end


#endif