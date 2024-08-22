// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNMECARDSHARINGONBOARDINGHEADERVIEWCONTROLLER_H
#define CNMECARDSHARINGONBOARDINGHEADERVIEWCONTROLLER_H

@class UIViewController, UILabel, NSString;


#import "CNMeCardSharingOnboardingAvatarCarouselViewController.h"
#import "CNMeCardSharingPickerLayoutAttributes.h"

@interface CNMeCardSharingOnboardingHeaderViewController : UIViewController

@property (retain, nonatomic) CNMeCardSharingOnboardingAvatarCarouselViewController *avatarCarouselController; // ivar: _avatarCarouselController
@property (retain, nonatomic) UILabel *headerLabel; // ivar: _headerLabel
@property (retain, nonatomic) NSString *headerTitle; // ivar: _headerTitle
@property (retain, nonatomic) CNMeCardSharingPickerLayoutAttributes *layoutAttributes; // ivar: _layoutAttributes
@property (nonatomic) NSUInteger mode; // ivar: _mode


+(CGFloat)heightForHeaderWithContainerSize:(struct CGSize )arg0 withTitle:(id)arg1 layoutAttributes:(id)arg2 hasAvatar:(BOOL)arg3 ;
-(id)initWithAvatarCarouselViewController:(id)arg0 headerTitle:(id)arg1 layoutAttributes:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif