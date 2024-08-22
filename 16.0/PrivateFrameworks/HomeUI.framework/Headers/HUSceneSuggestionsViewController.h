// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUSCENESUGGESTIONSVIEWCONTROLLER_H
#define HUSCENESUGGESTIONSVIEWCONTROLLER_H

@class NSString;
@protocol HUPresentationDelegateHost, HUPresentationDelegate, HUSceneEditorDelegate;


#import "HUItemTableViewController.h"
#import "HUSceneSuggestionsItemManager.h"

@interface HUSceneSuggestionsViewController : HUItemTableViewController <HUPresentationDelegateHost>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<HUPresentationDelegate> *presentationDelegate; // ivar: _presentationDelegate
@property (weak, nonatomic) NSObject<HUSceneEditorDelegate> *sceneEditorDelegate; // ivar: _sceneEditorDelegate
@property (weak, nonatomic) HUSceneSuggestionsItemManager *suggestionsItemManager; // ivar: _suggestionsItemManager
@property (readonly) Class superclass;


+(id)computeNumberOfSuggestionsInHome:(id)arg0 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)init;
-(void)_cancel:(id)arg0 ;
-(void)_showActionEditorForActionSetSuggestionItem:(id)arg0 ;
-(void)_showActionEditorForNewCustomScene;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif