// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIAPPSGRIDVIEWCONTROLLER_H
#define VUIAPPSGRIDVIEWCONTROLLER_H

@class UIViewController, UILabel, UICollectionViewFlowLayout, UICollectionView, NSArray, NSString;
@protocol UICollectionViewDataSource, UICollectionViewDelegate, UIViewControllerTransitioningDelegate;



@interface VUIAppsGridViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UIViewControllerTransitioningDelegate>

 {
    UILabel *_titleLabel;
    UICollectionViewFlowLayout *_layout;
    UICollectionView *_collectionView;
}


@property (copy, nonatomic) NSArray *apps; // ivar: _apps
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(Class)_collectionViewClass;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)init;
-(void)setTitle:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif