// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHITTESTEXTENDEDVIEW_H
#define SBHITTESTEXTENDEDVIEW_H

@class UIView;



@interface SBHitTestExtendedView : UIView

@property (nonatomic) BOOL hitTestsSubviewsOutsideBounds; // ivar: _hitTestsSubviewsOutsideBounds


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif