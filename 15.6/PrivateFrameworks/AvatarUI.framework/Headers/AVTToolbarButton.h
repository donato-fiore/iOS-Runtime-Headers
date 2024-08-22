// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTTOOLBARBUTTON_H
#define AVTTOOLBARBUTTON_H

@class UIButton, NSString;



@interface AVTToolbarButton : UIButton

@property (readonly, nonatomic) BOOL isDefault; // ivar: _isDefault
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithTitle:(id)arg0 isDefault:(BOOL)arg1 ;


@end


#endif