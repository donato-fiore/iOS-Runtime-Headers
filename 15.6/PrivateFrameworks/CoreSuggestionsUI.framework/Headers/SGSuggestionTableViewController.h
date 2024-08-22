// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGSUGGESTIONTABLEVIEWCONTROLLER_H
#define SGSUGGESTIONTABLEVIEWCONTROLLER_H

@class UITableViewController, NSString;
@protocol SGSuggestionViewControllerPresenter;


#import "SGSuggestionStore.h"

@interface SGSuggestionTableViewController : UITableViewController <SGSuggestionViewControllerPresenter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SGSuggestionStore *suggestionStore; // ivar: _suggestionStore
@property (readonly) Class superclass;


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)init;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)dealloc;
-(void)dismissViewController:(id)arg0 ;
-(void)listDidChangeNotification:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)presentViewController:(id)arg0 ;
-(void)updatePrefferedSize;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif