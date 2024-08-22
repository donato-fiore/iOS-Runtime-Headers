// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPEOPLEBOOTSTRAPHEADERVIEW_H
#define PXPEOPLEBOOTSTRAPHEADERVIEW_H

@class UICollectionReusableView, UILabel, NSString;
@protocol PXPerson;


#import "PXPeopleScalableAvatarView.h"

@interface PXPeopleBootstrapHeaderView : UICollectionReusableView

@property (retain, nonatomic) PXPeopleScalableAvatarView *avatarView; // ivar: _avatarView
@property (retain, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (copy, nonatomic) NSString *descriptionText;
@property (retain, nonatomic) NSObject<PXPerson> *person; // ivar: _person
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(struct CGSize )_sizeForString:(id)arg0 width:(CGFloat)arg1 multiline:(BOOL)arg2 font:(id)arg3 ;
+(struct CGSize )sizeForTitle:(id)arg0 boundingSize:(struct CGSize )arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupHeader;
-(void)prepareForReuse;


@end


#endif