// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIINPUTVIEWSETPLACEMENTOFFSCREENLEFTORRIGHT_H
#define UIINPUTVIEWSETPLACEMENTOFFSCREENLEFTORRIGHT_H

@protocol NSSecureCoding;


#import "UIInputViewSetPlacement.h"

@interface UIInputViewSetPlacementOffScreenLeftOrRight : UIInputViewSetPlacement <NSSecureCoding>

 {
    UIInputViewSetPlacement *_otherPlacement;
}




-(id)verticalConstraintForInputViewSet:(id)arg0 hostView:(id)arg1 containerView:(id)arg2 ;
-(void)setOtherPlacement:(id)arg0 ;


@end


#endif