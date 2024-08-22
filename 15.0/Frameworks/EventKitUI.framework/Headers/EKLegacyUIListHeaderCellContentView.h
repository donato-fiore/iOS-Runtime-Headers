// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKLEGACYUILISTHEADERCELLCONTENTVIEW_H
#define EKLEGACYUILISTHEADERCELLCONTENTVIEW_H

@class UIView;



@interface EKLegacyUIListHeaderCellContentView : UIView {
    CGFloat _date;
    BOOL _indentsForDots;
}


@property (nonatomic) CGFloat date;
@property (nonatomic) BOOL indentsForDots;
@property (nonatomic) BOOL showWeekNumber; // ivar: _showWeekNumber


-(id)_normalTextColor;
-(id)_normalTextShadowColor;
-(id)_weekNumberFont;
-(struct CGRect )_rectForOffetTextShadow:(struct CGRect )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)drawTitle:(id)arg0 withColor:(id)arg1 withShadowColor:(id)arg2 inRect:(struct CGRect )arg3 ;


@end


#endif