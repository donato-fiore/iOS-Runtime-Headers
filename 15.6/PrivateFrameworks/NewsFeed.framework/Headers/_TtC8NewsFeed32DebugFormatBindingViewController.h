// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC8NEWSFEED32DEBUGFORMATBINDINGVIEWCONTROLLER_H
#define _TTC8NEWSFEED32DEBUGFORMATBINDINGVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC8NewsFeed32DebugFormatBindingViewController : UIViewController {
    ? editor;
    ? formatService;
    ? weatherService;
    ? tableView;
    ? sections;
    ? detailsViewController;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)doShowDetails;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif