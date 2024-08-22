// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIALERTCONTROLLERIOSHIGHLIGHTEDBACKGROUNDVIEW_H
#define _UIALERTCONTROLLERIOSHIGHLIGHTEDBACKGROUNDVIEW_H

@class NSString;
@protocol UIInterfaceActionVisualBackgroundDisplaying, UIInterfaceActionVisualGroupBackgroundDisplaying;


#import "UIView.h"
#import "UIVisualEffectView.h"

@interface _UIAlertControlleriOSHighlightedBackgroundView : UIView <UIInterfaceActionVisualBackgroundDisplaying, UIInterfaceActionVisualGroupBackgroundDisplaying>

 {
    UIVisualEffectView *_effectView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;


-(id)init;
-(id)initWithStyle:(NSInteger)arg0 ;
-(void)_configureWithStyle:(NSInteger)arg0 ;
-(void)setCornerRadius:(CGFloat)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setPressed:(BOOL)arg0 ;
-(void)setRoundedCornerPosition:(NSUInteger)arg0 ;


@end


#endif