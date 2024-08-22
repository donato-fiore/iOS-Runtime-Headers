// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPCAPTIONBARACCESSORYVIEW_H
#define LPCAPTIONBARACCESSORYVIEW_H

@class UIColor, UIImageView;


#import "LPComponentView.h"

@interface LPCaptionBarAccessoryView : LPComponentView {
    NSInteger _type;
    UIColor *_color;
    UIImageView *_accessoryView;
}


@property (readonly, nonatomic) CGSize size;


-(id)_createImageViewWithImage:(id)arg0 ;
-(id)ensureAccessoryView;
-(id)initWithHost:(id)arg0 ;
-(id)initWithHost:(id)arg0 type:(NSInteger)arg1 side:(NSInteger)arg2 ;
-(void)layoutComponentView;


@end


#endif