// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMRPLAYBACKQUEUEREQUEST_H
#define NMRPLAYBACKQUEUEREQUEST_H

@class NSString;
@protocol NMRMediaRemoteProtobufCodable;

#import <Foundation/Foundation.h>

#import "_NMRPlaybackQueueRequestProtobuf.h"

@interface NMRPlaybackQueueRequest : NSObject <NMRMediaRemoteProtobufCodable>

 {
    _NMRPlaybackQueueRequestProtobuf *_protobuf;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *void playerPath;
@property (readonly, nonatomic) *void request;
@property (readonly) Class superclass;


-(id)initWithProtobufData:(id)arg0 ;
-(id)initWithRequest:(*void)arg0 playerPath:(*void)arg1 ;
-(id)protobufData;
-(void)performWithQueue:(id)arg0 completion:(id)arg1 ;


@end


#endif