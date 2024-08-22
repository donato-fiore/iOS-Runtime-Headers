// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSEARCHRESULTASSETCELL_H
#define PXSEARCHRESULTASSETCELL_H

@class UICollectionViewCell, NSString, UIImageView;
@protocol PXSearchResultThumbnailCell;



@interface PXSearchResultAssetCell : UICollectionViewCell <PXSearchResultThumbnailCell>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImageView *leadingBackgroundGradientView; // ivar: _leadingBackgroundGradientView
@property (retain, nonatomic) UIImageView *leadingBadgeImageView; // ivar: _leadingBadgeImageView
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIImageView *thumbnailImageView; // ivar: _thumbnailImageView
@property (retain, nonatomic) UIImageView *trailingBackgroundGradientView; // ivar: _trailingBackgroundGradientView
@property (retain, nonatomic) UIImageView *trailingBadgeImageView; // ivar: _trailingBadgeImageView


+(id)reuseIdentifier;
-(id)focusEffect;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)prepareForReuse;
-(void)setAssetThumbnailBadgeTypes:(NSUInteger)arg0 ;
-(void)setThumbnailImage:(id)arg0 ;


@end


#endif