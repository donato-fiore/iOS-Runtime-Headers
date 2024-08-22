// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVHOMELOADINGBUTTONCONTROLITEM_H
#define AVHOMELOADINGBUTTONCONTROLITEM_H

@class UIFont;


#import "AVControlItem.h"
#import "AVLoadingButtonView.h"

@interface AVHomeLoadingButtonControlItem : AVControlItem {
    UIFont *_titleFont;
}


@property (retain, nonatomic) AVLoadingButtonView *loadingButtonView; // ivar: _loadingButtonView
@property (nonatomic) BOOL showsLoadingIndicator;


-(id)initWithTitle:(id)arg0 type:(NSInteger)arg1 ;
-(id)titleFont;
-(id)view;
-(void)_buttonTouchUpInside:(id)arg0 ;
-(void)_updateTintColor;
-(void)setTitleFont:(id)arg0 ;


@end


#endif