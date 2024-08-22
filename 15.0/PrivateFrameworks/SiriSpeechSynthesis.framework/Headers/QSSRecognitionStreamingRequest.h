// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSRECOGNITIONSTREAMINGREQUEST_H
#define QSSRECOGNITIONSTREAMINGREQUEST_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "QSSAudioPacket.h"
#import "QSSCheckForSpeechRequest.h"
#import "QSSFinishAudio.h"
#import "QSSResetServerEndpointer.h"
#import "QSSSetAlternateRecognitionSausage.h"
#import "QSSSetEndpointerState.h"
#import "QSSSetRequestOrigin.h"
#import "QSSSetSpeechContext.h"
#import "QSSSetSpeechProfile.h"
#import "QSSStartSpeechRequest.h"
#import "QSSUpdateAudioInfo.h"

@interface QSSRecognitionStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *RecognitionStreamingRequest _root;
}


@property (readonly, nonatomic) QSSAudioPacket *contentAsQSSAudioPacket;
@property (readonly, nonatomic) QSSCheckForSpeechRequest *contentAsQSSCheckForSpeechRequest;
@property (readonly, nonatomic) QSSFinishAudio *contentAsQSSFinishAudio;
@property (readonly, nonatomic) QSSResetServerEndpointer *contentAsQSSResetServerEndpointer;
@property (readonly, nonatomic) QSSSetAlternateRecognitionSausage *contentAsQSSSetAlternateRecognitionSausage;
@property (readonly, nonatomic) QSSSetEndpointerState *contentAsQSSSetEndpointerState;
@property (readonly, nonatomic) QSSSetRequestOrigin *contentAsQSSSetRequestOrigin;
@property (readonly, nonatomic) QSSSetSpeechContext *contentAsQSSSetSpeechContext;
@property (readonly, nonatomic) QSSSetSpeechProfile *contentAsQSSSetSpeechProfile;
@property (readonly, nonatomic) QSSStartSpeechRequest *contentAsQSSStartSpeechRequest;
@property (readonly, nonatomic) QSSUpdateAudioInfo *contentAsQSSUpdateAudioInfo;
@property (readonly, nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct RecognitionStreamingRequest *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct RecognitionStreamingRequest *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::qss_fb::RecognitionStreamingRequest> )addObjectToBuffer:(*void)arg0 ;


@end


#endif