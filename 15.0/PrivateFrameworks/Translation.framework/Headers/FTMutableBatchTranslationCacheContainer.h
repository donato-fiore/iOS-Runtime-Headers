// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTMUTABLEBATCHTRANSLATIONCACHECONTAINER_H
#define FTMUTABLEBATCHTRANSLATIONCACHECONTAINER_H

@class NSString, NSArray;


#import "FTBatchTranslationCacheContainer.h"

@interface FTMutableBatchTranslationCacheContainer : FTBatchTranslationCacheContainer

@property (copy, nonatomic) NSString *request_id;
@property (nonatomic) int sentence_count;
@property (copy, nonatomic) NSArray *spans;
@property (copy, nonatomic) NSString *translated_text;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif