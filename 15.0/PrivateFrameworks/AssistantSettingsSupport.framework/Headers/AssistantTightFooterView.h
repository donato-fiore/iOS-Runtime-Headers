// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASSISTANTTIGHTFOOTERVIEW_H
#define ASSISTANTTIGHTFOOTERVIEW_H

@class UIView, UILabel, NSString;
@protocol PSHeaderFooterView;



@interface AssistantTightFooterView : UIView <PSHeaderFooterView>

 {
    UILabel *_textLabel;
    NSString *_text;
}


@property (readonly, nonatomic) NSString *text;


-(CGFloat)preferredHeightForWidth:(CGFloat)arg0 ;
-(id)initWithSpecifier:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_formatText;
-(void)layoutSubviews;


@end


#endif