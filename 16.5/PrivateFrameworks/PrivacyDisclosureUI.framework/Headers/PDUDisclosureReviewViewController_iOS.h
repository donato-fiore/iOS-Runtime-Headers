// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDUDISCLOSUREREVIEWVIEWCONTROLLER_IOS_H
#define PDUDISCLOSUREREVIEWVIEWCONTROLLER_IOS_H

@class UITableViewController, NSBundle, NSArray, NSString;
@protocol UITableViewDelegate, UITableViewDataSource, PDUDisclosureReviewViewControllerDelegate;



@interface PDUDisclosureReviewViewController_iOS : UITableViewController <UITableViewDelegate, UITableViewDataSource>

 {
    NSBundle *_bundle;
    NSUInteger _variant;
    NSArray *_titles;
    NSArray *_descriptions;
    NSString *_obkBundleID;
    BOOL _isConfigured;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PDUDisclosureReviewViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)preferredUserInterfaceStyle;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)footerForSettings;
-(id)headerForAlert;
-(id)headerForSettings;
-(id)initWithBundle:(id)arg0 variant:(NSUInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)aboutPrivacyTapped;
-(void)configureForAlert;
-(void)configureForSettings;
-(void)doneTapped;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif