// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVLANGUAGEMODELMULTIDATASETBRIDGE_H
#define CKVLANGUAGEMODELMULTIDATASETBRIDGE_H

@class KVItemBuilder;
@protocol CKVProviderMultiDatasetBridge;

#import <Foundation/Foundation.h>

#import "CKVLocalization.h"

@interface CKVLanguageModelMultiDatasetBridge : NSObject <CKVProviderMultiDatasetBridge>

 {
    CKVLocalization *_localization;
    KVItemBuilder *_builder;
}




-(id)_getAllLanguagesForFetch;
-(id)initWithLocalization:(id)arg0 itemBuilder:(id)arg1 ;
-(void)enumerateAllDatasets:(*NSUInteger)arg0 usingBlock:(id)arg1 ;


@end


#endif