// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIINPUTVIEWSETPLACEMENTASSISTANTONSCREEN_H
#define UIINPUTVIEWSETPLACEMENTASSISTANTONSCREEN_H

@protocol NSSecureCoding;


#import "UIInputViewSetPlacement.h"

@interface UIInputViewSetPlacementAssistantOnScreen : UIInputViewSetPlacement <NSSecureCoding>





+(BOOL)supportsSecureCoding;
+(id)infoWithPoint:(struct CGPoint )arg0 isCompact:(BOOL)arg1 frame:(struct CGRect )arg2 position:(NSUInteger)arg3 ;
-(BOOL)accessoryViewWillAppear;
-(BOOL)inputViewWillAppear;
-(BOOL)isFloatingAssistantView;
-(BOOL)showsEditItems;
-(BOOL)showsInputOrAssistantViews;
-(BOOL)showsInputViews;
-(CGFloat)inputAssistantViewHeightForInputViewSet:(id)arg0 ;
-(CGFloat)verticalOffset;
-(Class)applicatorClassForKeyboard:(BOOL)arg0 ;
-(id)verticalConstraintForInputViewSet:(id)arg0 hostView:(id)arg1 containerView:(id)arg2 ;
-(struct CGRect )remoteIntrinsicContentSizeForInputViewInSet:(id)arg0 includingIAV:(BOOL)arg1 ;
-(struct UIEdgeInsets )inputAccessoryViewPadding;


@end


#endif