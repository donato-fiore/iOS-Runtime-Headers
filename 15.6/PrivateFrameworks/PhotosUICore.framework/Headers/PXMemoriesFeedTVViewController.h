// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXMEMORIESFEEDTVVIEWCONTROLLER_H
#define PXMEMORIESFEEDTVVIEWCONTROLLER_H

@class UIViewController, NSString, UIScrollView;
@protocol PXChangeObserver;


#import "PXMemoriesFeedUIViewController.h"
#import "PXMemoriesSpecManager.h"

@interface PXMemoriesFeedTVViewController : UIViewController <PXChangeObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXMemoriesFeedUIViewController *memoriesFeedController; // ivar: _memoriesFeedController
@property (readonly, nonatomic) UIScrollView *ppt_scrollView;
@property (readonly, nonatomic) PXMemoriesSpecManager *specManager; // ivar: _specManager
@property (readonly) Class superclass;


-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_specDidChange:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)viewDidLoad;


@end


#endif