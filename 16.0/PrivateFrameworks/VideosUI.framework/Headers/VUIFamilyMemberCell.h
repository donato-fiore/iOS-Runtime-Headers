// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIFAMILYMEMBERCELL_H
#define VUIFAMILYMEMBERCELL_H

@class NSString, _TVImageView, TVImageLayout, _TVMonogramView;
@protocol VUIFamilyMemberDelegate;


#import "VUIListCollectionViewCell.h"
#import "VUISeparatorView.h"
#import "VUIVideosImageView.h"
#import "VUIFamilyMember.h"
#import "VUILabel.h"

@interface VUIFamilyMemberCell : VUIListCollectionViewCell <VUIFamilyMemberDelegate>



@property (retain, nonatomic) VUISeparatorView *bottomSeparatorView; // ivar: _bottomSeparatorView
@property (retain, nonatomic) VUIVideosImageView *chevronImageView; // ivar: _chevronImageView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) VUIFamilyMember *familyMember; // ivar: _familyMember
@property (retain, nonatomic) _TVImageView *familyMemberImageView; // ivar: _familyMemberImageView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TVImageLayout *monogramImageLayout; // ivar: _monogramImageLayout
@property (readonly, nonatomic) CGSize monogramSize;
@property (retain, nonatomic) _TVMonogramView *monogramView; // ivar: _monogramView
@property (retain, nonatomic) VUILabel *nameLabel; // ivar: _nameLabel
@property (readonly) Class superclass;


+(CGFloat)maxMonogramHeight;
+(id)_monogramViewForFamilyMemberCell:(id)arg0 ;
+(void)configureVUIFamilyMemberCell:(id)arg0 withFamilyMember:(id)arg1 metricsOnly:(BOOL)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_iOS_layoutSubviewsWithSize:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)configureMonogramImageLayoutForWindowWidth:(CGFloat)arg0 ;
-(void)familyMember:(id)arg0 photoRequestDidCompleteWithImage:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif