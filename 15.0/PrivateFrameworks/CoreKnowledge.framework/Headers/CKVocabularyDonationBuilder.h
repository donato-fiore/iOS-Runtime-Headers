// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVOCABULARYDONATIONBUILDER_H
#define CKVOCABULARYDONATIONBUILDER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "CKVOriginApp.h"
#import "CKVocabularyDonateValidator.h"

@interface CKVocabularyDonationBuilder : NSObject {
    CKVOriginApp *_originApp;
    NSInteger _itemType;
    Class _mapperClass;
    NSMutableArray *_items;
    CKVocabularyDonateValidator *_validator;
}




-(NSInteger)_addVocabularyItem:(id)arg0 ;
-(id)addVocabularyItem:(id)arg0 error:(*id)arg1 ;
-(id)build;
-(id)initWithOriginApp:(id)arg0 itemClass:(Class)arg1 error:(*id)arg2 ;


@end


#endif