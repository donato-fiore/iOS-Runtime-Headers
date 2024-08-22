// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIINPUTVIEWSETPLACEMENTDRAGTODISMISS_H
#define _UIINPUTVIEWSETPLACEMENTDRAGTODISMISS_H

@protocol NSSecureCoding;


#import "UIInputViewSetPlacementOnScreen.h"

@interface _UIInputViewSetPlacementDragToDismiss : UIInputViewSetPlacementOnScreen <NSSecureCoding>



@property (nonatomic) BOOL dismissKeyboardOnly; // ivar: _dismissKeyboardOnly
@property (nonatomic) CGFloat offset; // ivar: _offset


+(BOOL)supportsSecureCoding;
+(id)placementWithOffset:(CGFloat)arg0 dismissKeyboardOnly:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isInteractive;
-(Class)applicatorClassForKeyboard:(BOOL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)verticalConstraintForInputViewSet:(id)arg0 hostView:(id)arg1 containerView:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif