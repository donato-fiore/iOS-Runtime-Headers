// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIALERTCONTROLLERIOSACTIONSHEETCANCELBACKGROUNDVIEW_H
#define _UIALERTCONTROLLERIOSACTIONSHEETCANCELBACKGROUNDVIEW_H

@class NSString;
@protocol UIInterfaceActionVisualBackgroundDisplaying, UIInterfaceActionVisualGroupBackgroundDisplaying;


#import "UIView.h"

@interface _UIAlertControlleriOSActionSheetCancelBackgroundView : UIView <UIInterfaceActionVisualBackgroundDisplaying, UIInterfaceActionVisualGroupBackgroundDisplaying>

 {
    UIView *backgroundView;
    UIView *highlightBackgroundView;
    UIView *highlightView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)setCornerRadius:(CGFloat)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setPressed:(BOOL)arg0 ;
-(void)setRoundedCornerPosition:(NSUInteger)arg0 ;


@end


#endif