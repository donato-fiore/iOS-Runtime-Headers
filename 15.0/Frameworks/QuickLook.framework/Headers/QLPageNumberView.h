// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLPAGENUMBERVIEW_H
#define QLPAGENUMBERVIEW_H

@class UIView, UILabel, NSNumberFormatter;



@interface QLPageNumberView : UIView {
    NSInteger _pageNumber;
    NSInteger _pageCount;
    UILabel *_backgroundLabel;
    UILabel *_label;
    NSNumberFormatter *_indexFormatter;
}


@property NSInteger pageCount;
@property NSInteger pageNumber;


-(id)_indexFormatter;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPath *)_copyMutablePathForRoundedRect:(struct CGRect )arg0 radius:(CGFloat)arg1 inverted:(BOOL)arg2 ;
-(void)_updateString;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)sizeToFit;


@end


#endif