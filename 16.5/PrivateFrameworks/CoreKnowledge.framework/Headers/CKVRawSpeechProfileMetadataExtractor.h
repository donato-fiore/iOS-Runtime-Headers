// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKVRAWSPEECHPROFILEMETADATAEXTRACTOR_H
#define CKVRAWSPEECHPROFILEMETADATAEXTRACTOR_H


#import <Foundation/Foundation.h>


@interface CKVRawSpeechProfileMetadataExtractor : NSObject



+(id)_extractEntityMetadataFromCategoryData:(id)arg0 categoryName:(id)arg1 error:(*id)arg2 ;
+(id)_extractUserDataFromRawSpeechProfileMetadata:(id)arg0 error:(*id)arg1 ;
+(id)extractRawSpeechProfileMetadata:(id)arg0 error:(*id)arg1 ;


@end


#endif