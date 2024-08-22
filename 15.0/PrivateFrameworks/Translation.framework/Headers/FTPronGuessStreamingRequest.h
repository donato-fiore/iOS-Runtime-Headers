// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTPRONGUESSSTREAMINGREQUEST_H
#define FTPRONGUESSSTREAMINGREQUEST_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "FTAudioPacket.h"
#import "FTCancelRequest.h"
#import "FTFinishAudio.h"
#import "FTStartPronGuessRequest.h"

@interface FTPronGuessStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *PronGuessStreamingRequest _root;
}


@property (readonly, nonatomic) FTAudioPacket *contentAsFTAudioPacket;
@property (readonly, nonatomic) FTCancelRequest *contentAsFTCancelRequest;
@property (readonly, nonatomic) FTFinishAudio *contentAsFTFinishAudio;
@property (readonly, nonatomic) FTStartPronGuessRequest *contentAsFTStartPronGuessRequest;
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