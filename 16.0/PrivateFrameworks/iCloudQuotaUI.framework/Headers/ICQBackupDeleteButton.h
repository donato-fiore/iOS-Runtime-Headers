// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQBACKUPDELETEBUTTON_H
#define ICQBACKUPDELETEBUTTON_H

@class UIView, UIButton;
@protocol PSHeaderFooterView;



@interface ICQBackupDeleteButton : UIView <PSHeaderFooterView>

 {
    UIButton *_deleteButton;
}




+(CGFloat)usageDeleteButtonHeight;
-(CGFloat)preferredHeightForWidth:(CGFloat)arg0 ;
-(id)initWithSpecifier:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif