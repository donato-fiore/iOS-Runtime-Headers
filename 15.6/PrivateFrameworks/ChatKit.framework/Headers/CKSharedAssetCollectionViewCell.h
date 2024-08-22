// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKSHAREDASSETCOLLECTIONVIEWCELL_H
#define CKSHAREDASSETCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, NSString, UIView, UILabel;



@interface CKSharedAssetCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) UIView *previewTitleContainerView; // ivar: _previewTitleContainerView
@property (retain, nonatomic) UILabel *previewTitleLabel; // ivar: _previewTitleLabel
@property (retain, nonatomic) UIView *previewView; // ivar: _previewView
@property (retain, nonatomic) NSString *url; // ivar: _url


+(id)reuseIdentifier;
-(CGFloat)cornerRadius;
-(id)formattedTitleFromPreviewTitle:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif