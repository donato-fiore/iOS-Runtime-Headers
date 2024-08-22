// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKBEMOJISNAPSHOTSIZINGVIEW_H
#define UIKBEMOJISNAPSHOTSIZINGVIEW_H



#import "UIView.h"

@interface UIKBEmojiSnapshotSizingView : UIView {
    CGSize _snapshotSize;
}


@property (readonly, nonatomic) UIView *snapshotView; // ivar: _snapshotView


-(id)initWithSnapshotView:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)dealloc;


@end


#endif