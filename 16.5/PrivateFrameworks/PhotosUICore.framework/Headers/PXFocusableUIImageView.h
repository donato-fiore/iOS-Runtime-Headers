// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXFOCUSABLEUIIMAGEVIEW_H
#define PXFOCUSABLEUIIMAGEVIEW_H

@class UIImageView;



@interface PXFocusableUIImageView : UIImageView

@property (nonatomic) BOOL allowsFocus; // ivar: _allowsFocus
@property (nonatomic) BOOL drawsFocusRing; // ivar: _drawsFocusRing
@property (nonatomic) BOOL reusable; // ivar: _reusable


-(BOOL)_isEligibleForFocusInteraction;
-(BOOL)canBecomeFocused;
-(id)focusEffect;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif