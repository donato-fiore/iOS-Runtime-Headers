// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIINPUTVIEWSETPLACEMENTACCESSORYONSCREEN_H
#define UIINPUTVIEWSETPLACEMENTACCESSORYONSCREEN_H

@protocol NSSecureCoding;


#import "UIInputViewSetPlacement.h"

@interface UIInputViewSetPlacementAccessoryOnScreen : UIInputViewSetPlacement <NSSecureCoding>





+(BOOL)supportsSecureCoding;
-(BOOL)accessoryViewWillAppear;
-(BOOL)showsEditItems;
-(BOOL)showsInputViews;
-(id)verticalConstraintForInputViewSet:(id)arg0 hostView:(id)arg1 containerView:(id)arg2 ;
-(struct CGRect )remoteIntrinsicContentSizeForInputViewInSet:(id)arg0 includingIAV:(BOOL)arg1 ;


@end


#endif