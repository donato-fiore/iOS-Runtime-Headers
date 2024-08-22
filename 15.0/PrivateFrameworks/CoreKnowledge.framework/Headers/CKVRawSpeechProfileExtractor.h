// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVRAWSPEECHPROFILEEXTRACTOR_H
#define CKVRAWSPEECHPROFILEEXTRACTOR_H


#import <Foundation/Foundation.h>


@interface CKVRawSpeechProfileExtractor : NSObject



+(BOOL)_isValidCategoryWithName:(id)arg0 data:(id)arg1 error:(*id)arg2 ;
+(id)_convertItemsFromEntities:(id)arg0 categoryName:(id)arg1 categoryMetadata:(id)arg2 converterClass:(Class)arg3 error:(*id)arg4 ;
+(id)_dictionaryFromUserDataArray:(id)arg0 error:(*id)arg1 ;
+(id)_extractEntitiesFromCategoryData:(id)arg0 categoryName:(id)arg1 error:(*id)arg2 ;
+(id)_extractNamespaceFromCategoryName:(id)arg0 error:(*id)arg1 ;
+(id)_extractUserDataFromRawSpeechProfile:(id)arg0 error:(*id)arg1 ;
+(id)extractItemsFromRawSpeechProfile:(id)arg0 metadata:(id)arg1 converterClass:(Class)arg2 error:(*id)arg3 ;
+(id)extractLocaleFromRawSpeechProfile:(id)arg0 error:(*id)arg1 ;


@end


#endif