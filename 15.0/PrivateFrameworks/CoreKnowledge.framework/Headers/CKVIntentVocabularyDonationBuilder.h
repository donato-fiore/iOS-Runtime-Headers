// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVINTENTVOCABULARYDONATIONBUILDER_H
#define CKVINTENTVOCABULARYDONATIONBUILDER_H

@class NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CKVIntentVocabularyDonationBuilder : NSObject {
    NSString *_appId;
    NSMutableDictionary *_vocabularyDictionary;
    NSUInteger _itemCounter;
}




-(id)_convertVocabularyDictionary;
-(id)_convertVocabularyItem:(id)arg0 withCustomType:(unsigned short)arg1 ;
-(id)build;
-(id)init;
-(id)initWithAppId:(id)arg0 ;
-(void)addVocabularyItems:(id)arg0 forIntentSlot:(id)arg1 ;


@end


#endif