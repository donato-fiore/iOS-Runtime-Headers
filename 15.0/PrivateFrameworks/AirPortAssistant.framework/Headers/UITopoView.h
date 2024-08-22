// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UITOPOVIEW_H
#define UITOPOVIEW_H

@class UIView;


#import "NetTopoMiniStaticLayout.h"

@interface UITopoView : UIView

@property (retain, nonatomic) NetTopoMiniStaticLayout *netTopoMiniStaticLayout; // ivar: netTopoMiniStaticLayout


-(struct CGSize )intrinsicContentSize;
-(void)dealloc;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif