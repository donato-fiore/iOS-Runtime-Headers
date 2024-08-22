// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVINTENTVOCABULARYDONATION_H
#define CKVINTENTVOCABULARYDONATION_H

@class NSString, NSSet;

#import <Foundation/Foundation.h>


@interface CKVIntentVocabularyDonation : NSObject

@property (readonly, nonatomic) NSString *appId; // ivar: _appId
@property (readonly, nonatomic) BOOL isEmpty; // ivar: _isEmpty
@property (readonly, nonatomic) NSSet *vocabularySet; // ivar: _vocabularySet


+(id)donationBuilderForApp:(id)arg0 ;
+(id)emptyDonationForApp:(id)arg0 ;
-(id)init;
-(id)initWithAppId:(id)arg0 vocabularySet:(id)arg1 ;


@end


#endif