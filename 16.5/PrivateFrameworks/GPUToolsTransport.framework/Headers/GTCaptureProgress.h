// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTCAPTUREPROGRESS_H
#define GTCAPTUREPROGRESS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GTCaptureCompletionState.h"
#import "GTCaptureDescriptor.h"

@interface GTCaptureProgress : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger captureState; // ivar: _captureState
@property (nonatomic) NSUInteger capturedCommandsBuffers; // ivar: _capturedCommandsBuffers
@property (retain, nonatomic) GTCaptureCompletionState *completionState; // ivar: _completionState
@property (retain, nonatomic) GTCaptureDescriptor *descriptor; // ivar: _descriptor


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif