// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SIRIUINAVIGATIONCONTENTVIEW_H
#define _SIRIUINAVIGATIONCONTENTVIEW_H

@class UIView;



@interface _SiriUINavigationContentView : UIView

@property (nonatomic, getter=isContentLayoutEnabled) BOOL contentLayoutEnabled; // ivar: _contentLayoutEnabled
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif