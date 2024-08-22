// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVOCABULARYDONATESTREAM_H
#define CKVOCABULARYDONATESTREAM_H

@class NSMutableArray;
@protocol CKVDonateService;

#import <Foundation/Foundation.h>

#import "CKVOriginApp.h"
#import "CKVocabularyDonateValidator.h"

@interface CKVocabularyDonateStream : NSObject {
    CKVOriginApp *_originApp;
    Class _mapperClass;
    NSMutableArray *_items;
    CKVocabularyDonateValidator *_validator;
    NSObject<CKVDonateService> *_donateService;
    NSUInteger _batchSize;
}




+(id)streamWithOriginApp:(id)arg0 itemClass:(Class)arg1 donateService:(id)arg2 ;
-(BOOL)addVocabularyItem:(id)arg0 error:(*id)arg1 ;
-(id)initWithOriginApp:(id)arg0 itemClass:(Class)arg1 donateService:(id)arg2 batchSize:(NSUInteger)arg3 ;
-(void)cancel;
-(void)finish:(id)arg0 ;
-(void)openStream:(id)arg0 ;


@end


#endif