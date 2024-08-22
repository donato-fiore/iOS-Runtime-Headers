// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCONTENTITEMVIEWCONTROLLER_H
#define WFCONTENTITEMVIEWCONTROLLER_H

@class UITableViewController, WFContentItem, NSString;
@protocol UIDocumentInteractionControllerDelegate;



@interface WFContentItemViewController : UITableViewController <UIDocumentInteractionControllerDelegate>



@property (readonly, nonatomic) WFContentItem *contentItem; // ivar: _contentItem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)documentInteractionControllerViewControllerForPreview:(id)arg0 ;
-(id)initWithContentItem:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif