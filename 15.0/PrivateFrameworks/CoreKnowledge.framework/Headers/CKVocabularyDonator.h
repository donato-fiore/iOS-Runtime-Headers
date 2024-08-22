// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVOCABULARYDONATOR_H
#define CKVOCABULARYDONATOR_H

@class NSString;
@protocol CKVDonateService, OS_dispatch_queue, CKVDonateAuthorization;

#import <Foundation/Foundation.h>

#import "CKVOriginApp.h"

@interface CKVocabularyDonator : NSObject {
    CKVOriginApp *_originApp;
    NSObject<CKVDonateService> *_donateService;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_donatorName;
    NSObject<CKVDonateAuthorization> *_authorization;
}




+(id)_donatorNameWithOriginApp:(id)arg0 ;
+(id)donatorWithOriginAppId:(id)arg0 ;
+(void)initialize;
-(BOOL)_isItemClassSupportedAndWhitelisted:(Class)arg0 error:(*id)arg1 ;
-(id)_buildDonationWithVocabularyItems:(id)arg0 ofClass:(Class)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithOriginApp:(id)arg0 donateService:(id)arg1 dispatchQueue:(id)arg2 authorization:(id)arg3 ;
-(void)_processDonation:(id)arg0 itemClass:(Class)arg1 completion:(id)arg2 ;
-(void)replaceAllVocabularyOfClass:(Class)arg0 withVocabulary:(id)arg1 completion:(id)arg2 ;
-(void)updateAllVocabularyOfClass:(Class)arg0 usingStream:(id)arg1 ;


@end


#endif