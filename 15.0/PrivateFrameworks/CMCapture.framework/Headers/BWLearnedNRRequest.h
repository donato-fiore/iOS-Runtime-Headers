// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWLEARNEDNRREQUEST_H
#define BWLEARNEDNRREQUEST_H

@protocol BWLearnedNRProcessorControllerDelegate;

#import <Foundation/Foundation.h>

#import "BWLearnedNRInput.h"
#import "BWLearnedNROutput.h"

@interface BWLearnedNRRequest : NSObject

@property (readonly, nonatomic) NSObject<BWLearnedNRProcessorControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) int err; // ivar: _err
@property (readonly, nonatomic) BWLearnedNRInput *input; // ivar: _input
@property (readonly, nonatomic) BWLearnedNROutput *output; // ivar: _output


-(BOOL)receivedAllBuffers;
-(id)description;
-(id)initWithInput:(id)arg0 output:(id)arg1 delegate:(id)arg2 ;
-(void)dealloc;


@end


#endif