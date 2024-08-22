// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBAPPSWITCHERSERVICEPAGECONTENTVIEW_H
#define SBAPPSWITCHERSERVICEPAGECONTENTVIEW_H

@class UIView, NSString;
@protocol SBAppSwitcherPageContentView;



@interface SBAppSwitcherServicePageContentView : UIView <SBAppSwitcherPageContentView>



@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, nonatomic) BOOL contentRequiresGroupOpacity;
@property (nonatomic) CGFloat cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger maskedCorners;
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (readonly) Class superclass;
@property (nonatomic, getter=isVisible) BOOL visible; // ivar: _visible


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)invalidate;


@end


#endif