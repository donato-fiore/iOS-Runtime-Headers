// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCOLLECTIONVIEWCELL_H
#define SBCOLLECTIONVIEWCELL_H

@class UICollectionViewCell;
@protocol SBCollectionViewCellDelegate;



@interface SBCollectionViewCell : UICollectionViewCell {
    BOOL _performSetHighlighted;
}


@property (weak, nonatomic) NSObject<SBCollectionViewCellDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL protectDelayedUnhighlights; // ivar: _protectDelayedUnhighlights


-(void)_didSetHighlighted:(BOOL)arg0 ;
-(void)_performSetHighlighted;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 afterDelay:(CGFloat)arg1 ;


@end


#endif