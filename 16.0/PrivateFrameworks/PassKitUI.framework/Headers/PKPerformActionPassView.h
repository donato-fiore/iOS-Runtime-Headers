// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPERFORMACTIONPASSVIEW_H
#define PKPERFORMACTIONPASSVIEW_H

@class PKPass, UIImageView;


#import "PKPerformActionBackdropView.h"
#import "PKPassSnapshotter.h"

@interface PKPerformActionPassView : PKPerformActionBackdropView {
    PKPass *_pass;
    PKPassSnapshotter *_snapshotter;
    UIImageView *_passView;
}




-(id)init;
-(id)initWithPass:(id)arg0 frame:(struct CGRect )arg1 ;
-(struct CGSize )_passImageSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_createSubviews;
-(void)_loadSnapshotView;
-(void)configureWithPass:(id)arg0 frame:(struct CGRect )arg1 ;
-(void)layoutSubviews;
-(void)shakeImage;
-(void)smallShakeImage;


@end


#endif