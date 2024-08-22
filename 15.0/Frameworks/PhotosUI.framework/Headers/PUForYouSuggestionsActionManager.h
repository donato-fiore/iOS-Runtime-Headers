// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUFORYOUSUGGESTIONSACTIONMANAGER_H
#define PUFORYOUSUGGESTIONSACTIONMANAGER_H

@class NSMutableDictionary, NSString;
@protocol PUForYouSuggestionActionPerformerDelegate;


#import "PUAssetActionManager.h"

@interface PUForYouSuggestionsActionManager : PUAssetActionManager <PUForYouSuggestionActionPerformerDelegate>

 {
    NSMutableDictionary *_performersByAsset;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canPerformAction:(NSUInteger)arg0 onAllAssetsByAssetCollection:(id)arg1 ;
-(BOOL)canPerformActionType:(NSUInteger)arg0 onAsset:(id)arg1 inAssetCollection:(id)arg2 ;
-(BOOL)shouldEnableActionType:(NSUInteger)arg0 onAllAssetsByAssetCollection:(id)arg1 ;
-(BOOL)shouldEnableActionType:(NSUInteger)arg0 onAsset:(id)arg1 inAssetCollection:(id)arg2 ;
-(id)actionPerformerForSimpleActionType:(NSUInteger)arg0 onAssetsByAssetCollection:(id)arg1 ;
-(id)init;
-(void)forYouSuggestionActionPerformerDidBegin:(id)arg0 ;
-(void)forYouSuggestionActionPerformerDidFinish:(id)arg0 ;


@end


#endif