// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCSCHEDULERVIEWHEADER_H
#define NCSCHEDULERVIEWHEADER_H

@class UICollectionReusableView, UILabel;



@interface NCSchedulerViewHeader : UICollectionReusableView {
    UILabel *_label;
}




+(CGFloat)preferredHeightForWidth:(CGFloat)arg0 ;
+(id)_font;
+(id)_text;
+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif