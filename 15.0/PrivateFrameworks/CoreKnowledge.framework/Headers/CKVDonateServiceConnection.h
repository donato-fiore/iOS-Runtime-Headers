// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVDONATESERVICECONNECTION_H
#define CKVDONATESERVICECONNECTION_H

@protocol CKVDonateService, OS_dispatch_queue;


#import "CKVServiceConnection.h"
#import "CKVIndexUpdater.h"
#import "CKVStreamManager.h"

@interface CKVDonateServiceConnection : CKVServiceConnection <CKVDonateService>

 {
    CKVIndexUpdater *_indexUpdater;
    CKVStreamManager *_streamManager;
    NSObject<OS_dispatch_queue> *_consumerQueue;
    BOOL _streamDonationResult;
}




-(id)initWithServiceQueue:(id)arg0 indexManager:(id)arg1 settings:(id)arg2 ;
-(id)initWithServiceQueue:(id)arg0 indexManager:(id)arg1 settings:(id)arg2 streamManager:(id)arg3 ;
-(void)abortVocabularyStream;
-(void)closeVocabularyStream:(id)arg0 ;
-(void)openVocabularyStreamOfType:(NSInteger)arg0 originApp:(id)arg1 ready:(id)arg2 ;
-(void)produceVocabularyStream:(id)arg0 completion:(id)arg1 ;
-(void)submitVocabularyDonation:(id)arg0 completion:(id)arg1 ;


@end


#endif