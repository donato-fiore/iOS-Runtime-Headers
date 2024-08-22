// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKVOCABULARYDONATOR_H
#define CKVOCABULARYDONATOR_H

@class NSString;
@protocol KVDonateServiceProvider;

#import <Foundation/Foundation.h>


@interface CKVocabularyDonator : NSObject {
    NSString *_originAppId;
    NSObject<KVDonateServiceProvider> *_serviceProvider;
}




+(void)initialize;
-(id)init;
-(id)initWithOriginAppId:(id)arg0 serviceProvider:(id)arg1 ;
-(void)replaceAllVocabularyOfClass:(Class)arg0 withVocabulary:(id)arg1 completion:(id)arg2 ;


@end


#endif