// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSGCARRIERREJECTCODEPANE_H
#define PSGCARRIERREJECTCODEPANE_H

@class PSEditingPane, UILabel;



@interface PSGCarrierRejectCodePane : PSEditingPane {
    UILabel *_rejectMessage;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setPreferenceSpecifier:(id)arg0 ;


@end


#endif