// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGPPTVIEWCONTROLLER_H
#define PXGPPTVIEWCONTROLLER_H

@class UIViewController;


#import "PXGView.h"
#import "PXGLayout.h"

@interface PXGPPTViewController : UIViewController

@property (readonly, nonatomic) PXGView *gridView; // ivar: _gridView
@property (readonly, nonatomic) PXGLayout *initialLayout; // ivar: _initialLayout


-(id)initWithCoder:(id)arg0 ;
-(id)initWithLayout:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_handleDoubleTap:(id)arg0 ;
// -(void)animate:(id)arg0 animationRenderingCompletionHandler:(unk)arg1 proceedHandler:(id)arg2  ;
-(void)viewDidLoad;


@end


#endif