// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC27APPLEMEDIASERVICESUIDYNAMIC16ARTWORKIMAGEVIEW_H
#define _TTC27APPLEMEDIASERVICESUIDYNAMIC16ARTWORKIMAGEVIEW_H

@class AMSUICommonView;



@interface _TtC27AppleMediaServicesUIDynamic16ArtworkImageView : AMSUICommonView {
    ? artworkSize;
    ? darkArtwork;
    ? lightArtwork;
    ? objectGraph;
    ? backgroundView;
    ? underlyingImageView;
}


@property (nonatomic, readonly) BOOL amsuid_wantsArtworkStyle;
@property (nonatomic, readonly) BOOL hasContent;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif