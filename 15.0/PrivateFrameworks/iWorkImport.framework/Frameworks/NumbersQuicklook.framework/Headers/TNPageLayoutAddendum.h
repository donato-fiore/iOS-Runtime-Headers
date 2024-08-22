// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TNPAGELAYOUTADDENDUM_H
#define TNPAGELAYOUTADDENDUM_H



#import "TNPageLayoutContainer.h"

@interface TNPageLayoutAddendum : TNPageLayoutContainer



-(BOOL)wantsOverlayContentLayout;
-(Class)contentLayoutClassOverride;
-(struct CGColor *)backgroundColor;
-(void)updateChildrenFromInfo;


@end


#endif