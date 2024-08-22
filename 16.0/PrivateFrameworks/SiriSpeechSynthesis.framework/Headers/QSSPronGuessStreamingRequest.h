// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSPRONGUESSSTREAMINGREQUEST_H
#define QSSPRONGUESSSTREAMINGREQUEST_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "QSSAudioPacket.h"
#import "QSSCancelRequest.h"
#import "QSSFinishAudio.h"
#import "QSSStartPronGuessRequest.h"

@interface QSSPronGuessStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *PronGuessStreamingRequest _root;
}


@property (readonly, nonatomic) QSSAudioPacket *contentAsQSSAudioPacket;
@property (readonly, nonatomic) QSSCancelRequest *contentAsQSSCancelRequest;
@property (readonly, nonatomic) QSSFinishAudio *contentAsQSSFinishAudio;
@property (readonly, nonatomic) QSSStartPronGuessRequest *contentAsQSSStartPronGuessRequest;
@property (readonly, nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct PronGuessStreamingRequest *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct PronGuessStreamingRequest *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::qss_fb::PronGuessStreamingRequest> )addObjectToBuffer:(*void)arg0 ;


@end


#endif