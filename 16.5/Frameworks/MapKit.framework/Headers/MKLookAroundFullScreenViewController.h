// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKLOOKAROUNDFULLSCREENVIEWCONTROLLER_H
#define MKLOOKAROUNDFULLSCREENVIEWCONTROLLER_H

@class UIViewController, UIView;
@protocol MKLookAroundFullScreenViewControllerDelegate;



@interface MKLookAroundFullScreenViewController : UIViewController

@property (weak, nonatomic) UIView *contentView; // ivar: _contentView
@property (weak, nonatomic) NSObject<MKLookAroundFullScreenViewControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger originalAutoresizingMask; // ivar: _originalAutoresizingMask


-(NSInteger)overrideUserInterfaceStyle;
-(void)attachContentView;
-(void)detachContentView;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif