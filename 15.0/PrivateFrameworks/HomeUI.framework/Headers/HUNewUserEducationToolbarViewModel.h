// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUNEWUSEREDUCATIONTOOLBARVIEWMODEL_H
#define HUNEWUSEREDUCATIONTOOLBARVIEWMODEL_H

@class NSString;


#import "HUNewUserEducationBaseViewModel.h"

@interface HUNewUserEducationToolbarViewModel : HUNewUserEducationBaseViewModel

@property (readonly, nonatomic) NSInteger accessoryArrowViewStyle; // ivar: _accessoryArrowViewStyle
@property (readonly, nonatomic) NSString *accessoryArrowViewTitle; // ivar: _accessoryArrowViewTitle
@property (readonly, nonatomic) NSInteger flexibleSpaceBarButtonStyle; // ivar: _flexibleSpaceBarButtonStyle
@property (readonly, nonatomic) NSInteger learnMoreBarButtonStyle; // ivar: _learnMoreBarButtonStyle
@property (readonly, nonatomic) NSString *learnMoreButtonTitle; // ivar: _learnMoreButtonTitle


+(CGFloat)toolBarHeight;
+(id)toolBarTextColor;
-(id)init;


@end


#endif