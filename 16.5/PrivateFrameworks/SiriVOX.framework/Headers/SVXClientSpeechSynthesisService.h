// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SVXCLIENTSPEECHSYNTHESISSERVICE_H
#define SVXCLIENTSPEECHSYNTHESISSERVICE_H

@class NSMutableDictionary, NSString;
@protocol SVXClientServiceConsuming, SVXClientSpeechSynthesisServicing, SVXPerforming, SVXClientServiceProviding;

#import <Foundation/Foundation.h>


@interface SVXClientSpeechSynthesisService : NSObject <SVXClientServiceConsuming, SVXClientSpeechSynthesisServicing>

 {
    id<SVXPerforming> *_performer;
    id<SVXClientServiceProviding> *_clientServiceProvider;
    NSMutableDictionary *_audioChunkHandlersByUUID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_handleSynthesizedBufferForHandlerUUID:(id)arg0 audioChunkData:(id)arg1 audioChunkIndex:(NSUInteger)arg2 ;
-(id)initWithClientServiceProvider:(id)arg0 analytics:(id)arg1 performer:(id)arg2 ;
// -(void)_addAudioChunkHandler:(id)arg0 forUUID:(unk)arg1  ;
-(void)_removeAudioChunkHandlerForUUID:(id)arg0 ;
-(void)cancelPendingRequest:(id)arg0 ;
-(void)clientServiceDidChange:(BOOL)arg0 ;
-(void)enqueueRequest:(id)arg0 completion:(id)arg1 ;
-(void)handleSynthesizedBufferForHandlerUUID:(id)arg0 audioChunkData:(id)arg1 audioChunkIndex:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)prewarmRequest:(id)arg0 ;
-(void)stopRequest:(id)arg0 ;
// -(void)synthesizeRequest:(id)arg0 audioChunkHandler:(id)arg1 completion:(unk)arg2  ;
-(void)synthesizeRequest:(id)arg0 completion:(id)arg1 ;


@end


#endif