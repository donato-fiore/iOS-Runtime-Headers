// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TABCOMPLETIONPROVIDER_H
#define TABCOMPLETIONPROVIDER_H

@class WBSBrowserTabCompletionProvider, NSString;
@protocol WBSBrowserTabCompletionProviderSource, WBSBrowserTabCompletionProviderDelegate, TabCompletionProviderDataSource;


#import "CompletionProvider.h"

@interface TabCompletionProvider : CompletionProvider <WBSBrowserTabCompletionProviderSource, WBSBrowserTabCompletionProviderDelegate>

 {
    WBSBrowserTabCompletionProvider *_browserTabCompletionProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<TabCompletionProviderDataSource> *tabCompletionProviderDataSource; // ivar: _tabCompletionProviderDataSource


-(id)bestTabCompletionMatchForQuery:(id)arg0 withTopHitURL:(id)arg1 isBestMatchTopHit:(*BOOL)arg2 ;
-(id)selectedTabInfoForBrowserTabCompletionProvider:(id)arg0 ;
-(id)tabInfosForBrowserTabCompletionProvider:(id)arg0 ;
-(void)dealloc;
-(void)didFindMatchesForCurrentQueryInBrowserTabCompletionProvider:(id)arg0 ;
-(void)invalidateCachedTabData;
-(void)setQueryToComplete:(id)arg0 ;


@end


#endif