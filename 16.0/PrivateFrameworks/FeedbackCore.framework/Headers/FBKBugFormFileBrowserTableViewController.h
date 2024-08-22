// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKBUGFORMFILEBROWSERTABLEVIEWCONTROLLER_H
#define FBKBUGFORMFILEBROWSERTABLEVIEWCONTROLLER_H

@class UITableViewController, NSString, NSArray, DEDAttachmentGroup, NSURL;
@protocol UIDocumentInteractionControllerDelegate;



@interface FBKBugFormFileBrowserTableViewController : UITableViewController <UIDocumentInteractionControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *directoryList; // ivar: _directoryList
@property (retain, nonatomic) DEDAttachmentGroup *group; // ivar: _group
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSURL *url; // ivar: _url


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)documentInteractionControllerViewControllerForPreview:(id)arg0 ;
-(id)documentInteractionControllerViewForPreview:(id)arg0 ;
-(id)initWithGroup:(id)arg0 ;
-(id)initWithUrl:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(struct CGRect )documentInteractionControllerRectForPreview:(id)arg0 ;
-(void)documentInteractionControllerDidEndPreview:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif