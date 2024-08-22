// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKSEGMENTEDCTRL_H
#define AKSEGMENTEDCTRL_H

@class UIControl, NSArray, NSMutableOrderedSet;



@interface AKSegmentedCtrl : UIControl

@property (copy, nonatomic) NSArray *buttons; // ivar: _buttons
@property (copy, nonatomic) NSArray *images; // ivar: _images
@property (nonatomic) NSUInteger selectedSegment; // ivar: _selectedSegment
@property (retain, nonatomic) NSMutableOrderedSet *selectionStack; // ivar: _selectionStack
@property (nonatomic) NSUInteger selectionType; // ivar: _selectionType


-(BOOL)isEnabledForSegment:(NSUInteger)arg0 ;
-(BOOL)isSelectedForSegment:(NSUInteger)arg0 ;
-(NSInteger)tagForSegment:(NSUInteger)arg0 ;
-(NSUInteger)segmentCount;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithImages:(id)arg0 ;
-(id)segmentAtIndex:(NSUInteger)arg0 ;
-(id)segmentForTag:(NSInteger)arg0 ;
-(void)_buttonTapped:(id)arg0 ;
-(void)_commonInit;
-(void)_configureForNewImages;
-(void)_setSelected:(BOOL)arg0 forSegment:(NSUInteger)arg1 ;
-(void)deselectAllSegments;
-(void)selectSegmentWithTag:(NSInteger)arg0 ;
-(void)setEnabled:(BOOL)arg0 forSegment:(NSUInteger)arg1 ;
-(void)setSelected:(BOOL)arg0 forSegment:(NSUInteger)arg1 ;
-(void)setTag:(NSInteger)arg0 forSegment:(NSUInteger)arg1 ;


@end


#endif