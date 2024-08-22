// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUDEFERREDUISEGMENTEDCONTROL_H
#define SUDEFERREDUISEGMENTEDCONTROL_H

@class UISegmentedControl, NSMutableArray, NSString;
@protocol SUDeferredUIView;



@interface SUDeferredUISegmentedControl : UISegmentedControl <SUDeferredUIView>

 {
    CGRect _deferredFrame;
    CGFloat _deferredMaxTotalWidth;
    CGFloat _deferredMinSegmentWidth;
    NSMutableArray *_deferredSegments;
    NSInteger _deferredSegmentedControlStyle;
    NSUInteger _deferredSelectedSegmentIndex;
    BOOL _deferredSizeToFit;
    BOOL _isDeferringInterfaceUpdates;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDeferringInterfaceUpdates) BOOL deferringInterfaceUpdates;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)segmentedControlStyle;
-(NSInteger)selectedSegmentIndex;
-(NSUInteger)numberOfSegments;
-(id)imageForSegmentAtIndex:(NSUInteger)arg0 ;
-(id)titleForSegmentAtIndex:(NSUInteger)arg0 ;
-(struct CGRect )frame;
-(void)_commitDeferredInterfaceUpdates;
-(void)_insertSegmentWithValue:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)_saveCurrentStateAsDeferred;
-(void)_saveSegmentsAsDeferred;
-(void)dealloc;
-(void)insertSegmentWithImage:(id)arg0 atIndex:(NSUInteger)arg1 animated:(BOOL)arg2 ;
-(void)insertSegmentWithTitle:(id)arg0 atIndex:(NSUInteger)arg1 animated:(BOOL)arg2 ;
-(void)removeAllSegments;
-(void)removeSegmentAtIndex:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setImage:(id)arg0 forSegmentAtIndex:(NSUInteger)arg1 ;
-(void)setSegmentedControlStyle:(NSInteger)arg0 ;
-(void)setSelectedSegmentIndex:(NSInteger)arg0 ;
-(void)setTitle:(id)arg0 forSegmentAtIndex:(NSUInteger)arg1 ;
-(void)sizeToFit;
-(void)sizeToFitWithMinimumSegmentWidth:(CGFloat)arg0 maximumTotalWidth:(CGFloat)arg1 ;


@end


#endif