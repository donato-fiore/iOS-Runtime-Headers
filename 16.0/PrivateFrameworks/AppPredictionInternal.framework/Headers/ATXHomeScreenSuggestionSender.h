// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXHOMESCREENSUGGESTIONSENDER_H
#define ATXHOMESCREENSUGGESTIONSENDER_H

@class _PASXPCClientHelper;
@protocol ATXHomeScreenSuggestionServerXPCInterface;

#import <Foundation/Foundation.h>


@interface ATXHomeScreenSuggestionSender : NSObject <ATXHomeScreenSuggestionServerXPCInterface>

 {
    _PASXPCClientHelper *_xpcClientHelper;
}




-(id)init;
-(void)blendingLayerDidUpdateHomeScreenCachedSuggestions:(id)arg0 completion:(id)arg1 ;
-(void)forceDebugRotationForStack:(id)arg0 extensionBundleId:(id)arg1 kind:(id)arg2 completion:(id)arg3 ;
-(void)getCurrentSuggestionsWidgetAndAppPredictionPanelLayoutsWithCompletionHandler:(id)arg0 ;
-(void)synchronouslyRelinquishOnDiskResourcesAheadOfDataDeletionWithCompletionHandler:(id)arg0 ;


@end


#endif