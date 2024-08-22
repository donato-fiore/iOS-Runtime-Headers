// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCMMDEBUGSHARINGSUGGESTIONVIEWCONTROLLER_H
#define PXCMMDEBUGSHARINGSUGGESTIONVIEWCONTROLLER_H

@class UIViewController, NSArray, NSDictionary, NSString, UISegmentedControl, PHAssetCollection, UITableView;
@protocol UITableViewDataSource, UITableViewDelegate, MFMailComposeViewControllerDelegate;



@interface PXCMMDebugSharingSuggestionViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, MFMailComposeViewControllerDelegate>

 {
    NSArray *_sectionTitles;
    NSDictionary *_tableContent;
    NSDictionary *_sourceDictionary;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UISegmentedControl *segmentedControl; // ivar: _segmentedControl
@property (retain, nonatomic) PHAssetCollection *sourceSuggestion; // ivar: _sourceSuggestion
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


+(BOOL)generateSectionTitles:(*id)arg0 andTableContent:(*id)arg1 forIndex:(NSInteger)arg2 sourceSuggestion:(id)arg3 sourceDictionary:(id)arg4 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_debugDictionary;
-(id)initWithSharingSuggestion:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_closeAction:(id)arg0 ;
-(void)_sendByEmailAction:(id)arg0 ;
-(void)_switchLogsAction:(id)arg0 ;
-(void)mailComposeController:(id)arg0 didFinishWithResult:(NSInteger)arg1 error:(id)arg2 ;
-(void)viewDidLoad;


@end


#endif