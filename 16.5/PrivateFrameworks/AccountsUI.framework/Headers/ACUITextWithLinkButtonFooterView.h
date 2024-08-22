// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACUITEXTWITHLINKBUTTONFOOTERVIEW_H
#define ACUITEXTWITHLINKBUTTONFOOTERVIEW_H

@class UIView, NSArray, UILabel, NSString;
@protocol PSHeaderFooterView;



@interface ACUITextWithLinkButtonFooterView : UIView <PSHeaderFooterView>

 {
    NSArray *_linkButtons;
    UILabel *_textLabel;
    NSString *_footerText;
}




-(CGFloat)_heightForEmptyLineConstrainedToWidth:(CGFloat)arg0 ;
-(CGFloat)_heightForFooterTextConstrainedToWidth:(CGFloat)arg0 ;
-(CGFloat)_heightForLinkButton:(id)arg0 constrainedToWidth:(CGFloat)arg1 ;
-(CGFloat)preferredHeightForWidth:(CGFloat)arg0 ;
-(id)initWithSpecifier:(id)arg0 ;
-(id)initWithText:(id)arg0 linkButton:(id)arg1 ;
-(id)initWithText:(id)arg0 linkButtons:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif