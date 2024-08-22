// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUPOCKETEDCONTAINERVIEWCONTROLLER_H
#define HUPOCKETEDCONTAINERVIEWCONTROLLER_H

@class UIViewController, NSString, UIVisualEffectView;
@protocol HUPreloadableViewController;



@interface HUPocketedContainerViewController : UIViewController <HUPreloadableViewController>



@property (readonly, nonatomic) UIViewController *contentViewController; // ivar: _contentViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIVisualEffectView *pocketBackgroundView; // ivar: _pocketBackgroundView
@property (retain, nonatomic) UIViewController *pocketViewController; // ivar: _pocketViewController
@property (readonly) Class superclass;


-(id)_installPocket;
-(id)_tearDownPocket;
-(id)hu_preloadContent;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentViewController:(id)arg0 ;
-(id)initWithContentViewController:(id)arg0 pocketViewController:(id)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(struct CGSize )preferredContentSize;
-(void)_installContentViewController;
-(void)setPreferredContentSize:(struct CGSize )arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif