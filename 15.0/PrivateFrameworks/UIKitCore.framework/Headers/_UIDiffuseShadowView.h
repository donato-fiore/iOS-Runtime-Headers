// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDIFFUSESHADOWVIEW_H
#define _UIDIFFUSESHADOWVIEW_H



#import "UIView.h"

@interface _UIDiffuseShadowView : UIView

@property (nonatomic) CGFloat intensity;
@property (nonatomic) CGSize offset;
@property (nonatomic) CGFloat radius;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateForCurrentTraits;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif