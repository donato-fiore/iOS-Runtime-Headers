// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKTRANSCRIPTPHOTOSTACKCELL_H
#define CKTRANSCRIPTPHOTOSTACKCELL_H

@class UIPinchGestureRecognizer;
@protocol CKTranscriptPhotoStackCellDelegate;


#import "CKTranscriptBalloonCell.h"

@interface CKTranscriptPhotoStackCell : CKTranscriptBalloonCell

@property (weak, nonatomic) NSObject<CKTranscriptPhotoStackCellDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer; // ivar: _pinchGestureRecognizer


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)photoStackBalloonView;
-(void)handlePinchGesture:(id)arg0 ;
-(void)layoutSubviews;
-(void)layoutSubviewsForAlignmentContents;
-(void)setWantsContactImageLayout:(BOOL)arg0 ;


@end


#endif