// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFSIRIREQUEST_H
#define SFSIRIREQUEST_H

@class VSSpeechRequest;

#import <Foundation/Foundation.h>


@interface SFSiriRequest : NSObject

@property (nonatomic) CGFloat delaySecs; // ivar: _delaySecs
@property (nonatomic) unsigned int flags; // ivar: _flags
@property (retain, nonatomic) id *owner; // ivar: _owner
@property (copy, nonatomic) id *speechCompletion; // ivar: _speechCompletion
@property (copy, nonatomic) id *speechStartHandler; // ivar: _speechStartHandler
@property (copy, nonatomic) VSSpeechRequest *speechSynthesisRequest; // ivar: _speechSynthesisRequest
@property (retain, nonatomic) VSSpeechRequest *speechUtteranceRequest; // ivar: _speechUtteranceRequest
@property (nonatomic) NSUInteger startTicks; // ivar: _startTicks
@property (nonatomic) BOOL synthesizing; // ivar: _synthesizing




@end


#endif