// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFSAFARILAUNCHPLACEHOLDERVIEW_H
#define SFSAFARILAUNCHPLACEHOLDERVIEW_H

@class UIView, UINavigationBar, UIToolbar, NSString;
@protocol UINavigationBarDelegate;



@interface SFSafariLaunchPlaceholderView : UIView <UINavigationBarDelegate>

 {
    UINavigationBar *_topNavigationBar;
    UIToolbar *_bottomToolbar;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat topLayoutGuideInset; // ivar: _topLayoutGuideInset


-(NSInteger)positionForBar:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)updateBarTintColor:(id)arg0 ;


@end


#endif