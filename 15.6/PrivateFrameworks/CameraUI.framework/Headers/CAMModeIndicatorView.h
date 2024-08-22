// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMMODEINDICATORVIEW_H
#define CAMMODEINDICATORVIEW_H

@class UIControl, UIImageView;


#import "CAMModeDialItem.h"

@interface CAMModeIndicatorView : UIControl

@property (readonly, nonatomic) CAMModeDialItem *_modeTextView; // ivar: __modeTextView
@property (readonly, nonatomic) UIImageView *_symbolView; // ivar: __symbolView
@property (nonatomic) NSInteger selectedMode; // ivar: _selectedMode


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_symbolSize;
-(void)_updateModeIndicatorAnimated:(BOOL)arg0 ;
-(void)layoutSubviews;


@end


#endif