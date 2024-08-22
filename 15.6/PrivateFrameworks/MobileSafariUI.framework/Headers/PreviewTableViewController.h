// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PREVIEWTABLEVIEWCONTROLLER_H
#define PREVIEWTABLEVIEWCONTROLLER_H

@class UITableViewController;
@protocol LinkPreviewProvider, PreviewTableViewControllerDelegate;



@interface PreviewTableViewController : UITableViewController

@property (weak, nonatomic) NSObject<LinkPreviewProvider> *linkPreviewProvider; // ivar: _linkPreviewProvider
@property (weak, nonatomic) NSObject<PreviewTableViewControllerDelegate> *previewDelegate; // ivar: _previewDelegate


-(id)tableView:(id)arg0 contextMenuConfigurationForRowAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)tableView:(id)arg0 previewForDismissingContextMenuWithConfiguration:(id)arg1 ;
-(id)tableView:(id)arg0 previewForHighlightingContextMenuWithConfiguration:(id)arg1 ;
-(void)tableView:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif