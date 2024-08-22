// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFSSSERVERTTSTASK_H
#define SFSSSERVERTTSTASK_H



#import "SFSpeechSynthesisTask.h"
#import "SFSSOspreyTTSClient.h"

@interface SFSSServerTTSTask : SFSpeechSynthesisTask

@property (weak, nonatomic) SFSSOspreyTTSClient *ospreyTTSClient; // ivar: _ospreyTTSClient


+(NSInteger)convertPhoneSetTypeToServerPhoneSetType:(NSInteger)arg0 ;
+(NSInteger)convertVoiceTypeToServerType:(NSInteger)arg0 ;
+(id)createGrpcHeadersFromRequest:(id)arg0 ;
+(id)createOspreyRequestFromReqeust:(id)arg0 ;
+(id)flatPhonemeSequence:(id)arg0 ;
+(id)generateProsodyTransferConfig:(id)arg0 ;
+(id)generateResourceAssetFromResourceMetaInfo:(id)arg0 ;
+(id)generateVoiceAssetFromVoiceMetaInfo:(id)arg0 ;
+(struct AudioStreamBasicDescription )audioStreamBasicDescription:(id)arg0 ;
-(id)initWithRequest:(id)arg0 ;
-(void)cancelTask;
-(void)startTask:(id)arg0 ;


@end


#endif