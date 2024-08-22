// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKUIDIVIDEDGRIDVIEWCONTROLLER_H
#define EKUIDIVIDEDGRIDVIEWCONTROLLER_H

@class UIViewController, UIColor, NSArray;
@protocol EKUIDividedGridViewControllerDelegate;



@interface EKUIDividedGridViewController : UIViewController {
    NSInteger _type;
    UIColor *_cellBackgroundColor;
}


@property (retain) NSArray *allCells; // ivar: _allCells
@property (retain, nonatomic) NSArray *buttonTitles; // ivar: _buttonTitles
@property (weak) NSObject<EKUIDividedGridViewControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGFloat preferredInset; // ivar: _preferredInset
@property (nonatomic) CGFloat preferredWidth; // ivar: _preferredWidth
@property (retain) NSArray *weekViews; // ivar: _weekViews


+(id)dividerColor;
-(CGFloat)_neededHeight;
-(CGFloat)_rowHeightForWidth:(CGFloat)arg0 ;
-(id)_newDividerView;
-(id)initWithType:(NSInteger)arg0 buttonTitles:(id)arg1 cellBackgroundColor:(id)arg2 ;
-(struct CGSize )intrinsicContentSize;
-(void)cellTapped:(id)arg0 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewWillLayoutSubviews;


@end


#endif