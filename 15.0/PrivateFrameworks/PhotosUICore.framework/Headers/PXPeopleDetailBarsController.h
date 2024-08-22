// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPEOPLEDETAILBARSCONTROLLER_H
#define PXPEOPLEDETAILBARSCONTROLLER_H

@class UIButton, PHPerson;


#import "PXPhotosDetailsBarsController.h"

@interface PXPeopleDetailBarsController : PXPhotosDetailsBarsController

@property (retain, nonatomic) UIButton *peopleTitleView; // ivar: _peopleTitleView
@property (retain, nonatomic) PHPerson *person; // ivar: _person


-(id)createAssetActionManager;
-(id)createTitleView;


@end


#endif