// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef JFXTEXTEFFECTFRAME_H
#define JFXTEXTEFFECTFRAME_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "JFXTextEffectTransforms.h"

@interface JFXTextEffectFrame : NSObject

@property (readonly, nonatomic) CGPoint center;
@property (nonatomic) PVCGPointQuad cornerPoints; // ivar: _cornerPoints
@property (nonatomic) int effectOrigin; // ivar: _effectOrigin
@property (nonatomic) CGSize effectSize; // ivar: _effectSize
@property (nonatomic) *CGPath expandedHitAreaPath; // ivar: _expandedHitAreaPath
@property (nonatomic) BOOL forcePosterFrame; // ivar: _forcePosterFrame
@property (nonatomic) *CGPath hitAreaPath; // ivar: _hitAreaPath
@property (retain, nonatomic) NSArray *hitAreaPoints; // ivar: _hitAreaPoints
@property (nonatomic) CGRect objectBounds; // ivar: _objectBounds
@property (nonatomic) int origin; // ivar: _origin
@property (nonatomic) CGRect outputROI; // ivar: _outputROI
@property (nonatomic) CGSize relativeToSize; // ivar: _relativeToSize
@property (retain, nonatomic) NSArray *textFrames; // ivar: _textFrames
@property (nonatomic) ? time; // ivar: _time
@property (nonatomic) ? transform; // ivar: _transform
@property (nonatomic) PVTransformInfo transformInfo; // ivar: _transformInfo
@property (retain, nonatomic) JFXTextEffectTransforms *transforms; // ivar: _transforms
@property (readonly, nonatomic) CGRect viewSpaceObjectBounds;


+(id)frameWithEffect:(id)arg0 relativeToSize:(struct CGSize )arg1 origin:(int)arg2 time:(struct ? )arg3 forcePosterFrame:(BOOL)arg4 includeDropShadow:(BOOL)arg5 includeTextFrames:(BOOL)arg6 ;
-(id)description;
-(id)initWithEffect:(id)arg0 relativeToSize:(struct CGSize )arg1 origin:(int)arg2 time:(struct ? )arg3 forcePosterFrame:(BOOL)arg4 includeDropShadow:(BOOL)arg5 includeTextFrames:(BOOL)arg6 ;
-(void)dealloc;


@end


#endif