// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LRRCDMCLIENT_H
#define LRRCDMCLIENT_H

@class CDMClient, CDMNluResponse, NSString;
@protocol CDMClientDelegate, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface LRRCdmClient : NSObject <CDMClientDelegate>

 {
    CDMClient *cdmClient;
    NSObject<OS_dispatch_semaphore> *semaphoreProcessNluRequest;
    NSObject<OS_dispatch_semaphore> *semaphoreSetup;
    CDMNluResponse *replayedNluResponse;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)setup:(id)arg0 rawSpeechProfile:(id)arg1 rawSpeechProfileMetadata:(id)arg2 assetDirPath:(id)arg3 overrideSiriVocabSpans:(id)arg4 ;
-(id)init;
-(id)replayRequestProto:(id)arg0 proto:(id)arg1 outError:(*id)arg2 ;
-(void)cleanup;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)processCDMNluRequestCallback:(id)arg0 ;
-(void)processCDMNluRequestErrorCallback:(id)arg0 error:(id)arg1 ;
-(void)stopWatchingCdmClientSetup;
-(void)watchCdmClientSetup;


@end


#endif