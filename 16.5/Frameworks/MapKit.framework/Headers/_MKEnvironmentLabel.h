// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKENVIRONMENTLABEL_H
#define _MKENVIRONMENTLABEL_H

@class UIView, UILabel, NSString;



@interface _MKEnvironmentLabel : UIView {
    UILabel *_label;
}


@property (copy, nonatomic) NSString *text;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)sizeToFit;


@end


#endif