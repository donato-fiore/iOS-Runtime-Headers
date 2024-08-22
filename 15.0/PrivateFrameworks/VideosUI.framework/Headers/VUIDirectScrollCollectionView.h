// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIDIRECTSCROLLCOLLECTIONVIEW_H
#define VUIDIRECTSCROLLCOLLECTIONVIEW_H

@class UICollectionView;



@interface VUIDirectScrollCollectionView : UICollectionView



-(BOOL)canBecomeFocused;
-(CGFloat)_tapScrollDelta;
-(id)initWithFrame:(struct CGRect )arg0 collectionViewLayout:(id)arg1 ;
-(void)_downArrowAction:(id)arg0 ;
-(void)_upArrowAction:(id)arg0 ;


@end


#endif