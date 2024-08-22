// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DOCEXPORTMODEVIEWCONTROLLER_H
#define DOCEXPORTMODEVIEWCONTROLLER_H

@class NSURL;
@protocol DOCTargetSelectionBrowserViewControllerDelegate;


#import "UIDocumentBrowserViewController.h"
#import "DOCTargetSelectionBrowserViewController.h"

@interface DOCExportModeViewController : UIDocumentBrowserViewController <DOCTargetSelectionBrowserViewControllerDelegate>



@property (copy, nonatomic) NSURL *directoryURLToReveal; // ivar: _directoryURLToReveal
@property (retain, nonatomic) DOCTargetSelectionBrowserViewController *moveVC; // ivar: _moveVC


-(void)targetSelectionController:(id)arg0 didExportToURLs:(id)arg1 ;
-(void)targetSelectionControllerWasCancelled:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif