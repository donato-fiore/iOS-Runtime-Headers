// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFFILEPICKERRESULTSVIEWCONTROLLER_H
#define WFFILEPICKERRESULTSVIEWCONTROLLER_H

@class UIViewController, NSArray;
@protocol WFRemoteFileListViewDelegate;


#import "WFRemoteFileListView.h"

@interface WFFilePickerResultsViewController : UIViewController

@property (readonly, weak, nonatomic) NSObject<WFRemoteFileListViewDelegate> *delegate; // ivar: _delegate
@property (readonly, weak, nonatomic) WFRemoteFileListView *fileListView; // ivar: _fileListView
@property (copy, nonatomic) NSArray *files; // ivar: _files


-(id)initWithFileListDelegate:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)updateContentInset;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif