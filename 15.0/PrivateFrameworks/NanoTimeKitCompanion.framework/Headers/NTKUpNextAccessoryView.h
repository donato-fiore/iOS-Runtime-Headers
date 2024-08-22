// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKUPNEXTACCESSORYVIEW_H
#define NTKUPNEXTACCESSORYVIEW_H

@class UIView, REAccessoryDescription;


#import "NTKColoringLabel.h"

@interface NTKUpNextAccessoryView : UIView {
    REAccessoryDescription *_accessoryDescription;
    NTKColoringLabel *_label;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForLastBaselineLayout;
-(void)configureWithDescription:(id)arg0 ;
-(void)setTextColor:(id)arg0 ;


@end


#endif