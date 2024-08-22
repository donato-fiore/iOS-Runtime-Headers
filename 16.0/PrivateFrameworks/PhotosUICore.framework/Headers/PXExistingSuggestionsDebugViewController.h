// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXEXISTINGSUGGESTIONSDEBUGVIEWCONTROLLER_H
#define PXEXISTINGSUGGESTIONSDEBUGVIEWCONTROLLER_H

@class UITableViewController, NSArray, NSDictionary, NSString, PHSuggestion;
@protocol PXOneUpPresentationDelegate;



@interface PXExistingSuggestionsDebugViewController : UITableViewController <PXOneUpPresentationDelegate>

 {
    NSArray *_sectionNames;
    NSDictionary *_itemsBySectionName;
    NSString *_name;
    NSDictionary *_options;
    PHSuggestion *_currentSuggestion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)tableView:(id)arg0 canPerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3 ;
-(BOOL)tableView:(id)arg0 shouldShowMenuForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)oneUpPresentationOrigin:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)assetsDataSourceManagerForSuggestion:(id)arg0 ;
-(id)initWithName:(id)arg0 options:(id)arg1 ;
-(id)oneUpPresentationDataSourceManager:(id)arg0 ;
-(id)oneUpPresentationInitialAssetReference:(id)arg0 ;
-(id)oneUpPresentationMediaProvider:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_fetchExistingSuggestions;
-(void)configureCell:(id)arg0 withItem:(id)arg1 ;
-(void)tableView:(id)arg0 accessoryButtonTappedForRowWithIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 performAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3 ;
-(void)viewDidLoad;


@end


#endif