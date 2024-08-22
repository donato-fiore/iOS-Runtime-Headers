// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSMULTILINGUALSTREAMINGREQUEST_H
#define QSSMULTILINGUALSTREAMINGREQUEST_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "QSSAudioPacket.h"
#import "QSSFinishAudio.h"
#import "QSSLanguageDetected.h"
#import "QSSSetRequestOrigin.h"
#import "QSSSetSpeechContext.h"
#import "QSSSetSpeechProfile.h"
#import "QSSStartMultilingualSpeechRequest.h"
#import "QSSUpdateAudioInfo.h"

@interface QSSMultilingualStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *MultilingualStreamingRequest _root;
}


@property (readonly, nonatomic) QSSAudioPacket *contentAsQSSAudioPacket;
@property (readonly, nonatomic) QSSFinishAudio *contentAsQSSFinishAudio;
@property (readonly, nonatomic) QSSLanguageDetected *contentAsQSSLanguageDetected;
@property (readonly, nonatomic) QSSSetRequestOrigin *contentAsQSSSetRequestOrigin;
@property (readonly, nonatomic) QSSSetSpeechContext *contentAsQSSSetSpeechContext;
@property (readonly, nonatomic) QSSSetSpeechProfile *contentAsQSSSetSpeechProfile;
@property (readonly, nonatomic) QSSStartMultilingualSpeechRequest *contentAsQSSStartMultilingualSpeechRequest;
@property (readonly, nonatomic) QSSUpdateAudioInfo *contentAsQSSUpdateAudioInfo;
@property (readonly, nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct MultilingualStreamingRequest *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct MultilingualStreamingRequest *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::qss_fb::MultilingualStreamingRequest> )addObjectToBuffer:(*void)arg0 ;


@end


#endif