// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFSCANNINGCREDITCARDCOLLECTIONVIEWCELL_H
#define SFSCANNINGCREDITCARDCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIImageView, UILabel;



@interface SFScanningCreditCardCollectionViewCell : UICollectionViewCell {
    UIImageView *_scanningImageView;
    UILabel *_scanCardLabel;
}




+(CGFloat)desiredCellWidth;
+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif