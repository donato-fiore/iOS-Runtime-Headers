// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OFUIGRIDVIEWCONTROLLER_H
#define OFUIGRIDVIEWCONTROLLER_H

@class NSString, NSOperationQueue;
@protocol OFUIGridViewDataSource, UIScrollViewDelegate, OFUIWindowDraggingSource;


#import "OFUIViewController.h"
#import "OFUIGridView.h"

@interface OFUIGridViewController : OFUIViewController <OFUIGridViewDataSource, UIScrollViewDelegate, OFUIWindowDraggingSource>

 {
    NSUInteger _gridViewStyle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) OFUIGridView *gridView; // ivar: _gridView
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideWhenDeviceRotates; // ivar: _hideWhenDeviceRotates
@property (nonatomic) BOOL maintainPercentageScrolledWhenDeviceRotates; // ivar: _maintainPercentageScrolledWhenDeviceRotates
@property (readonly, retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly) Class superclass;


-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(NSInteger)numberOfCellsInGridView:(id)arg0 ;
-(id)gridView:(id)arg0 cellAtIndex:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithStyle:(NSUInteger)arg0 ;
-(struct CGPoint )draggingSource:(id)arg0 badgeCenterForItem:(id)arg1 ;
-(struct CGRect )draggingSource:(id)arg0 originalFrameForItem:(id)arg1 ;
-(void)cancelAllOperations:(BOOL)arg0 ;
-(void)commonInit;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)didRotateFromInterfaceOrientation:(NSInteger)arg0 ;
-(void)draggingSource:(id)arg0 cleanupItem:(id)arg1 ;
-(void)draggingSource:(id)arg0 prepareItem:(id)arg1 ;
-(void)loadView;
-(void)setEditing:(BOOL)arg0 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateDisplayedCellOperationsPriority:(id)arg0 ;
-(void)updateDisplayedCellsOperationsPriority;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillUnload;
-(void)willMoveToParentViewController:(id)arg0 ;
-(void)willRotateToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;


@end


#endif