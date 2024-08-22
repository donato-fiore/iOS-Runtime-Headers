// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSLANGUAGEDETECTIONSTREAMINGREQUEST_H
#define QSSLANGUAGEDETECTIONSTREAMINGREQUEST_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "QSSAudioPacket.h"
#import "QSSFinishAudio.h"
#import "QSSStartLanguageDetectionRequest.h"

@interface QSSLanguageDetectionStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *LanguageDetectionStreamingRequest _root;
}


@property (readonly, nonatomic) QSSAudioPacket *contentAsQSSAudioPacket;
@property (readonly, nonatomic) QSSFinishAudio *contentAsQSSFinishAudio;
@property (readonly, nonatomic) QSSStartLanguageDetectionRequest *contentAsQSSStartLanguageDetectionRequest;
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