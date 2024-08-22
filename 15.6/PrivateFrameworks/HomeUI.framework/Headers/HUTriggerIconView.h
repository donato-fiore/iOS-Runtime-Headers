// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUTRIGGERICONVIEW_H
#define HUTRIGGERICONVIEW_H

@class UIView, NSArray;


#import "HUIconView.h"

@interface HUTriggerIconView : UIView

@property (retain, nonatomic) NSArray *constraints; // ivar: _constraints
@property (retain, nonatomic) HUIconView *iconView; // ivar: _iconView


-(id)initWithIconDescriptor:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)layoutSubviews;


@end


#endif