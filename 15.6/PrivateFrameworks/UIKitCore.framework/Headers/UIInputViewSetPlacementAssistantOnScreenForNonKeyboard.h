// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIINPUTVIEWSETPLACEMENTASSISTANTONSCREENFORNONKEYBOARD_H
#define UIINPUTVIEWSETPLACEMENTASSISTANTONSCREENFORNONKEYBOARD_H

@protocol NSSecureCoding;


#import "UIInputViewSetPlacementWrapper.h"

@interface UIInputViewSetPlacementAssistantOnScreenForNonKeyboard : UIInputViewSetPlacementWrapper <NSSecureCoding>





+(BOOL)supportsSecureCoding;
-(id)horizontalConstraintForInputViewSet:(id)arg0 hostView:(id)arg1 containerView:(id)arg2 ;
-(id)verticalConstraintForInputViewSet:(id)arg0 hostView:(id)arg1 containerView:(id)arg2 ;
-(id)widthConstraintForInputViewSet:(id)arg0 hostView:(id)arg1 containerView:(id)arg2 ;


@end


#endif