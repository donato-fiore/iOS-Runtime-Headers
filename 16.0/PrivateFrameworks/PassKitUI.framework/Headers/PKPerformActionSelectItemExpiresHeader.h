// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPERFORMACTIONSELECTITEMEXPIRESHEADER_H
#define PKPERFORMACTIONSELECTITEMEXPIRESHEADER_H

@class UIView, UILabel, NSString;



@interface PKPerformActionSelectItemExpiresHeader : UIView {
    UILabel *_leadingLabel;
    UILabel *_trailingLabel;
}


@property (retain, nonatomic) NSString *leadingString; // ivar: _leadingString
@property (retain, nonatomic) NSString *trailingString; // ivar: _trailingString


-(id)init;
-(void)layoutSubviews;


@end


#endif