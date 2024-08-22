// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSBROWSERTABCOMPLETIONPROVIDER_H
#define WBSBROWSERTABCOMPLETIONPROVIDER_H

@class NSOperationQueue, NSArray, NSString;
@protocol WBSBrowserTabCompletionProviderSource, WBSBrowserTabCompletionProviderDelegate;

#import <Foundation/Foundation.h>

#import "WBSBrowserTabCompletionInfo.h"

@interface WBSBrowserTabCompletionProvider : NSObject {
    NSOperationQueue *_queue;
    NSArray *_tabInfos;
    WBSBrowserTabCompletionInfo *_selectedTabInfo;
}


@property (readonly, copy, nonatomic) NSString *currentQuery; // ivar: _currentQuery
@property (readonly, copy, nonatomic) NSArray *currentTabCompletionMatches; // ivar: _currentTabCompletionMatches
@property (weak, nonatomic) NSObject<WBSBrowserTabCompletionProviderSource> *dataSource; // ivar: _dataSource
@property (weak, nonatomic) NSObject<WBSBrowserTabCompletionProviderDelegate> *delegate; // ivar: _delegate


-(BOOL)_isOperationValidForQuery:(id)arg0 tabInfos:(id)arg1 selectedTabInfo:(id)arg2 ;
-(NSInteger)_compareTabMatch:(id)arg0 otherTabMatch:(id)arg1 ;
-(NSUInteger)_distanceFromSelectedTabForTabMatch:(id)arg0 ;
-(id)_matchesForQuery:(id)arg0 tabInfos:(id)arg1 selectedTabInfo:(id)arg2 forQueryID:(NSInteger)arg3 ;
-(id)bestTabCompletionMatchFromMatches:(id)arg0 withTopHitURL:(id)arg1 isBestMatchTopHit:(*BOOL)arg2 ;
-(id)bestTabCompletionMatchWithTopHitURL:(id)arg0 isBestMatchTopHit:(*BOOL)arg1 ;
-(id)init;
-(id)selectedTabInfo;
-(id)tabInfos;
-(void)_prepareQueue;
-(void)invalidate;
-(void)tabCompletionMatchesForQuery:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif