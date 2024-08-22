// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NMRPLAYBACKQUEUERESPONSE_H
#define NMRPLAYBACKQUEUERESPONSE_H

@class NSString;
@protocol NMRMediaRemoteProtobufCodable;

#import <Foundation/Foundation.h>

#import "_NMRPlaybackQueueResponseProtobuf.h"

@interface NMRPlaybackQueueResponse : NSObject <NMRMediaRemoteProtobufCodable>

 {
    _NMRPlaybackQueueResponseProtobuf *_protobuf;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) *__CFError error;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *void playbackQueue;
@property (readonly) Class superclass;


-(id)initWithPlaybackQueue:(*void)arg0 error:(struct __CFError *)arg1 ;
-(id)initWithProtobufData:(id)arg0 ;
-(id)protobufData;
-(void)invokeCompletion:(id)arg0 ;


@end


#endif