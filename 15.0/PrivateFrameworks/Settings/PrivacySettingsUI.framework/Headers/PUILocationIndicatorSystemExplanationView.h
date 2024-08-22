// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUILOCATIONINDICATORSYSTEMEXPLANATIONVIEW_H
#define PUILOCATIONINDICATORSYSTEMEXPLANATIONVIEW_H

@class UILabel;


#import "PUILocationIndicatorExplanationView.h"

@interface PUILocationIndicatorSystemExplanationView : PUILocationIndicatorExplanationView {
    UILabel *_additionalInfoLabel;
}




-(CGFloat)preferredHeightForWidth:(CGFloat)arg0 inTableView:(id)arg1 ;
-(id)initWithSpecifier:(id)arg0 ;
-(void)layoutForWidth:(CGFloat)arg0 inTableView:(id)arg1 ;


@end


#endif