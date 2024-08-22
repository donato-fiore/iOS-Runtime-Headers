// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMLIVEPHOTOSTATUSINDICATOR_H
#define CAMLIVEPHOTOSTATUSINDICATOR_H



#import "CAMControlStatusIndicator.h"
#import "CAMLivePhotoBloomView.h"

@interface CAMLivePhotoStatusIndicator : CAMControlStatusIndicator

@property (readonly, nonatomic) CAMLivePhotoBloomView *_bloomView; // ivar: __bloomView
@property (nonatomic) NSInteger livePhotoMode; // ivar: _livePhotoMode


-(BOOL)shouldShowSlashForCurrentState;
-(BOOL)shouldUseActiveTintForCurrentState;
-(BOOL)shouldUseOutline;
-(BOOL)shouldUseSlash;
-(id)imageNameForAXHUD;
-(id)imageNameForCurrentState;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_updateTintColor;
-(void)layoutSubviews;
-(void)startAnimating;
-(void)stopAnimating;


@end


#endif