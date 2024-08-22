// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPUSTACKVIEW_H
#define MPUSTACKVIEW_H

@class UIView, UIWindow, NSString, NSArray;
@protocol MPUStackViewDataSource;



@interface MPUStackView : UIView {
    ? _configuration;
    NSInteger _distanceIgnoreCount;
    UIWindow *_window;
}


@property (nonatomic) CGSize baseSize;
@property (weak, nonatomic) NSObject<MPUStackViewDataSource> *dataSource; // ivar: _dataSource
@property (nonatomic) BOOL forcesIntegralX;
@property (nonatomic) BOOL forcesIntegralY;
@property (readonly, nonatomic) Class itemClass; // ivar: _itemClass
@property (readonly, nonatomic) NSString *itemReuseIdentifier; // ivar: _itemReuseIdentifier
@property (readonly, nonatomic) NSArray *items; // ivar: _items
@property (nonatomic) UIOffset maximumRelativeOffsetStep;
@property (readonly, nonatomic) NSInteger numberOfItems; // ivar: _numberOfItems
@property (weak, nonatomic) UIView *perspectiveTargetView; // ivar: _perspectiveTargetView
@property (nonatomic) CGSize sizeInsetStep;
@property (nonatomic) CGPoint vanishingPoint;


-(id)_dequeueReusableItem;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 itemClass:(Class)arg1 itemReuseIdentifier:(id)arg2 ;
-(id)itemAtIndex:(NSInteger)arg0 ;
-(struct CGSize )sizeOfItemAtIndex:(CGFloat)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIOffset )relativeOffsetOfItemAtIndex:(CGFloat)arg0 withCenter:(struct CGPoint )arg1 ;
-(void)_updateGeometryFieldsInConfiguration;
-(void)beginIgnoringDistanceUpdates;
-(void)dealloc;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)endIgnoringDistanceUpdates;
-(void)layoutSubviews;
-(void)reloadData;
-(void)reloadDataWithTransition:(NSInteger)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setCenter:(struct CGPoint )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)updateForChangedDistanceFromVanishingPoint;


@end


#endif