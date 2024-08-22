// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNSIRIVOCABULARY_H
#define LNSIRIVOCABULARY_H

@class NSString, NSMutableArray, NSArray;
@protocol LNVocabularyDonator, OS_dispatch_queue, LNVocabularyPicker;

#import <Foundation/Foundation.h>

#import "LNDebouncer.h"

@interface LNSiriVocabulary : NSObject

@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) NSMutableArray *completions; // ivar: _completions
@property (retain, nonatomic) NSArray *corpora; // ivar: _corpora
@property (readonly, nonatomic) LNDebouncer *debouncer; // ivar: _debouncer
@property (readonly, nonatomic) NSObject<LNVocabularyDonator> *donatorClient; // ivar: _donatorClient
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSObject<LNVocabularyPicker> *vocabularyPicker; // ivar: _vocabularyPicker


+(id)vocabularyForBundleIdentifier:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 donatorClient:(id)arg1 picker:(id)arg2 ;
-(void)corpusContentsChanged:(id)arg0 completionHandler:(id)arg1 ;
-(void)donateWithCompletionHandler:(id)arg0 ;


@end


#endif