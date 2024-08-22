// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TISMARTSELECTOR_H
#define TISMARTSELECTOR_H

@class NSString, NSLocale, NLTagger;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TITransientLexiconManager.h"

@interface TISmartSelector : NSObject {
    unique_ptr<KB::StaticDictionary, std::default_delete<KB::StaticDictionary>> _staticDictionary;
    *_LXLexicon _contactDictionary;
    id *_contactObserver;
}


@property (copy) id *dataChangedHandler; // ivar: _dataChangedHandler
@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain) NSString *language;
@property (retain) NSLocale *locale; // ivar: _locale
@property (retain) NLTagger *namedEntityTagger; // ivar: _namedEntityTagger
@property NSUInteger options; // ivar: _options
@property (retain) TITransientLexiconManager *transientLexiconManager; // ivar: _transientLexiconManager


-(id)initWithOptions:(NSUInteger)arg0 language:(id)arg1 dataChangedHandler:(id)arg2 ;
-(struct _NSRange )longestRangeEncapsulatingSubstringInDocument:(id)arg0 containingRange:(struct _NSRange )arg1 tokenizedRanges:(id)arg2 meetingCondition:(id)arg3 ;
-(struct _NSRange )selectionRangeForTextInDocument:(id)arg0 inRange:(struct _NSRange )arg1 language:(id)arg2 options:(NSUInteger)arg3 ;
-(struct _NSRange )selectionRangeForTextInDocument:(id)arg0 inRange:(struct _NSRange )arg1 language:(id)arg2 tokenizedRanges:(id)arg3 options:(NSUInteger)arg4 ;
-(void)dealloc;
-(void)loadStaticPhraseDictionary;


@end


#endif