// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GTCAPTURECOMPLETIONSTATE_H
#define GTCAPTURECOMPLETIONSTATE_H

@class NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GTCaptureCompletionState : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSURL *archiveURL; // ivar: _archiveURL
@property (readonly, nonatomic) NSUInteger commandBuffersCaptured; // ivar: _commandBuffersCaptured
@property (readonly, nonatomic) NSUInteger framesCaptured; // ivar: _framesCaptured


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 frames:(NSUInteger)arg1 commandBuffers:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif