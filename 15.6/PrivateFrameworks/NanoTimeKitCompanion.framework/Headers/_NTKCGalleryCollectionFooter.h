// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NTKCGALLERYCOLLECTIONFOOTER_H
#define _NTKCGALLERYCOLLECTIONFOOTER_H

@class UICollectionReusableView, UILabel, NSString;



@interface _NTKCGalleryCollectionFooter : UICollectionReusableView {
    UILabel *_label;
}


@property (retain, nonatomic) NSString *text;


+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_fontSizeDidChange;
-(void)layoutSubviews;


@end


#endif