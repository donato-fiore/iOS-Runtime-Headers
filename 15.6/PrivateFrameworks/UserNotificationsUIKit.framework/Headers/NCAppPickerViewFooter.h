// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCAPPPICKERVIEWFOOTER_H
#define NCAPPPICKERVIEWFOOTER_H

@class UICollectionReusableView, UILabel, UIButton;
@protocol NCAppPickerViewFooterDelegate;



@interface NCAppPickerViewFooter : UICollectionReusableView {
    UILabel *_captionLabel;
    UIButton *_showMoreButton;
    UILabel *_footnoteLabel;
}


@property (weak, nonatomic) NSObject<NCAppPickerViewFooterDelegate> *delegate; // ivar: _delegate


+(CGFloat)preferredHeightForWidth:(CGFloat)arg0 showMoreButton:(BOOL)arg1 ;
+(id)_footnoteFont;
+(id)_footnoteText;
+(id)_showMoreButtonFont;
+(id)_showMoreButtonText;
+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_showMoreButtonPressed:(id)arg0 ;
-(void)configureWithShowMoreButton:(BOOL)arg0 delegate:(id)arg1 ;
-(void)prepareForReuse;


@end


#endif