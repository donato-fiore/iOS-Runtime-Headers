// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTLANGUAGEDETECTIONSTREAMINGREQUEST_H
#define FTLANGUAGEDETECTIONSTREAMINGREQUEST_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "FTAudioPacket.h"
#import "FTFinishAudio.h"
#import "FTStartLanguageDetectionRequest.h"

@interface FTLanguageDetectionStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *LanguageDetectionStreamingRequest _root;
}


@property (readonly, nonatomic) FTAudioPacket *contentAsFTAudioPacket;
@property (readonly, nonatomic) FTFinishAudio *contentAsFTFinishAudio;
@property (readonly, nonatomic) FTStartLanguageDetectionRequest *contentAsFTStartLanguageDetectionRequest;
@property (readonly, nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct LanguageDetectionStreamingRequest *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct LanguageDetectionStreamingRequest *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::qss_fb::LanguageDetectionStreamingRequest> )addObjectToBuffer:(*void)arg0 ;


@end


#endif