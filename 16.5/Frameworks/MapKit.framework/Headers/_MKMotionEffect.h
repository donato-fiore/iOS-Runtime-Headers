// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKMOTIONEFFECT_H
#define _MKMOTIONEFFECT_H

@class UIMotionEffect;
@protocol _MKMotionEffectDelegate;



@interface _MKMotionEffect : UIMotionEffect {
    UIOffset _offset;
}


@property (weak, nonatomic) NSObject<_MKMotionEffectDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled


-(id)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset )arg0 ;
-(struct CATransform3D )transformWithTranslationScale:(struct UIOffset )arg0 rotationScale:(struct UIOffset )arg1 ;
-(struct UIOffset )offsetWithScale:(struct UIOffset )arg0 ;
-(struct UIOffset )rawOffset;


@end


#endif