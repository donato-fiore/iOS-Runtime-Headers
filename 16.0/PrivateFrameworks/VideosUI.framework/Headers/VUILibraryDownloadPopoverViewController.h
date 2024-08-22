// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUILIBRARYDOWNLOADPOPOVERVIEWCONTROLLER_H
#define VUILIBRARYDOWNLOADPOPOVERVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol UIGestureRecognizerDelegate, VUILibraryDownloadPopoverViewControllerDelegate;


#import "VUILibraryListItemView.h"

@interface VUILibraryDownloadPopoverViewController : UIViewController <UIGestureRecognizerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VUILibraryDownloadPopoverViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VUILibraryListItemView *listView; // ivar: _listView
@property (readonly) Class superclass;


-(void)loadView;
-(void)popoverPressed:(id)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif