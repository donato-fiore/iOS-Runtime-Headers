// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFICSPREVIEWVIEWCONTROLLER_H
#define _SFICSPREVIEWVIEWCONTROLLER_H

@class UINavigationController, NSString, NSURL, UIBarButtonItem, EKICSPreviewController;
@protocol EKICSPreviewControllerDelegate;



@interface _SFICSPreviewViewController : UINavigationController <EKICSPreviewControllerDelegate>

 {
    NSString *_filePath;
    NSURL *_sourceURL;
    UIBarButtonItem *_activityBarButtonItem;
    UIBarButtonItem *_doneBarButtonItem;
    EKICSPreviewController *_icsController;
}


@property (copy, nonatomic) id *beforeDismissHandler; // ivar: _beforeDismissHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFilePath:(id)arg0 sourceURL:(id)arg1 ;
-(id)popViewControllerAnimated:(BOOL)arg0 ;
-(void)_done:(id)arg0 ;
-(void)_ensureLeftBarButtonItemsIncludesActivityItem:(id)arg0 ;
-(void)_ensureLeftBarButtonItemsIncludesDoneItem:(id)arg0 ;
-(void)_presentActivityViewController:(id)arg0 ;
-(void)_updateNavigationBarItems;
-(void)icsPreviewControllerWantsDismissal:(id)arg0 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif