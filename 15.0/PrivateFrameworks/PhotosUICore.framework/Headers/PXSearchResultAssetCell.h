// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSEARCHRESULTASSETCELL_H
#define PXSEARCHRESULTASSETCELL_H

@class UICollectionViewCell, UIImageView, NSString;
@protocol PXSearchResultThumbnailCell;



@interface PXSearchResultAssetCell : UICollectionViewCell <PXSearchResultThumbnailCell>



@property (retain, nonatomic) UIImageView *backgroundGradientView; // ivar: _backgroundGradientView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIImageView *syndicatedAssetBadge; // ivar: _syndicatedAssetBadge
@property (readonly, nonatomic) UIImageView *thumbnailImageView; // ivar: _thumbnailImageView


+(id)reuseIdentifier;
-(id)focusEffect;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)prepareForReuse;
-(void)setThumbnailImage:(id)arg0 ;
-(void)shouldDisplayUnsavedSyndicatedAssetBadge:(BOOL)arg0 ;


@end


#endif