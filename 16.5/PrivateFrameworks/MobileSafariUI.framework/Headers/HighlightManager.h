// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HIGHLIGHTMANAGER_H
#define HIGHLIGHTMANAGER_H

@class WBSHighlightManager, NSMutableDictionary;



@interface HighlightManager : WBSHighlightManager {
    NSMutableDictionary *_highlightToPresentersMap;
    NSMutableDictionary *_highlightToBackForwardListItemsMap;
}




-(void)_handleRemovalOfHighlights:(id)arg0 ;
-(void)loadLinkMetadataForMessageWithGUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)setPresenter:(id)arg0 forHighlightIdentifier:(id)arg1 ;


@end


#endif