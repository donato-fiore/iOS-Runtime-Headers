// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11APPSTOREKIT11ARTWORKVIEW_H
#define _TTC11APPSTOREKIT11ARTWORKVIEW_H

@class TtC11AppStoreKit17RoundedCornerView, UIColor;



@interface _TtC11AppStoreKit11ArtworkView : TtC11AppStoreKit17RoundedCornerView {
    ? imageView;
    ? shadowView;
    ? shadow;
    ? internalBackgroundColor;
    ? updatingFrameForSymbolSizeChange;
    ? imageSize;
    ? frameUpdatesImageSize;
    ? clipImageToBounds;
    ? shouldSymbolImageSelfSize;
    ? isCornerRadiusInvalid;
    ? isStyleInvalid;
    ? style;
    ? artworkTintColor;
}


@property (nonatomic) BOOL accessibilityIgnoresInvertColors;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) CGRect frame;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif