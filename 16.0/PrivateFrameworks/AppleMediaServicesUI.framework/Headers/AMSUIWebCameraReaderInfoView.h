// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUIWEBCAMERAREADERINFOVIEW_H
#define AMSUIWEBCAMERAREADERINFOVIEW_H

@class UIButton, UILabel;
@protocol AMSUIWebActionRunnable;


#import "AMSUICommonView.h"

@interface AMSUIWebCameraReaderInfoView : AMSUICommonView

@property (retain, nonatomic) UIButton *bottomLink; // ivar: _bottomLink
@property (retain, nonatomic) NSObject<AMSUIWebActionRunnable> *bottomLinkAction; // ivar: _bottomLinkAction
@property (retain, nonatomic) UILabel *primaryLabel; // ivar: _primaryLabel
@property (retain, nonatomic) UILabel *secondaryLabel; // ivar: _secondaryLabel


-(id)_createButtonWithTarget:(id)arg0 selector:(SEL)arg1 ;
-(id)_createLabelWithLines:(NSInteger)arg0 title:(BOOL)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_bottomLinkSelected:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif