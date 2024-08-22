// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKOSLOGVIEWCONTROLLER_H
#define FBKOSLOGVIEWCONTROLLER_H

@class UITableViewController, NSString, NSURL, UIActivityIndicatorView;
@protocol UITableViewDelegate, UITableViewDataSource;


#import "FBKOSLogViewerDataSource.h"

@interface FBKOSLogViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, getter=isLoading) BOOL loading; // ivar: _loading
@property (retain) FBKOSLogViewerDataSource *logSource; // ivar: _logSource
@property (retain) NSURL *logURL; // ivar: _logURL
@property BOOL previousToolbarHidden; // ivar: _previousToolbarHidden
@property (weak) UIActivityIndicatorView *spinner; // ivar: _spinner
@property (readonly) Class superclass;


+(BOOL)canDisplayURL:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)nextPage;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setOSLogURL:(id)arg0 ;
-(void)shareArchive:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif