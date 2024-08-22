// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JFXOVERLAYEFFECTFRAME_H
#define JFXOVERLAYEFFECTFRAME_H



#import "JFXTextEffectFrame.h"
#import "JFXOverlayEffectTransforms.h"

@interface JFXOverlayEffectFrame : JFXTextEffectFrame

@property (readonly, nonatomic) BOOL isTrackedButTrackingUnavailable;
@property (nonatomic) CGPoint overlayCenter; // ivar: _overlayCenter
@property (nonatomic) NSInteger trackingType; // ivar: _trackingType
@property (retain, nonatomic) JFXOverlayEffectTransforms *transforms;


+(id)frameWithEffect:(id)arg0 relativeToSize:(struct CGSize )arg1 origin:(int)arg2 time:(struct ? )arg3 forcePosterFrame:(BOOL)arg4 includeDropShadow:(BOOL)arg5 includeTextFrames:(BOOL)arg6 ;
-(id)description;
-(id)initWithEffect:(id)arg0 relativeToSize:(struct CGSize )arg1 origin:(int)arg2 time:(struct ? )arg3 forcePosterFrame:(BOOL)arg4 includeDropShadow:(BOOL)arg5 includeTextFrames:(BOOL)arg6 ;


@end


#endif