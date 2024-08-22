// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSDETAILCONTROLLER_H
#define PSDETAILCONTROLLER_H



#import "PSViewController.h"
#import "PSEditingPane.h"

@interface PSDetailController : PSViewController {
    PSEditingPane *_pane;
}


@property (weak, nonatomic) PSEditingPane *pane;


-(id)title;
-(void)dealloc;
-(void)didRotateFromInterfaceOrientation:(NSInteger)arg0 ;
-(void)loadPane;
-(void)loadView;
-(void)saveChanges;
-(void)statusBarWillAnimateByHeight:(CGFloat)arg0 ;
-(void)suspend;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidUnload;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)willRotateToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;


@end


#endif