// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKEYCOMMANDDISCOVERABILITYHUDCOLUMNVIEW_H
#define UIKEYCOMMANDDISCOVERABILITYHUDCOLUMNVIEW_H

@class UIFont, NSArray;
@protocol UIKeyCommandDiscoverabilityHUDColumnViewDelegate;


#import "UIView.h"
#import "UIKeyCommandDiscoverabilityHUDVisualStyle.h"
#import "UILayoutGuide.h"

@interface UIKeyCommandDiscoverabilityHUDColumnView : UIView {
    id<UIKeyCommandDiscoverabilityHUDColumnViewDelegate> *_delegate;
    UIKeyCommandDiscoverabilityHUDVisualStyle *_visualStyle;
    UIFont *_baseFont;
    UILayoutGuide *_descriptionColumnLayoutGuide;
    UILayoutGuide *_modifiersColumnLayoutGuide;
    UILayoutGuide *_inputStringColumnLayoutGuide;
    NSArray *_descriptionViews;
    NSArray *_modifierViews;
    NSArray *_inputStringViews;
    NSArray *_constraints;
}


@property (nonatomic) CGFloat fontScaleFactor; // ivar: _fontScaleFactor


-(id)initWithDelegate:(id)arg0 ;
-(void)setKeyCommands:(id)arg0 withVisualStyle:(id)arg1 ;


@end


#endif