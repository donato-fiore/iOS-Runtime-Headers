// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUNEWUSEREDUCATIONWRAPPERVIEWMODEL_H
#define HUNEWUSEREDUCATIONWRAPPERVIEWMODEL_H



#import "HUNewUserEducationBaseViewModel.h"
#import "HUNewUserEducationStackViewModel.h"
#import "HUNewUserEducationToolbarViewModel.h"

@interface HUNewUserEducationWrapperViewModel : HUNewUserEducationBaseViewModel

@property (readonly, nonatomic) BOOL masksToBounds; // ivar: _masksToBounds
@property (readonly, nonatomic) HUNewUserEducationStackViewModel *stackViewModel; // ivar: _stackViewModel
@property (readonly, nonatomic) HUNewUserEducationToolbarViewModel *toolbarModel; // ivar: _toolbarModel


+(CGFloat)cornerRadius;
-(id)init;


@end


#endif