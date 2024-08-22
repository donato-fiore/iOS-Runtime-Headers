// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKEYBOARDKEYPLANESNAPSHOTVIEW_H
#define UIKEYBOARDKEYPLANESNAPSHOTVIEW_H



#import "UIView.h"
#import "UIImageView.h"

@interface UIKeyboardKeyplaneSnapshotView : UIView {
    UIImageView *_fgView;
    UIImageView *_bgView;
}




-(id)initWithKeyplaneView:(id)arg0 ;
-(id)snapshotFromView:(id)arg0 ;
-(void)setAlpha:(CGFloat)arg0 ;


@end


#endif