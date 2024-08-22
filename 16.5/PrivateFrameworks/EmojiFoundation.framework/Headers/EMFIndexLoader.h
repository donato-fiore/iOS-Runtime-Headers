// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMFINDEXLOADER_H
#define EMFINDEXLOADER_H


#import <Foundation/Foundation.h>


@interface EMFIndexLoader : NSObject



+(id)_invertedIndexWithTermIndexURL:(id)arg0 andDocumentIndexURL:(id)arg1 fromBundle:(id)arg2 ;
+(id)_loadDictionaryResource:(id)arg0 ;
+(id)defaultIndexForBundle:(id)arg0 ;
+(id)stemmedIndexForBundle:(id)arg0 ;
+(void)_inferAndApplyStrategyToIndex:(id)arg0 ;


@end


#endif