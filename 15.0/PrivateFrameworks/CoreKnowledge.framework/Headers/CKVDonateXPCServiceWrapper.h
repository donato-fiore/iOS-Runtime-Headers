// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVDONATEXPCSERVICEWRAPPER_H
#define CKVDONATEXPCSERVICEWRAPPER_H

@class NSString;
@protocol CKVDonateServiceProvider, CKVDonateService;

#import <Foundation/Foundation.h>

#import "CKVXPCServiceBridge.h"

@interface CKVDonateXPCServiceWrapper : NSObject <CKVDonateServiceProvider, CKVDonateService>

 {
    CKVXPCServiceBridge *_xpcServiceBridge;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)donateService;
-(id)init;
-(void)abortVocabularyStream;
-(void)closeVocabularyStream:(id)arg0 ;
-(void)openVocabularyStreamOfType:(NSInteger)arg0 originApp:(id)arg1 ready:(id)arg2 ;
-(void)produceVocabularyStream:(id)arg0 completion:(id)arg1 ;
-(void)submitVocabularyDonation:(id)arg0 completion:(id)arg1 ;


@end


#endif