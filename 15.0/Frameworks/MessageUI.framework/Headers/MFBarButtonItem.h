// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFBARBUTTONITEM_H
#define MFBARBUTTONITEM_H

@class UIBarButtonItem, UIImage;



@interface MFBarButtonItem : UIBarButtonItem

@property (retain, nonatomic) UIImage *disabledImage; // ivar: _disabledImage
@property (retain, nonatomic) UIImage *enabledImage; // ivar: _enabledImage


-(id)initWithImage:(id)arg0 disabledImage:(id)arg1 style:(NSInteger)arg2 target:(id)arg3 action:(SEL)arg4 ;
-(void)setEnabled:(BOOL)arg0 ;


@end


#endif