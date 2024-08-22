// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8NEWSFEED35DEBUGFORMATUPLOADDIFFVIEWCONTROLLER_H
#define _TTC8NEWSFEED35DEBUGFORMATUPLOADDIFFVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC8NewsFeed35DebugFormatUploadDiffViewController : UIViewController {
    ? changeSet;
    ? editor;
    ? styler;
    ? titleLabel;
    ? remoteDiffView;
    ? remoteDiffGutterView;
    ? localDiffView;
    ? localDiffGutterView;
    ? changeSetLabel;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)doDismiss;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif