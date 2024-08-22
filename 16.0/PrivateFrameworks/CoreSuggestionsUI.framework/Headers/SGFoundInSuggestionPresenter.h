// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGFOUNDINSUGGESTIONPRESENTER_H
#define SGFOUNDINSUGGESTIONPRESENTER_H

@class NSArray, _PASLock;
@protocol NSObject;


#import "SGSuggestionPresenter.h"

@interface SGFoundInSuggestionPresenter : SGSuggestionPresenter {
    id *_filterBlock;
    NSArray *_searchableItems;
    NSUInteger _contentOptions;
    id<NSObject> *_contactStoreObserverToken;
    BOOL _loadScheduled;
    NSArray *_existingSuggestions;
    _PASLock *_lock;
}


@property (copy) NSArray *realtimeSuggestions;


-(id)formatMixedCategoriesTitle:(id)arg0 ;
-(id)init;
-(void)_loadSuggestions;
-(void)_loadedRealtimeSuggestions:(id)arg0 fromHostApp:(NSInteger)arg1 ;
-(void)_setNeedsToReloadSuggestionsAfter:(CGFloat)arg0 ;
-(void)addSuggestionsFromSearchableItems:(id)arg0 existingSuggestions:(id)arg1 mailService:(id)arg2 messageService:(id)arg3 options:(NSUInteger)arg4 filter:(id)arg5 ;
-(void)addSuggestionsFromSearchableItems:(id)arg0 existingSuggestions:(id)arg1 options:(NSUInteger)arg2 filter:(id)arg3 ;
-(void)addSuggestionsFromSearchableItems:(id)arg0 options:(NSUInteger)arg1 filter:(id)arg2 ;
-(void)dealloc;
-(void)reloadSuggestionsFromSearchableItems;
-(void)setMailService:(id)arg0 messageService:(id)arg1 ;


@end


#endif