// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXLTLIVETRANSCRIPTION_H
#define AXLTLIVETRANSCRIPTION_H

@class NSMutableDictionary, NSString, AVSpeechSynthesizer;
@protocol AXLTTranscriberDelegateProtocol, AXLTLiveTranscriptionDelegate;

#import <Foundation/Foundation.h>

#import "AXLTSpeechTranscriber.h"
#import "AXLTTestTranscriber.h"

@interface AXLTLiveTranscription : NSObject <AXLTTranscriberDelegateProtocol>



@property (retain, nonatomic) NSMutableDictionary *dataReceivers; // ivar: _dataReceivers
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AXLTLiveTranscriptionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AVSpeechSynthesizer *speechSynthesizer; // ivar: _speechSynthesizer
@property (retain, nonatomic) AXLTSpeechTranscriber *speechTranscriber; // ivar: _speechTranscriber
@property (readonly) Class superclass;
@property (retain, nonatomic) AXLTTestTranscriber *testTranscriber; // ivar: _testTranscriber


+(id)sharedInstance;
-(BOOL)_pidSupportsCoreMediaNotifications:(int)arg0 ;
// -(BOOL)startTranscribing:(NSInteger)arg0 callbackBlock:(id)arg1 error:(unk)arg2  ;
// -(BOOL)startTranscribing:(NSInteger)arg0 excludingPIDs:(id)arg1 callbackBlock:(id)arg2 error:(unk)arg3  ;
// -(BOOL)startTranscribing:(NSInteger)arg0 targetPID:(int)arg1 callbackBlock:(id)arg2 audioInfoBlock:(unk)arg3 error:(id)arg4  ;
// -(BOOL)startTranscribing:(NSInteger)arg0 targetPID:(int)arg1 callbackBlock:(id)arg2 error:(unk)arg3  ;
// -(BOOL)startTranscribing:(NSInteger)arg0 targetPID:(int)arg1 excludingPIDs:(id)arg2 callbackBlock:(id)arg3 audioInfoBlock:(unk)arg4 error:(id)arg5  ;
-(BOOL)stopTranscribing:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)stopTranscribing:(NSInteger)arg0 targetPID:(int)arg1 error:(*id)arg2 ;
-(id)_receiverKeyForRequestType:(NSInteger)arg0 targetPID:(int)arg1 ;
-(id)init;
-(void)audioInfoData:(id)arg0 ;
-(void)resetTranscribing:(NSInteger)arg0 ;
-(void)transcriberOutputData:(id)arg0 ;


@end


#endif