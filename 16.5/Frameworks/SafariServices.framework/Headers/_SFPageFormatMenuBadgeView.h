// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFPAGEFORMATMENUBADGEVIEW_H
#define _SFPAGEFORMATMENUBADGEVIEW_H

@class UIView, UILabel;



@interface _SFPageFormatMenuBadgeView : UIView {
    UILabel *_titleLabel;
}




+(id)defaultComponentsArrangement;
-(id)initWithText:(id)arg0 ;
-(void)layoutSubviews;
-(void)setBadgeText:(id)arg0 ;


@end


#endif