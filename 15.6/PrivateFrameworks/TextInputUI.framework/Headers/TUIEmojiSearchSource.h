// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUIEMOJISEARCHSOURCE_H
#define TUIEMOJISEARCHSOURCE_H

@class NSString, NSLocale, EMFEmojiLocaleData, NSArray;
@protocol OS_dispatch_queue, TUIEmojiSearchSourceDelegate;

#import <Foundation/Foundation.h>


@interface TUIEmojiSearchSource : NSObject {
    NSString *_exactQuery;
    NSString *_autocorrectedQuery;
    NSObject<OS_dispatch_queue> *_searchQueue;
}


@property (weak, nonatomic) NSObject<TUIEmojiSearchSourceDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSLocale *locale; // ivar: _locale
@property (retain, nonatomic) EMFEmojiLocaleData *localeData; // ivar: _localeData
@property (retain, nonatomic) NSArray *multilingualSearchLocales; // ivar: _multilingualSearchLocales
@property (readonly, nonatomic) NSArray *results; // ivar: _results
@property (readonly, nonatomic) NSArray *suggestedEmojis;


-(BOOL)shouldSupplyVerbatimResultsFor:(id)arg0 ;
-(id)_emojiResultSetForExactQuery:(id)arg0 autocorrectedQuery:(id)arg1 ;
-(id)_filteredTokensIgnoringModifiers:(id)arg0 ;
-(id)_repeatSearchQuery:(id)arg0 forLocales:(id)arg1 ;
-(id)initWithLocale:(id)arg0 ;
-(id)languagesForMultilingualSearch;
-(void)_deliverResults:(id)arg0 forExactQuery:(id)arg1 autocorrectedQuery:(id)arg2 ;
-(void)beginSearchForExactQuery:(id)arg0 autocorrectedQuery:(id)arg1 ;


@end


#endif