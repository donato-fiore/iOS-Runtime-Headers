// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIUICOLLECTIONVIEWFLOWLAYOUT_H
#define SIRIUICOLLECTIONVIEWFLOWLAYOUT_H

@class UICollectionViewFlowLayout;



@interface SiriUICollectionViewFlowLayout : UICollectionViewFlowLayout {
    BOOL _animatesBoundsChanges;
}




-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg0 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg0 ;
-(void)finalizeAnimatedBoundsChange;
-(void)prepareForAnimatedBoundsChange:(struct CGRect )arg0 ;


@end


#endif