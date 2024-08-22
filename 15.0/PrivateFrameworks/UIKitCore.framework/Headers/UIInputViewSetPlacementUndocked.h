// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIINPUTVIEWSETPLACEMENTUNDOCKED_H
#define UIINPUTVIEWSETPLACEMENTUNDOCKED_H

@protocol NSSecureCoding;


#import "UIInputViewSetPlacement.h"

@interface UIInputViewSetPlacementUndocked : UIInputViewSetPlacement <NSSecureCoding>



@property (nonatomic) UIEdgeInsets chromeBuffer; // ivar: _chromeBuffer
@property (nonatomic) CGPoint normalizedOffset; // ivar: _normalizedOffset


+(BOOL)supportsSecureCoding;
+(id)infoWithPoint:(struct CGPoint )arg0 ;
+(id)placementWithUndockedOffset:(struct CGPoint )arg0 chromeBuffer:(struct UIEdgeInsets )arg1 ;
+(struct CGPoint )computeOffsetForOffset:(struct CGPoint )arg0 withSize:(struct CGSize )arg1 chromeBuffer:(struct UIEdgeInsets )arg2 onScreenSize:(struct CGSize )arg3 ;
-(BOOL)inputViewWillAppear;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isUndocked;
-(CGFloat)heightOfInputViews:(id)arg0 ;
-(Class)applicatorClassForKeyboard:(BOOL)arg0 ;
-(id)applicatorInfoForOwner:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)verticalConstraintForInputViewSet:(id)arg0 hostView:(id)arg1 containerView:(id)arg2 ;
-(struct CGRect )remoteIntrinsicContentSizeForInputViewInSet:(id)arg0 includingIAV:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setOffset:(struct CGPoint )arg0 ;


@end


#endif