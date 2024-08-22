// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKINVISIBLEINKEFFECTVIEW_H
#define CKINVISIBLEINKEFFECTVIEW_H

@class UIView, NSString, UIImage;
@protocol CKInvisibleInkEffectCoverageTrackerDelegate, CKInvisibleInkEffectViewDelegate;


#import "CKInvisibleInkEffectCoverageTracker.h"

@interface CKInvisibleInkEffectView : UIView <CKInvisibleInkEffectCoverageTrackerDelegate>



@property (retain, nonatomic) CKInvisibleInkEffectCoverageTracker *coverageTracker; // ivar: _coverageTracker
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKInvisibleInkEffectViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic, getter=isPaused) BOOL paused; // ivar: _paused
@property (readonly) Class superclass;
@property (nonatomic, getter=isSuspended) BOOL suspended; // ivar: _suspended


+(CGFloat)updateInterval;
+(void)initialize;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)endEmittersForTouchesCancelled:(id)arg0 ;
-(void)endEmittersForTouchesEnded:(id)arg0 ;
-(void)invisibleInkEffectCoverageTrackerDidUncover:(id)arg0 ;
-(void)layoutSubviews;
-(void)moveEmittersForTouchesBegan:(id)arg0 ;
-(void)moveEmittersForTouchesMoved:(id)arg0 ;
-(void)reset;


@end


#endif