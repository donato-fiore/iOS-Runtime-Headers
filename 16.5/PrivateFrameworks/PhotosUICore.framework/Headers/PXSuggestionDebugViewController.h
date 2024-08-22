// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSUGGESTIONDEBUGVIEWCONTROLLER_H
#define PXSUGGESTIONDEBUGVIEWCONTROLLER_H

@class UIViewController, UISegmentedControl, UITableView, NSArray, NSDictionary, PHSuggestion, NSString;
@protocol UITableViewDataSource, UITableViewDelegate, MFMailComposeViewControllerDelegate;



@interface PXSuggestionDebugViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, MFMailComposeViewControllerDelegate>

 {
    UISegmentedControl *_segmentedControl;
    UITableView *_tableView;
    NSArray *_sectionTitles;
    NSDictionary *_tableContent;
    NSDictionary *_sourceDictionary;
    PHSuggestion *_suggestion;
    NSDictionary *_suggestionInfo;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)existingSectionsWithSuggestion:(id)arg0 suggestionInfo:(id)arg1 ;
-(id)infoSectionsWithSuggestion:(id)arg0 suggestionInfo:(id)arg1 compact:(BOOL)arg2 ;
-(id)initWithSuggestion:(id)arg0 suggestionInfo:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_closeAction:(id)arg0 ;
-(void)_sendByEmailAction:(id)arg0 ;
-(void)_setupWithDictionary:(id)arg0 ;
-(void)_switchLogsAction:(id)arg0 ;
-(void)mailComposeController:(id)arg0 didFinishWithResult:(NSInteger)arg1 error:(id)arg2 ;
-(void)viewDidLoad;


@end


#endif