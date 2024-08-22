// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVGRIDVIEWCONTROLLER_H
#define _TVGRIDVIEWCONTROLLER_H

@class TVMLCollectionViewController;



@interface _TVGridViewController : TVMLCollectionViewController {
    BOOL _configureForListTemplate;
}




-(BOOL)contentFlowsVertically;
-(BOOL)shouldHeaderFloatByDefault;
-(id)makeCollectionViewWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)updateViewLayoutAnimated:(BOOL)arg0 relayout:(BOOL)arg1 ;
-(void)updateWithViewElement:(id)arg0 cellMetrics:(struct TVCellMetrics )arg1 ;
-(void)viewDidLoad;


@end


#endif