// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKAVATARCONTACTNAMECOLLECTIONREUSABLEVIEW_H
#define CKAVATARCONTACTNAMECOLLECTIONREUSABLEVIEW_H

@class UICollectionReusableView, UILabel;



@interface CKAvatarContactNameCollectionReusableView : UICollectionReusableView

@property (nonatomic) BOOL shouldDisplayTitle; // ivar: _shouldDisplayTitle
@property (nonatomic) NSInteger style; // ivar: _style
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(id)reuseIdentifier;
+(id)supplementaryViewKind;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)configureWithEntity:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif