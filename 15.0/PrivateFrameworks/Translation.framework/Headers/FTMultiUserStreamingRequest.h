// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTMULTIUSERSTREAMINGREQUEST_H
#define FTMULTIUSERSTREAMINGREQUEST_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "FTAudioPacket.h"
#import "FTFinishAudio.h"
#import "FTMultiUserStartSpeechRequest.h"
#import "FTResetServerEndpointer.h"
#import "FTSetAlternateRecognitionSausage.h"
#import "FTSetEndpointerState.h"
#import "FTSetRequestOrigin.h"
#import "FTSetSpeechContext.h"
#import "FTSetSpeechProfile.h"
#import "FTUpdateAudioInfo.h"

@interface FTMultiUserStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *MultiUserStreamingRequest _root;
}


@property (readonly, nonatomic) FTAudioPacket *contentAsFTAudioPacket;
@property (readonly, nonatomic) FTFinishAudio *contentAsFTFinishAudio;
@property (readonly, nonatomic) FTMultiUserStartSpeechRequest *contentAsFTMultiUserStartSpeechRequest;
@property (readonly, nonatomic) FTResetServerEndpointer *contentAsFTResetServerEndpointer;
@property (readonly, nonatomic) FTSetAlternateRecognitionSausage *contentAsFTSetAlternateRecognitionSausage;
@property (readonly, nonatomic) FTSetEndpointerState *contentAsFTSetEndpointerState;
@property (readonly, nonatomic) FTSetRequestOrigin *contentAsFTSetRequestOrigin;
@property (readonly, nonatomic) FTSetSpeechContext *contentAsFTSetSpeechContext;
@property (readonly, nonatomic) FTSetSpeechProfile *contentAsFTSetSpeechProfile;
@property (readonly, nonatomic) FTUpdateAudioInfo *contentAsFTUpdateAudioInfo;
@property (readonly, nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct MultiUserStreamingRequest *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct MultiUserStreamingRequest *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::qss_fb::MultiUserStreamingRequest> )addObjectToBuffer:(*void)arg0 ;


@end


#endif