// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSAPPCLIPUNAVAILABLEVIEW_H
#define CPSAPPCLIPUNAVAILABLEVIEW_H

@class UIView, NSString;


#import "CPSVibrantLabel.h"

@interface CPSAppClipUnavailableView : UIView {
    CPSVibrantLabel *_reasonLabel;
}


@property (nonatomic) NSString *reasonString;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setUpViews;


@end


#endif