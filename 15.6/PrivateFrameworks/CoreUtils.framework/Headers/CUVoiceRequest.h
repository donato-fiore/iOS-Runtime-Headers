// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUVOICEREQUEST_H
#define CUVOICEREQUEST_H

@class VSSpeechRequest;

#import <Foundation/Foundation.h>


@interface CUVoiceRequest : NSObject

@property (copy, nonatomic) id *completion; // ivar: _completion
@property (nonatomic) unsigned int flags; // ivar: _flags
@property (retain, nonatomic) id *owner; // ivar: _owner
@property (retain, nonatomic) VSSpeechRequest *speechRequest; // ivar: _speechRequest




@end


#endif