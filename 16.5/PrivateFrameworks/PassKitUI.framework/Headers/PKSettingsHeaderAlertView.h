// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSETTINGSHEADERALERTVIEW_H
#define PKSETTINGSHEADERALERTVIEW_H

@class UIView, UITextView, NSString;
@protocol PSHeaderFooterView;



@interface PKSettingsHeaderAlertView : UIView <PSHeaderFooterView>

 {
    UITextView *_textView;
}


@property (retain, nonatomic) NSString *descriptionText; // ivar: _descriptionText
@property (retain, nonatomic) NSString *headerText; // ivar: _headerText


-(CGFloat)preferredHeightForWidth:(CGFloat)arg0 ;
-(id)initWithSpecifier:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif