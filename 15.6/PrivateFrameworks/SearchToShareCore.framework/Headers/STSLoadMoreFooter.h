// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STSLOADMOREFOOTER_H
#define STSLOADMOREFOOTER_H

@class UICollectionReusableView, UIActivityIndicatorView, UIImageView, UIImage;
@protocol STSLoadMoreFooterDelegate;



@interface STSLoadMoreFooter : UICollectionReusableView {
    UIActivityIndicatorView *_activityIndicator;
    UIImageView *_providerIconView;
}


@property (weak, nonatomic) NSObject<STSLoadMoreFooterDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isLoading) BOOL loading; // ivar: _loading
@property (retain, nonatomic) UIImage *searchProviderImage; // ivar: _searchProviderImage


+(CGFloat)defaultHeight;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_handleLogoTap:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif