// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIACTIVITYCONTENTCOLLECTIONVIEW_H
#define _UIACTIVITYCONTENTCOLLECTIONVIEW_H

@class UICollectionView;



@interface _UIActivityContentCollectionView : UICollectionView

@property (nonatomic) BOOL initialValidLayoutWasCalled; // ivar: _initialValidLayoutWasCalled
@property (nonatomic) BOOL isInitialLayoutPass; // ivar: _isInitialLayoutPass


-(BOOL)_shouldFadeCellsForBoundChangeWhileRotating;
-(void)layoutSubviews;
-(void)removeFromSuperview;


@end


#endif