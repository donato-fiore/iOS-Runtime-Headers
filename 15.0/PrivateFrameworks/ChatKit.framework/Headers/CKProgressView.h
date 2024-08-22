// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKPROGRESSVIEW_H
#define CKPROGRESSVIEW_H

@class UIProgressView, UIView;



@interface CKProgressView : UIProgressView

@property (retain, nonatomic) UIView *__ck_progressView; // ivar: ___ck_progressView
@property (retain, nonatomic) UIView *__ck_trackView; // ivar: ___ck_trackView


-(id)initWithProgressViewStyle:(NSInteger)arg0 ;
-(void)setProgress:(float)arg0 ;
-(void)setProgress:(float)arg0 animated:(BOOL)arg1 ;
-(void)setTintColor:(id)arg0 ;
-(void)setTrackTintColor:(id)arg0 ;
-(void)setUpCKProgressView;
-(void)setUpTrackView;


@end


#endif