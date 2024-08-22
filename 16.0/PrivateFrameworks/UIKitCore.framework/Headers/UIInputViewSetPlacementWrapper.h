// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIINPUTVIEWSETPLACEMENTWRAPPER_H
#define UIINPUTVIEWSETPLACEMENTWRAPPER_H

@protocol NSSecureCoding;


#import "UIInputViewSetPlacement.h"

@interface UIInputViewSetPlacementWrapper : UIInputViewSetPlacement <NSSecureCoding>

 {
    UIInputViewSetPlacement *_actualPlacement;
}




+(BOOL)supportsSecureCoding;
+(id)placementWithPlacement:(id)arg0 ;
-(BOOL)accessoryViewWillAppear;
-(BOOL)inputViewWillAppear;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isInteractive;
-(BOOL)isUndocked;
-(BOOL)isVisible;
-(BOOL)showsEditItems;
-(BOOL)showsInputOrAssistantViews;
-(BOOL)showsInputViews;
-(BOOL)showsKeyboard;
-(CGFloat)alpha;
-(CGFloat)inputAssistantViewHeightForInputViewSet:(id)arg0 ;
-(Class)applicatorClassForKeyboard:(BOOL)arg0 ;
-(NSUInteger)computeComparisonMask;
-(NSUInteger)indexForPurpose:(NSUInteger)arg0 ;
-(id)applicatorInfoForOwner:(id)arg0 ;
-(id)description;
-(id)horizontalConstraintForInputViewSet:(id)arg0 hostView:(id)arg1 containerView:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)subPlacements;
-(id)verticalConstraintForInputViewSet:(id)arg0 hostView:(id)arg1 containerView:(id)arg2 ;
-(id)widthConstraintForInputViewSet:(id)arg0 hostView:(id)arg1 containerView:(id)arg2 ;
-(struct CGAffineTransform )transform;
-(struct CGRect )remoteIntrinsicContentSizeForInputViewInSet:(id)arg0 includingIAV:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDirty;


@end


#endif