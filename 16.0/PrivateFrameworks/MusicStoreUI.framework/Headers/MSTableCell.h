// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSTABLECELL_H
#define MSTABLECELL_H

@class SUTableCell, UIImageView, UIView, SUPlayerStatus;


#import "MSAudioProgressView.h"

@interface MSTableCell : SUTableCell {
    UIImageView *_backsideSnapshotView;
    UIView *_previewContainerView;
    MSAudioProgressView *_previewProgressView;
}


@property (retain, nonatomic) SUPlayerStatus *previewStatus; // ivar: _previewStatus


-(void)_destroyPreviewProgressView;
-(void)_flipFromPreviewProgressView;
-(void)_flipToPreviewProgressView;
-(void)dealloc;


@end


#endif